clear; clc;

ifsymbolic = true;
ifjacobian = true;
ifhessian = true;
ifsimplify = false;

if ifhessian
    ifjacobian = true;
end

% model = create_model_from_urdf('C:\Users\RoahmLab\Documents\DRD\urdf\cassie_Lpinned.urdf', 'x');
model = create_model_from_urdf('C:\Users\RoahmLab\Documents\DRD\urdf\rabbit_pinned.urdf', 'y');
% model = rabbit;
N = model.NB;
SpaSize = size(model.I{1},1);
if ifsymbolic
    q = sym('q',[N,1],'real');
    qd = sym('qd',[N,1],'real');
else
    q = 2*pi*rand(N,1);
    qd = 2*pi*rand(N,1);
%     q = [0:(N-1)]';
%     qd = [-1:-1:(-N)]';
    
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
Xup = cell(1,N);
v = cell(1,N);
avp = cell(1,N);
fvp = cell(1,N);

if ifjacobian
    dXupdq = cell(1,N);
    dvdx = cell(1,N);
    davpdx = cell(1,N);
    dfvpdx = cell(1,N);
    if ifsymbolic
        for i = 1:N
            dXupdq{i} = sym(zeros(SpaSize,SpaSize));
        end

        for i = 1:N
            dvdx{i} = sym(zeros(SpaSize,2*N));
        end

        for i = 1:N
            davpdx{i} = sym(zeros(SpaSize,2*N));
        end

        for i = 1:N
            dfvpdx{i} = sym(zeros(SpaSize,2*N));
        end
    else
        for i = 1:N
            dXupdq{i} = zeros(SpaSize,SpaSize);
        end

        for i = 1:N
            dvdx{i} = zeros(SpaSize,2*N);
        end

        for i = 1:N
            davpdx{i} = zeros(SpaSize,2*N);
        end

        for i = 1:N
            dfvpdx{i} = zeros(SpaSize,2*N);
        end
    end
end

if ifhessian
    ddXupddq = cell(1,N);
    ddvddx = cell(1,N);
    ddavpddx = cell(1,N);
    ddfvpddx = cell(1,N);
    if ifsymbolic
        for i = 1:N
            ddXupddq{i} = sym(zeros(SpaSize,SpaSize));
        end

        for i = 1:N
            ddvddx{i} = sym(zeros(SpaSize,2*N,2*N));
        end

        for i = 1:N
            ddavpddx{i} = sym(zeros(SpaSize,2*N,2*N));
        end

        for i = 1:N
            ddfvpddx{i} = sym(zeros(SpaSize,2*N,2*N));
        end
    else
        for i = 1:N
            ddXupddq{i} = zeros(SpaSize,SpaSize);
        end

        for i = 1:N
            ddvddx{i} = zeros(SpaSize,2*N,2*N);
        end

        for i = 1:N
            ddavpddx{i} = zeros(SpaSize,2*N,2*N);
        end

        for i = 1:N
            ddfvpddx{i} = zeros(SpaSize,2*N,2*N);
        end
    end
end

