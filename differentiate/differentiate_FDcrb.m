clear; clc;

ifsymbolic = true;
ifjacobian = true;
ifsimplify = false;

% model = create_model_from_urdf('C:\Users\RoahmLab\Documents\DRD\urdf\cassie_Lpinned.urdf', 'x');
% model = create_model_from_urdf('C:\Users\RoahmLab\Documents\DRD\urdf\rabbit_pinned.urdf', 'y');
model = rabbit;
SpaSize = size(model.I{1},1);
if ifsymbolic
    q = sym('q',[model.NB,1]);
    qd = sym('qd',[model.NB,1]);
else
    q = 2*pi*rand(model.NB,1);
    qd = 2*pi*rand(model.NB,1);
%     q = [0:(model.NB-1)]';
%     qd = [-1:-1:(-model.NB)]';
    
%     M = LP_M(q);
%     F = LP_F(q,qd);
%     M = rabbit_pinned_M(q);
%     F = rabbit_pinned_F(q,qd);
end
% x = [q;qd];

a_grav = get_gravity(model);

% variables that need to be differentiated:
% 1. Xup (Xup{i} -> q{i})
% 2. fvp (fvp{i} -> q{1:i}, qd{1:i})
% 3. IC  (IC{i}  -> q{1:i})
tic;
Xup = cell(1,model.NB);
v = cell(1,model.NB);
avp = cell(1,model.NB);
fvp = cell(1,model.NB);
dXupdq = cell(1,model.NB);
dvdx = cell(1,model.NB);
davpdx = cell(1,model.NB);
dfvpdx = cell(1,model.NB);
if ifsymbolic
    for i = 1:model.NB
        dvdx{i} = sym(zeros(SpaSize,2*model.NB));
    end
    
    for i = 1:model.NB
        davpdx{i} = sym(zeros(SpaSize,2*model.NB));
    end
    
    for i = 1:model.NB
        dfvpdx{i} = sym(zeros(SpaSize,2*model.NB));
    end
else
    for i = 1:model.NB
        dvdx{i} = zeros(SpaSize,2*model.NB);
    end
    
    for i = 1:model.NB
        davpdx{i} = zeros(SpaSize,2*model.NB);
    end
    
    for i = 1:model.NB
        dfvpdx{i} = zeros(SpaSize,2*model.NB);
    end
end

for i = 1:model.NB
  [ XJ, dXJdq, S{i} ] = d_jcalc( model.jtype{i}, q(i) );
  vJ = S{i}*qd(i);
  Xup{i} = XJ * model.Xtree{i};
  
  if ifjacobian
    dXupdq{i} = dXJdq * model.Xtree{i};
  end
  
  if model.parent(i) == 0
    v{i} = vJ;
    avp{i} = Xup{i} * -a_grav;
    
    if ifjacobian
        dvdx{i}(:,i + model.NB) = S{i};
        davpdx{i}(:,i) = dXupdq{i} * -a_grav;
    end
  else
    v{i} = Xup{i}*v{model.parent(i)} + vJ;
    
    if ifjacobian
        for k = 1:model.NB 
          if k == i
            dvdx{i}(:,k) = dXupdq{i}*v{model.parent(i)} + Xup{i}*dvdx{model.parent(i)}(:,k);  
            dvdx{i}(:,k + model.NB) = Xup{i}*dvdx{model.parent(i)}(:,k + model.NB) + S{i};
          else
            dvdx{i}(:,k) = Xup{i}*dvdx{model.parent(i)}(:,k);
            dvdx{i}(:,k + model.NB) = Xup{i}*dvdx{model.parent(i)}(:,k + model.NB);
          end
        end
    end
    
    avp{i} = Xup{i}*avp{model.parent(i)} + crm(v{i})*vJ;
    
    if ifjacobian
        [dcrmvdq, dcrmvdqd] = d_crm( v{i}, dvdx{i}(:,1:model.NB), dvdx{i}(:,(model.NB+1):(2*model.NB)), model.NB, ifsymbolic );
        for k = 1:model.NB 
          if k == i
            davpdx{i}(:,k) = dXupdq{i}*avp{model.parent(i)} + Xup{i}*davpdx{model.parent(i)}(:,k) + dcrmvdq(:,:,k)*vJ;  
            davpdx{i}(:,k + model.NB) = Xup{i}*davpdx{model.parent(i)}(:,k + model.NB) + dcrmvdqd(:,:,k)*vJ + crm(v{i})*S{i};
          else
            davpdx{i}(:,k) = Xup{i}*davpdx{model.parent(i)}(:,k) + dcrmvdq(:,:,k)*vJ;
            davpdx{i}(:,k + model.NB) = Xup{i}*davpdx{model.parent(i)}(:,k + model.NB) + dcrmvdqd(:,:,k)*vJ;
          end
        end
    end
  end
  fvp{i} = model.I{i}*avp{i} + crf(v{i})*model.I{i}*v{i};
  
  if ifjacobian
      [dcrfvdq, dcrfvdqd] = d_crf( v{i}, dvdx{i}(:,1:model.NB), dvdx{i}(:,(model.NB+1):(2*model.NB)), model.NB, ifsymbolic );
      for k = 1:model.NB 
        dfvpdx{i}(:,k) = model.I{i}*davpdx{i}(:,k) + dcrfvdq(:,:,k)*model.I{i}*v{i} + crf(v{i})*model.I{i}*dvdx{i}(:,k);
        dfvpdx{i}(:,k + model.NB) = model.I{i}*davpdx{i}(:,k + model.NB) + dcrfvdqd(:,:,k)*model.I{i}*v{i} + crf(v{i})*model.I{i}*dvdx{i}(:,k + model.NB);
      end
  end
