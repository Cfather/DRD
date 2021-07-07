clear; clc;

model = rabbit;
SpaSize = size(model.I{1},1);
q = sym('q',[model.NB,1],'real');
qd = sym('qd',[model.NB,1],'real');

a_grav = get_gravity(model);

% variables that need to be differentiated:
% 1. Xup (Xup{i} -> q{i})
% 2. fvp (fvp{i} -> q{1:i}, qd{1:i})
% 3. IC  (IC{i}  -> q{1:i})

dvdq = cell(1,model.NB);
for i = 1:model.NB
    dvdq{i} = sym(zeros(SpaSize,model.NB));
end
dvdqd = cell(1,model.NB);
for i = 1:model.NB
    dvdqd{i} = sym(zeros(SpaSize,model.NB));
end
davpdq = cell(1,model.NB);
for i = 1:model.NB
    davpdq{i} = sym(zeros(SpaSize,model.NB));
end
davpdqd = cell(1,model.NB);
for i = 1:model.NB
    davpdqd{i} = sym(zeros(SpaSize,model.NB));
end
dfvpdq = cell(1,model.NB);
for i = 1:model.NB
    dfvpdq{i} = sym(zeros(SpaSize,model.NB));
end
dfvpdqd = cell(1,model.NB);
for i = 1:model.NB
    dfvpdqd{i} = sym(zeros(SpaSize,model.NB));
end

for i = 1:model.NB
  [ XJ, dXJdq, S{i} ] = d_jcalc( model.jtype{i}, q(i) );
  vJ = S{i}*qd(i);
  Xup{i} = XJ * model.Xtree{i};
  dXupdq{i} = dXJdq * model.Xtree{i};
  if model.parent(i) == 0
    v{i} = vJ;
    dvdqd{i}(:,i) = S{i};
    avp{i} = Xup{i} * -a_grav;
    davpdq{i}(:,i) = dXupdq{i} * -a_grav;
  else
    v{i} = Xup{i}*v{model.parent(i)} + vJ;
    for k = 1:model.NB 
      if k == i
        dvdq{i}(:,k) = dXupdq{i}*v{model.parent(i)} + Xup{i}*dvdq{model.parent(i)}(:,k);  
        dvdqd{i}(:,k) = Xup{i}*dvdqd{model.parent(i)}(:,k) + S{i};
      else
        dvdq{i}(:,k) = Xup{i}*dvdq{model.parent(i)}(:,k);
        dvdqd{i}(:,k) = Xup{i}*dvdqd{model.parent(i)}(:,k);
      end
    end
    avp{i} = Xup{i}*avp{model.parent(i)} + crm(v{i})*vJ;
    [dcrmvdq, dcrmvdqd] = d_crm( v{i}, dvdq{i}, dvdqd{i}, model.NB );
    for k = 1:model.NB 
      if k == i
        davpdq{i}(:,k) = dXupdq{i}*avp{model.parent(i)} + Xup{i}*davpdq{model.parent(i)}(:,k) + dcrmvdq(:,:,k)*vJ;  
        davpdqd{i}(:,k) = Xup{i}*davpdqd{model.parent(i)}(:,k) + dcrmvdqd(:,:,k)*vJ + crm(v{i})*S{i};
      else
        davpdq{i}(:,k) = Xup{i}*davpdq{model.parent(i)}(:,k) + dcrmvdq(:,:,k)*vJ;
        davpdqd{i}(:,k) = Xup{i}*davpdqd{model.parent(i)}(:,k) + dcrmvdqd(:,:,k)*vJ;
      end
    end
  end
  fvp{i} = model.I{i}*avp{i} + crf(v{i})*model.I{i}*v{i};
  [dcrfvdq, dcrfvdqd] = d_crf( v{i}, dvdq{i}, dvdqd{i}, model.NB );
  for k = 1:model.NB 
    dfvpdq{i}(:,k) = model.I{i}*davpdq{i}(:,k) + dcrfvdq(:,:,k)*model.I{i}*v{i} + crf(v{i})*model.I{i}*dvdq{i}(:,k);
    dfvpdqd{i}(:,k) = model.I{i}*davpdqd{i}(:,k) + dcrfvdqd(:,:,k)*model.I{i}*v{i} + crf(v{i})*model.I{i}*dvdqd{i}(:,k);
  end
end

dCdq = sym(zeros(model.NB,1));
dCdqd = sym(zeros(model.NB,1));

for i = model.NB:-1:1
  C(i,1) = S{i}' * fvp{i};
  for k = 1:model.NB 
    dCdq(i,k) = S{i}' * dfvpdq{i}(:,k);
    dCdqd(i,k) = S{i}' * dfvpdqd{i}(:,k);
  end
  if model.parent(i) ~= 0
    fvp{model.parent(i)} = fvp{model.parent(i)} + Xup{i}'*fvp{i};
    for k = 1:model.NB
      if i == k
        dfvpdq{model.parent(i)}(:,k) = dfvpdq{model.parent(i)}(:,k) + dXupdq{i}'*fvp{i} + Xup{i}'*dfvpdq{i}(:,k); 
      else
        dfvpdq{model.parent(i)}(:,k) = dfvpdq{model.parent(i)}(:,k) + Xup{i}'*dfvpdq{i}(:,k);  
      end
      dfvpdqd{model.parent(i)}(:,k) = dfvpdqd{model.parent(i)}(:,k) + Xup{i}'*dfvpdqd{i}(:,k);
    end
  end
end

IC = model.I;				% composite inertia calculation
dICdq = cell(1,model.NB);
for i = model.NB:-1:1
    dICdq{i} = sym(zeros(SpaSize,SpaSize,model.NB));
end

for i = model.NB:-1:1
  if model.parent(i) ~= 0
    IC{model.parent(i)} = IC{model.parent(i)} + Xup{i}'*IC{i}*Xup{i};
    for j = model.NB:-1:1
        if i == j
            dICdq{model.parent(i)}(:,:,j) = dXupdq{i}'*IC{i}*Xup{i} + Xup{i}'*dICdq{i}(:,:,j)*Xup{i} + Xup{i}'*IC{i}*dXupdq{i};
        else
            dICdq{model.parent(i)}(:,:,j) = Xup{i}'*dICdq{i}(:,:,j)*Xup{i};
        end
    end
  end
end

% H = zeros(model.NB);
H = sym(zeros(model.NB));
dHdq = sym(zeros(model.NB,model.NB,model.NB));

for i = 1:model.NB
  fh = IC{i} * S{i};
  dfhdq = sym(zeros(SpaSize,model.NB));
  for k = 1:model.NB
    dfhdq(:,k) = dICdq{i}(:,:,k) * S{i};
  end
  H(i,i) = S{i}' * fh;
  for k = 1:model.NB
    dHdq(i,i,k) = S{i}' * dfhdq(:,k);
  end
  j = i;
  while model.parent(j) > 0
    for k = 1:model.NB
      if k == j
        dfhdq(:,k) = dXupdq{j}' * fh + Xup{j}' * dfhdq(:,k);
      else
        dfhdq(:,k) = Xup{j}' * dfhdq(:,k);
      end
    end
    fh = Xup{j}' * fh;
    j = model.parent(j);
    H(i,j) = S{j}' * fh;
    H(j,i) = H(i,j);
    for k = 1:model.NB
      dHdq(i,j,k) = S{j}' * dfhdq(:,k);
      dHdq(j,i,k) = dHdq(i,j,k);
    end
  end
end