for i = 1:N
  [ XJ, dXJdq, ddXJddq, S{i} ] = d_jcalc( model.jtype{i}, q(i) );
  vJ = S{i}*qd(i);
  Xup{i} = XJ * model.Xtree{i};
  
  if ifjacobian
    dXupdq{i} = dXJdq * model.Xtree{i};
  end
  
  if ifhessian
    ddXupddq{i} = ddXJddq * model.Xtree{i};
  end
  
  if model.parent(i) == 0
    v{i} = vJ;
    avp{i} = Xup{i} * -a_grav;
    
    if ifjacobian
      dvdx{i}(:,i + N) = S{i};
      davpdx{i}(:,i) = dXupdq{i} * -a_grav;
    end
    
    if ifhessian
      ddavpddx{i}(:,i,i) = ddXupddq{i} * -a_grav;
    end
  else
    v{i} = Xup{i}*v{model.parent(i)} + vJ;
    
    if ifjacobian
        for k = 1:N 
          if k == i
            dvdx{i}(:,k) = dXupdq{i}*v{model.parent(i)} + Xup{i}*dvdx{model.parent(i)}(:,k);  
            dvdx{i}(:,k + N) = Xup{i}*dvdx{model.parent(i)}(:,k + N) + S{i};
          else
            dvdx{i}(:,k) = Xup{i}*dvdx{model.parent(i)}(:,k);
            dvdx{i}(:,k + N) = Xup{i}*dvdx{model.parent(i)}(:,k + N);
          end
        end
    end
    
    if ifhessian
        for k1 = 1:N
          for k2 = 1:k1
            if k1 == k2
              if k1 == i
                ddvddx{i}(:,k1,k2) = ddXupddq{i}*v{model.parent(i)} + dXupdq{i}*dvdx{model.parent(i)}(:,k1) + dXupdq{i}*dvdx{model.parent(i)}(:,k) + Xup{i}*ddvddx{model.parent(i)}(:,k1,k2);  
                ddvddx{i}(:,k1,k2 + N) = ddXupddq{i}*dvdx{model.parent(i)}(:,k2 + N) + Xup{i}*ddvddx{model.parent(i)}(:,k1,k2 + N);
                ddvddx{i}(:,k1 + N,k2) = ddXupddq{i}*dvdx{model.parent(i)}(:,k1 + N) + Xup{i}*ddvddx{model.parent(i)}(:,k1 + N,k2);
              else
                ddvddx{i}(:,k1,k2) = Xup{i}*ddvddx{model.parent(i)}(:,k1,k2);
                ddvddx{i}(:,k1 + N,k2) = Xup{i}*ddvddx{model.parent(i)}(:,k1 + N,k2);
                ddvddx{i}(:,k1,k2 + N) = Xup{i}*ddvddx{model.parent(i)}(:,k1,k2 + N);
              end
            else
              if k1 == i
                ddvddx{i}(:,k1,k2) = dXupdq{i}*dvdx{model.parent(i)}(:,k2) + Xup{i}*ddvddx{model.parent(i)}(:,k1,k2);
                ddvddx{i}(:,k1,k2 + N) = dXupdq{i}*dvdx{model.parent(i)}(:,k2 + N) + Xup{i}*ddvddx{model.parent(i)}(:,k1,k2 + N);
                ddvddx{i}(:,k1 + N,k2) = Xup{i}*ddvddx{model.parent(i)}(:,k1 + N,k2);
              else
                if k2 == i
                  ddvddx{i}(:,k1,k2) = dXupdq{i}*dvdx{model.parent(i)}(:,k2) + Xup{i}*ddvddx{model.parent(i)}(:,k1,k2);
                  ddvddx{i}(:,k1 + N,k2) = dXupdq{i}*dvdx{model.parent(i)}(:,k1 + N) + Xup{i}*ddvddx{model.parent(i)}(:,k1 + N,k2);
                  ddvddx{i}(:,k1,k2 + N) = Xup{i}*ddvddx{model.parent(i)}(:,k1,k2 + N);
                else
                  ddvddx{i}(:,k1,k2) = Xup{i}*ddvddx{model.parent(i)}(:,k1,k2);
                  ddvddx{i}(:,k1 + N,k2) = Xup{i}*ddvddx{model.parent(i)}(:,k1 + N,k2);
                  ddvddx{i}(:,k1,k2 + N) = Xup{i}*ddvddx{model.parent(i)}(:,k1,k2 + N);
                end
              end
              
              ddvddx{i}(:,k2,k1) = ddvddx{i}(:,k1,k2);
              ddvddx{i}(:,k2 + N,k1) = ddvddx{i}(:,k1,k2 + N);
              ddvddx{i}(:,k2,k1 + N) = ddvddx{i}(:,k1 + N,k2);
            end
          end   
        end
    end
    
    avp{i} = Xup{i}*avp{model.parent(i)} + crm(v{i})*vJ;
    
    if ifjacobian
        [dcrmvdq, dcrmvdqd] = d_crm( v{i}, dvdx{i}(:,1:N), dvdx{i}(:,(N+1):(2*N)), N, ifsymbolic );
        for k = 1:N 
          if k == i
            davpdx{i}(:,k) = dXupdq{i}*avp{model.parent(i)} + Xup{i}*davpdx{model.parent(i)}(:,k) + dcrmvdq(:,:,k)*vJ;  
            davpdx{i}(:,k + N) = Xup{i}*davpdx{model.parent(i)}(:,k + N) + dcrmvdqd(:,:,k)*vJ + crm(v{i})*S{i};
          else
            davpdx{i}(:,k) = Xup{i}*davpdx{model.parent(i)}(:,k) + dcrmvdq(:,:,k)*vJ;
            davpdx{i}(:,k + N) = Xup{i}*davpdx{model.parent(i)}(:,k + N) + dcrmvdqd(:,:,k)*vJ;
          end
        end
    end
    
    if ifhessian
         ddcrmvddx = dd_crm( v{i}, ddvddx{i}, N, ifsymbolic );
         for k1 = 1:N
           for k2 = 1:k1
             if k1 == k2
               if k1 == i
                 ddavpddx{i}(:,k1,k2) = ddXupddq{i}*avp{model.parent(i)} + dXupdq{i}*davpdx{model.parent(i)}(:,k2) + dXupdq{i}*davpdx{model.parent(i)}(:,k1) + Xup{i}*ddavpddx{model.parent(i)}(:,k1,k2) + ddcrmvddx(:,:,k1,k2)*vJ;
                 ddavpddx{i}(:,k1,k2 + N) = dXupdq{i}*davpdx{model.parent(i)}(:,k2 + N) + Xup{i}*ddavpddx{model.parent(i)}(:,k1,k2 + N) + ddcrmvddx(:,:,k1,k2 + N)*vJ + dcrmvdq(:,:,k1)*S{i};
                 ddavpddx{i}(:,k1 + N,k2) = dXupdq{i}*davpdx{model.parent(i)}(:,k1 + N) + Xup{i}*ddavpddx{model.parent(i)}(:,k1 + N,k2) + ddcrmvddx(:,:,k1 + N,k2)*vJ + dcrmvdq(:,:,k2)*S{i};
                 ddavpddx{i}(:,k1 + N,k2 + N) = Xup{i}*ddavpddx{model.parent(i)}(:,k1 + N,k2 + N) + ddcrmvddx(:,:,k1 + N,k2 + N)*vJ + dcrmvdqd(:,:,k1)*S{i} + dcrmvdqd(:,:,k2)*S{i};
               else
                 ddavpddx{i}(:,k1,k2) = Xup{i}*ddavpddx{model.parent(i)}(:,k1,k2) + ddcrmvddx(:,:,k1,k2)*vJ;
                 ddavpddx{i}(:,k1,k2 + N) = Xup{i}*ddavpddx{model.parent(i)}(:,k1,k2 + N) + ddcrmvddx(:,:,k1,k2 + N)*vJ;
                 ddavpddx{i}(:,k1 + N,k2) = Xup{i}*ddavpddx{model.parent(i)}(:,k1 + N,k2) + ddcrmvddx(:,:,k1 + N,k2)*vJ;
                 ddavpddx{i}(:,k1 + N,k2 + N) = Xup{i}*ddavpddx{model.parent(i)}(:,k1 + N,k2 + N) + ddcrmvddx(:,:,k1 + N,k2 + N)*vJ;
               end
             else
               if k1 == i
                 ddavpddx{i}(:,k1,k2) = dXupdq{i}*davpdx{model.parent(i)}(:,k2) + Xup{i}*ddavpddx{model.parent(i)}(:,k1,k2) + ddcrmvddx(:,:,k1,k2)*vJ;
                 ddavpddx{i}(:,k1,k2 + N) = dXupdq{i}*davpdx{model.parent(i)}(:,k2 + N) + Xup{i}*ddavpddx{model.parent(i)}(:,k1,k2 + N) + ddcrmvddx(:,:,k1,k2 + N)*vJ;
                 ddavpddx{i}(:,k1 + N,k2) = Xup{i}*ddavpddx{model.parent(i)}(:,k1 + N,k2) + ddcrmvddx(:,:,k1 + N,k2)*vJ + dcrmvdq(:,:,k2)*S{i};
                 ddavpddx{i}(:,k1 + N,k2 + N) = Xup{i}*ddavpddx{model.parent(i)}(:,k1 + N,k2 + N) + ddcrmvddx(:,:,k1 + N,k2 + N)*vJ + dcrmvdqd(:,:,k1)*S{i} + dcrmvdqd(:,:,k2)*S{i};
               else
                 if k2 == i
                   ddavpddx{i}(:,k1,k2) = dXupdq{i}*davpdx{model.parent(i)}(:,k1) + Xup{i}*ddavpddx{model.parent(i)}(:,k1,k2) + ddcrmvddx(:,:,k1,k2)*vJ;
                   ddavpddx{i}(:,k1 + N,k2) = dXupdq{i}*davpdx{model.parent(i)}(:,k1 + N) + Xup{i}*ddavpddx{model.parent(i)}(:,k1 + N,k2) + ddcrmvddx(:,:,k1 + N,k2)*vJ;
                   ddavpddx{i}(:,k1,k2 + N) = Xup{i}*ddavpddx{model.parent(i)}(:,k1,k2 + N) + ddcrmvddx(:,:,k1,k2 + N)*vJ + dcrmvdq(:,:,k1)*S{i};
                   ddavpddx{i}(:,k1 + N,k2 + N) = Xup{i}*ddavpddx{model.parent(i)}(:,k1 + N,k2 + N) + ddcrmvddx(:,:,k1 + N,k2 + N)*vJ + dcrmvdqd(:,:,k2)*S{i} + dcrmvdqd(:,:,k1)*S{i};
                 else
                   ddavpddx{i}(:,k1,k2) = Xup{i}*ddavpddx{model.parent(i)}(:,k1,k2) + ddcrmvddx(:,:,k1,k2)*vJ;
                   ddavpddx{i}(:,k1,k2 + N) = Xup{i}*ddavpddx{model.parent(i)}(:,k1,k2 + N) + ddcrmvddx(:,:,k1,k2 + N)*vJ;
                   ddavpddx{i}(:,k1 + N,k2) = Xup{i}*ddavpddx{model.parent(i)}(:,k1 + N,k2) + ddcrmvddx(:,:,k1 + N,k2)*vJ;
                   ddavpddx{i}(:,k1 + N,k2 + N) = Xup{i}*ddavpddx{model.parent(i)}(:,k1 + N,k2 + N) + ddcrmvddx(:,:,k1 + N,k2 + N)*vJ;
                 end
               end
               
               ddavpddx{i}(:,k2,k1) = ddavpddx{i}(:,k1,k2);
               ddavpddx{i}(:,k2 + N,k1) = ddavpddx{i}(:,k1,k2 + N);
               ddavpddx{i}(:,k2,k1 + N) = ddavpddx{i}(:,k1 + N,k2);
               ddavpddx{i}(:,k2 + N,k1 + N) = ddavpddx{i}(:,k1 + N,k2 + N);
             end
           end
         end
    end
  end
  
  fvp{i} = model.I{i}*avp{i} + crf(v{i})*model.I{i}*v{i};
  
  if ifjacobian
      [dcrfvdq, dcrfvdqd] = d_crf( v{i}, dvdx{i}(:,1:N), dvdx{i}(:,(N+1):(2*N)), N, ifsymbolic );
      
      for k = 1:N 
        dfvpdx{i}(:,k) = model.I{i}*davpdx{i}(:,k) + dcrfvdq(:,:,k)*model.I{i}*v{i} + crf(v{i})*model.I{i}*dvdx{i}(:,k);
        dfvpdx{i}(:,k + N) = model.I{i}*davpdx{i}(:,k + N) + dcrfvdqd(:,:,k)*model.I{i}*v{i} + crf(v{i})*model.I{i}*dvdx{i}(:,k + N);
      end
  end
  
  if ifhessian
      ddcrfvddx = dd_crf( v{i}, ddvddx{i}, N, ifsymbolic );
      
      for k1 = 1:N
        for k2 = 1:k1
          ddfvpddx{i}(:,k1,k2) = model.I{i}*ddavpddx{i}(:,k1,k2) + ddcrfvddx(:,:,k1,k2)*model.I{i}*v{i} + dcrfvdq(:,:,k1)*model.I{i}*dvdx{i}(:,k2) + dcrfvdq(:,:,k2)*model.I{i}*dvdx{i}(:,k1) + crf(v{i})*model.I{i}*ddvddx{i}(:,k1,k2);
          ddfvpddx{i}(:,k1,k2 + N) = model.I{i}*ddavpddx{i}(:,k1,k2 + N) + ddcrfvddx(:,:,k1,k2 + N)*model.I{i}*v{i} + dcrfvdq(:,:,k1)*model.I{i}*dvdx{i}(:,k2 + N) + dcrfvdqd(:,:,k2)*model.I{i}*dvdx{i}(:,k1) + crf(v{i})*model.I{i}*ddvddx{i}(:,k1,k2 + N);
          ddfvpddx{i}(:,k1 + N,k2) = model.I{i}*ddavpddx{i}(:,k1 + N,k2) + ddcrfvddx(:,:,k1 + N,k2)*model.I{i}*v{i} + dcrfvdqd(:,:,k1)*model.I{i}*dvdx{i}(:,k2) + dcrfvdq(:,:,k2)*model.I{i}*dvdx{i}(:,k1 + N) + crf(v{i})*model.I{i}*ddvddx{i}(:,k1 + N,k2);
          ddfvpddx{i}(:,k1 + N,k2 + N) = model.I{i}*ddavpddx{i}(:,k1 + N,k2 + N) + ddcrfvddx(:,:,k1 + N,k2 + N)*model.I{i}*v{i} + dcrfvdqd(:,:,k1)*model.I{i}*dvdx{i}(:,k2 + N) + dcrfvdqd(:,:,k2)*model.I{i}*dvdx{i}(:,k1 + N) + crf(v{i})*model.I{i}*ddvddx{i}(:,k1 + N,k2 + N);
                
          if k1 ~= k2
            ddfvpddx{i}(:,k2,k1) = ddfvpddx{i}(:,k1,k2);
            ddfvpddx{i}(:,k2 + N,k1) = ddfvpddx{i}(:,k1,k2 + N);
            ddfvpddx{i}(:,k2,k1 + N) = ddfvpddx{i}(:,k1 + N,k2);
            ddfvpddx{i}(:,k2 + N,k1 + N) = ddfvpddx{i}(:,k1 + N,k2 + N);
          end
        end
      end
  end