end

if ifsymbolic
    C = sym(zeros(model.NB,1));
    dCdq = sym(zeros(model.NB,1));
    dCdqd = sym(zeros(model.NB,1));
else
    C = (zeros(model.NB,1));
    dCdq = (zeros(model.NB,1));
    dCdqd = (zeros(model.NB,1));
end

for i = model.NB:-1:1
  C(i,1) = S{i}' * fvp{i};
  
  if ifjacobian
      for k = 1:model.NB 
        dCdq(i,k) = S{i}' * dfvpdx{i}(:,k);
        dCdqd(i,k) = S{i}' * dfvpdx{i}(:,k + model.NB);
      end
  end
  
  if model.parent(i) ~= 0
    fvp{model.parent(i)} = fvp{model.parent(i)} + Xup{i}'*fvp{i};
    
    if ifjacobian
        for k = 1:model.NB
          if i == k
            dfvpdx{model.parent(i)}(:,k) = dfvpdx{model.parent(i)}(:,k) + dXupdq{i}'*fvp{i} + Xup{i}'*dfvpdx{i}(:,k); 
          else
            dfvpdx{model.parent(i)}(:,k) = dfvpdx{model.parent(i)}(:,k) + Xup{i}'*dfvpdx{i}(:,k);  
          end
          dfvpdx{model.parent(i)}(:,k + model.NB) = dfvpdx{model.parent(i)}(:,k + model.NB) + Xup{i}'*dfvpdx{i}(:,k + model.NB);
        end
    end
  end
end

IC = model.I;				% composite inertia calculation
dICdq = cell(1,model.NB);
if ifsymbolic
    for i = model.NB:-1:1
        dICdq{i} = sym(zeros(SpaSize,SpaSize,model.NB));
    end
else
    for i = model.NB:-1:1
        dICdq{i} = (zeros(SpaSize,SpaSize,model.NB));
    end
end

for i = model.NB:-1:1
  if model.parent(i) ~= 0
    IC{model.parent(i)} = IC{model.parent(i)} + Xup{i}'*IC{i}*Xup{i};
    
    if ifjacobian
        for j = model.NB:-1:1
            if i == j
                dICdq{model.parent(i)}(:,:,j) = dXupdq{i}'*IC{i}*Xup{i} + Xup{i}'*dICdq{i}(:,:,j)*Xup{i} + Xup{i}'*IC{i}*dXupdq{i};
            else
                dICdq{model.parent(i)}(:,:,j) = Xup{i}'*dICdq{i}(:,:,j)*Xup{i};
            end
        end
    end
  end
end

if ifsymbolic
    H = sym(zeros(model.NB));
    dHdq = sym(zeros(model.NB,model.NB,model.NB));
else
    H = zeros(model.NB);
    dHdq = (zeros(model.NB,model.NB,model.NB));
end

for i = 1:model.NB
  fh = IC{i} * S{i};
  if ifsymbolic
    dfhdq = sym(zeros(SpaSize,model.NB));
  else
    dfhdq = (zeros(SpaSize,model.NB)); 
  end
  for k = 1:model.NB
    dfhdq(:,k) = dICdq{i}(:,:,k) * S{i};
  end
  if isfield(model, 'transmissionInertia')
    H(i,i) = S{i}' * fh + model.transmissionInertia{i};
  else
    H(i,i) = S{i}' * fh;
  end
  
  if ifjacobian
      for k = 1:model.NB
        dHdq(i,i,k) = S{i}' * dfhdq(:,k);
      end
  end
  
  j = i;
  while model.parent(j) > 0
    if ifjacobian
        for k = 1:model.NB
          if k == j
            dfhdq(:,k) = dXupdq{j}' * fh + Xup{j}' * dfhdq(:,k);
          else
            dfhdq(:,k) = Xup{j}' * dfhdq(:,k);
          end
        end
    end
    
    fh = Xup{j}' * fh;
    j = model.parent(j);
    H(i,j) = S{j}' * fh;
    H(j,i) = H(i,j);
    
    if ifjacobian
        for k = 1:model.NB
          dHdq(i,j,k) = S{j}' * dfhdq(:,k);
          dHdq(j,i,k) = dHdq(i,j,k);
        end
    end
  end
end

if ifsymbolic && ifsimplify
    H = simplify(H);
    C = simplify(C);
    
    if ifjacobian
        dHdq = simplify(dHdq);
        dCdq = simplify(dCdq);
        dCdqd = simplify(dCdqd);
    end
end