end

if ifsymbolic
    C = sym(zeros(N,1));
else
    C = (zeros(N,1));
end

if ifjacobian
    if ifsymbolic
        dCdx = sym(zeros(N,2*N));
    else
        dCdx = (zeros(N,2*N));
    end
end

if ifhessian
    if ifsymbolic
        ddCddx = sym(zeros(N,2*N,2*N));
    else
        ddCddx = (zeros(N,2*N,2*N));
    end
end

for i = N:-1:1
  C(i) = S{i}' * fvp{i};
  
  if ifjacobian
    dCdx(i,:) = S{i}' * dfvpdx{i};
  end
  
  if ifhessian
    for k = 1:2*N
        ddCddx(i,k,:) = S{i}' * squeeze(ddfvpddx{i}(:,k,:));
    end
  end
  
  if model.parent(i) ~= 0
    fvp{model.parent(i)} = fvp{model.parent(i)} + Xup{i}'*fvp{i};
    
    if ifjacobian
        for k = 1:N
          if i == k
            dfvpdx{model.parent(i)}(:,k) = dfvpdx{model.parent(i)}(:,k) + dXupdq{i}'*fvp{i} + Xup{i}'*dfvpdx{i}(:,k); 
          else
            dfvpdx{model.parent(i)}(:,k) = dfvpdx{model.parent(i)}(:,k) + Xup{i}'*dfvpdx{i}(:,k);  
          end
          dfvpdx{model.parent(i)}(:,k + N) = dfvpdx{model.parent(i)}(:,k + N) + Xup{i}'*dfvpdx{i}(:,k + N);
        end
    end
    
    if ifhessian
        for k1 = 1:N
          for k2 = 1:k1
            if k1 == k2
              if k1 == i
                ddfvpddx{model.parent(i)}(:,k1,k2) = ddfvpddx{model.parent(i)}(:,k1,k2) + ddXupddq{i}'*fvp{i} + dXupdq{i}'*dfvpdx{i}(:,k2) + dXupdq{i}'*dfvpdx{i}(:,k1) + Xup{i}'*ddfvpddx{i}(:,k1,k2);
                ddfvpddx{model.parent(i)}(:,k1,k2 + N) = ddfvpddx{model.parent(i)}(:,k1,k2 + N) + dXupdq{i}'*dfvpdx{i}(:,k2 + N) + Xup{i}'*ddfvpddx{i}(:,k1,k2 + N);
                ddfvpddx{model.parent(i)}(:,k1 + N,k2) = ddfvpddx{model.parent(i)}(:,k1 + N,k2) + dXupdq{i}'*dfvpdx{i}(:,k1 + N) + Xup{i}'*ddfvpddx{i}(:,k1 + N,k2);
                ddfvpddx{model.parent(i)}(:,k1 + N,k2 + N) = ddfvpddx{model.parent(i)}(:,k1 + N,k2 + N) + Xup{i}'*ddfvpddx{i}(:,k1 + N,k2 + N);
              else
                ddfvpddx{model.parent(i)}(:,k1,k2) = ddfvpddx{model.parent(i)}(:,k1,k2) + Xup{i}'*ddfvpddx{i}(:,k1,k2);
                ddfvpddx{model.parent(i)}(:,k1,k2 + N) = ddfvpddx{model.parent(i)}(:,k1,k2 + N) + Xup{i}'*ddfvpddx{i}(:,k1,k2 + N);
                ddfvpddx{model.parent(i)}(:,k1 + N,k2) = ddfvpddx{model.parent(i)}(:,k1 + N,k2) + Xup{i}'*ddfvpddx{i}(:,k1 + N,k2);
                ddfvpddx{model.parent(i)}(:,k1 + N,k2 + N) = ddfvpddx{model.parent(i)}(:,k1 + N,k2 + N) + Xup{i}'*ddfvpddx{i}(:,k1 + N,k2 + N);
              end
            else
              if k1 == i
                ddfvpddx{model.parent(i)}(:,k1,k2) = ddfvpddx{model.parent(i)}(:,k1,k2) + dXupdq{i}'*dfvpdx{i}(:,k2) + Xup{i}'*ddfvpddx{i}(:,k1,k2);
                ddfvpddx{model.parent(i)}(:,k1,k2 + N) = ddfvpddx{model.parent(i)}(:,k1,k2 + N) + dXupdq{i}'*dfvpdx{i}(:,k2 + N) + Xup{i}'*ddfvpddx{i}(:,k1,k2 + N);
                ddfvpddx{model.parent(i)}(:,k1 + N,k2) = ddfvpddx{model.parent(i)}(:,k1 + N,k2) + Xup{i}'*ddfvpddx{i}(:,k1 + N,k2);
                ddfvpddx{model.parent(i)}(:,k1 + N,k2 + N) = ddfvpddx{model.parent(i)}(:,k1 + N,k2 + N) + Xup{i}'*ddfvpddx{i}(:,k1 + N,k2 + N); 
              else
                if k2 == i
                  ddfvpddx{model.parent(i)}(:,k1,k2) = ddfvpddx{model.parent(i)}(:,k1,k2) + dXupdq{i}'*dfvpdx{i}(:,k1) + Xup{i}'*ddfvpddx{i}(:,k1,k2);
                  ddfvpddx{model.parent(i)}(:,k1,k2 + N) = ddfvpddx{model.parent(i)}(:,k1,k2 + N) + Xup{i}'*ddfvpddx{i}(:,k1,k2 + N);
                  ddfvpddx{model.parent(i)}(:,k1 + N,k2) = ddfvpddx{model.parent(i)}(:,k1 + N,k2) + dXupdq{i}'*dfvpdx{i}(:,k1 + N) + Xup{i}'*ddfvpddx{i}(:,k1 + N,k2);
                  ddfvpddx{model.parent(i)}(:,k1 + N,k2 + N) = ddfvpddx{model.parent(i)}(:,k1 + N,k2 + N) + Xup{i}'*ddfvpddx{i}(:,k1 + N,k2 + N);
                else
                  ddfvpddx{model.parent(i)}(:,k1,k2) = ddfvpddx{model.parent(i)}(:,k1,k2) + Xup{i}'*ddfvpddx{i}(:,k1,k2);
                  ddfvpddx{model.parent(i)}(:,k1,k2 + N) = ddfvpddx{model.parent(i)}(:,k1,k2 + N) + Xup{i}'*ddfvpddx{i}(:,k1,k2 + N);
                  ddfvpddx{model.parent(i)}(:,k1 + N,k2) = ddfvpddx{model.parent(i)}(:,k1 + N,k2) + Xup{i}'*ddfvpddx{i}(:,k1 + N,k2);
                  ddfvpddx{model.parent(i)}(:,k1 + N,k2 + N) = ddfvpddx{model.parent(i)}(:,k1 + N,k2 + N) + Xup{i}'*ddfvpddx{i}(:,k1 + N,k2 + N);
                end
              end
              
              ddfvpddx{model.parent(i)}(:,k2,k1) = ddfvpddx{model.parent(i)}(:,k1,k2);
              ddfvpddx{model.parent(i)}(:,k2 + N,k1) = ddfvpddx{model.parent(i)}(:,k1,k2 + N);
              ddfvpddx{model.parent(i)}(:,k2,k1 + N) = ddfvpddx{model.parent(i)}(:,k1 + N,k2);
              ddfvpddx{model.parent(i)}(:,k2 + N,k1 + N) = ddfvpddx{model.parent(i)}(:,k1 + N,k2 + N);
            end
          end
        end
    end
  end
end

IC = model.I;				% composite inertia calculation

if ifjacobian
    dICdq = cell(1,N);
    if ifsymbolic
        for i = N:-1:1
            dICdq{i} = sym(zeros(SpaSize,SpaSize,N));
        end
    else
        for i = N:-1:1
            dICdq{i} = (zeros(SpaSize,SpaSize,N));
        end
    end
end

if ifhessian
    ddICddq = cell(1,N);
    if ifsymbolic
        for i = N:-1:1
            ddICddq{i} = sym(zeros(SpaSize,SpaSize,N,N));
        end
    else
        for i = N:-1:1
            ddICddq{i} = (zeros(SpaSize,SpaSize,N,N));
        end
    end
end

for i = N:-1:1
  if model.parent(i) ~= 0
    IC{model.parent(i)} = IC{model.parent(i)} + Xup{i}'*IC{i}*Xup{i};
    
    if ifjacobian
        for j = N:-1:1
            if i == j
                dICdq{model.parent(i)}(:,:,j) = dXupdq{i}'*IC{i}*Xup{i} + Xup{i}'*dICdq{i}(:,:,j)*Xup{i} + Xup{i}'*IC{i}*dXupdq{i};
            else
                dICdq{model.parent(i)}(:,:,j) = Xup{i}'*dICdq{i}(:,:,j)*Xup{i};
            end
        end
    end
    
    if ifhessian
        for k1 = N:-1:1
          for k2 = N:-1:k1
            if k1 == k2
              if k1 == i
                ddICddq{model.parent(i)}(:,:,k1,k2) = ddXupddq{i}'*IC{i}*Xup{i} + dXupdq{i}'*dICdq{i}(:,:,k2)*Xup{i} + dXupdq{i}'*IC{i}*dXupdq{i} + ... 
                                                    dXupdq{i}'*dICdq{i}(:,:,j)*Xup{i} + Xup{i}'*ddICddq{i}(:,:,k1,k2)*Xup{i} + Xup{i}'*dICdq{i}(:,:,j)*dXupdq{i} + ...
                                                    dXupdq{i}'*IC{i}*dXupdq{i} + Xup{i}'*dICdq{i}(:,:,k2)*dXupdq{i} + Xup{i}'*IC{i}*ddXupddq{i};
              else
                ddICddq{model.parent(i)}(:,:,k1,k2) = Xup{i}'*ddICddq{i}(:,:,k1,k2)*Xup{i};   
              end
            else
              if k1 == i
                ddICddq{model.parent(i)}(:,:,k1,k2) = dXupdq{i}'*dICdq{i}(:,:,k2)*Xup{i} + Xup{i}'*ddICddq{i}(:,:,k1,k2)*Xup{i} + Xup{i}'*dICdq{i}(:,:,k2)*dXupdq{i};  
              else
                if k2 == i
                  ddICddq{model.parent(i)}(:,:,k1,k2) = dXupdq{i}'*dICdq{i}(:,:,k1)*Xup{i} + Xup{i}'*ddICddq{i}(:,:,k1,k2)*Xup{i} + Xup{i}'*dICdq{i}(:,:,k1)*dXupdq{i};   
                else
                  ddICddq{model.parent(i)}(:,:,k1,k2) = Xup{i}'*ddICddq{i}(:,:,k1,k2)*Xup{i};    
                end
              end
              
              ddICddq{model.parent(i)}(:,:,k2,k1) = ddICddq{model.parent(i)}(:,:,k1,k2);
            end
          end
        end
    end
  end
end

if ifsymbolic
    H = sym(zeros(N));
else
    H = zeros(N);
end

if ifjacobian
    if ifsymbolic
        dHdq = sym(zeros(N,N,N));
    else
        dHdq = zeros(N,N,N);
    end
end

if ifhessian
    if ifsymbolic
        ddHddq = sym(zeros(N,N,N,N));
    else
        ddHddq = zeros(N,N,N,N);
    end
end

for i = 1:N
  fh = IC{i} * S{i};
  
  if ifjacobian
      if ifsymbolic
        dfhdq = sym(zeros(SpaSize,N));
      else
        dfhdq = zeros(SpaSize,N); 
      end
      
      for k = 1:N
        dfhdq(:,k) = dICdq{i}(:,:,k) * S{i};
      end
  end
  
  if ifhessian
      if ifsymbolic
        ddfhddq = sym(zeros(SpaSize,N,N));
      else
        ddfhddq = zeros(SpaSize,N,N); 
      end
      
      for k1 = 1:N
        for k2 = 1:k1
          ddfhddq(:,k1,k2) = ddICddq{i}(:,:,k1,k2) * S{i};
          
          if k1 ~= k2
            ddfhddq(:,k2,k1) = ddfhddq(:,k1,k2);
          end
        end
      end
  end
  
  if isfield(model, 'transmissionInertia')
    H(i,i) = S{i}' * fh + model.transmissionInertia{i};
  else
    H(i,i) = S{i}' * fh;
  end
  
  if ifjacobian
      for k = 1:N
        dHdq(i,i,k) = S{i}' * dfhdq(:,k);
      end
  end
  
  if ifhessian
      for k1 = 1:N
        for k2 = 1:k1
          ddHddq(i,i,k1,k2) = S{i}' * ddfhddq(:,k1,k2);
          
          if k1 ~= k2
            ddHddq(i,i,k2,k1) = ddHddq(i,i,k1,k2);
          end
        end
      end 
  end
  
  j = i;
  while model.parent(j) > 0
    if ifhessian
        for k1 = N:-1:1
          for k2 = N:-1:k1
            if k1 == k2
              if k1 == j
                ddfhddq(:,k1,k2) = ddXupddq{j}' * fh + dXupdq{j}' * dfhdq(:,k2) + dXupdq{j}' * dfhdq(:,k1) + Xup{j}' * ddfhddq(:,k1,k2);  
              else
                ddfhddq(:,k1,k2) = Xup{j}' * ddfhddq(:,k1,k2);   
              end
            else
              if k1 == j
                ddfhddq(:,k1,k2) = dXupdq{j}' * dfhdq(:,k2) + Xup{j}' * ddfhddq(:,k1,k2);
              else
                if k2 == j
                  ddfhddq(:,k1,k2) = dXupdq{j}' * dfhdq(:,k1) + Xup{j}' * ddfhddq(:,k1,k2);
                else
                  ddfhddq(:,k1,k2) = Xup{j}' * ddfhddq(:,k1,k2);
                end
              end
              
              ddfhddq(:,k2,k1) = ddfhddq(:,k1,k2);
            end
          end
        end
    end
    
    if ifjacobian
        for k = 1:N
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
      for k = 1:N
        dHdq(i,j,k) = S{j}' * dfhdq(:,k);
        dHdq(j,i,k) = dHdq(i,j,k);
      end
    end
    
    if ifhessian
      for k1 = 1:N
        for k2 = 1:k1
          ddHddq(i,j,k1,k2) = S{j}' * ddfhddq(:,k1,k2);
          ddHddq(j,i,k1,k2) = ddHddq(i,j,k1,k2);
          
          if k1 ~= k2
            ddHddq(i,j,k2,k1) = ddHddq(i,j,k1,k2);
            ddHddq(j,i,k2,k1) = ddHddq(j,i,k1,k2);
          end
        end
      end 
    end
  end
end

if ifsymbolic && ifsimplify
    H = simplify(H);
    C = simplify(C);
    
    if ifjacobian
        dHdq = simplify(dHdq);
        dCdx = simplify(dCdx);
        dCdqd = simplify(dCdqd);
    end
end

toc;
