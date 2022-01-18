function  [hG, com, dhGdx, dcomdq] = differentiate_CMM( model, q, qd )

% CMM
% calculates the coefficients of the
% joint-space equation of motion, tau=H(q)qdd+C(d,qd,f_ext), where q, qd
% and qdd are the joint position, velocity and acceleration vectors, H is
% the joint-space inertia matrix, C is the vector of gravity,
% external-force and velocity-product terms, and tau is the joint force
% vector.  Algorithm: recursive Newton-Euler for C, and
% Composite-Rigid-Body for H.  f_ext is an optional argument specifying the
% external forces acting on the bodies.  It can be omitted if there are no
% external forces.  The format of f_ext is explained in the source code of
% apply_external_forces.

if nargout > 2
    ifjacobian = true;
else
    ifjacobian = false;
end

N = model.NB;
SpaSize = size(model.I{1},1);

a_grav = get_gravity(model);

% variables that need to be differentiated:
% 1. Xup (Xup{i} -> q{i})
% 2. fvp (fvp{i} -> q{1:i}, qd{1:i})
% 3. IC  (IC{i}  -> q{1:i})

Xup = cell(1,N);
v = cell(1,N);

if ifjacobian
    dXupdq = cell(1,N);
    dvdx = cell(1,N);
    
    for i = 1:N
        dXupdq{i} = initialize_array('number',[SpaSize,SpaSize]);
    end

    for i = 1:N
        dvdx{i} = initialize_array('number',[SpaSize,2*N]);
    end
end

for i = 1:N
  [ XJ, dXJdq, ~, S{i} ] = d_jcalc( model.jtype{i}, q(i) );
  vJ = S{i}*qd(i);
  Xup{i} = XJ * model.Xtree{i};
  
  if ifjacobian
    dXupdq{i} = dXJdq * model.Xtree{i};
  end
  
  if model.parent(i) == 0
    v{i} = vJ;
    
    if ifjacobian
      dvdx{i}(:,i + N) = S{i};
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
  end
end

IC = model.I;				% composite inertia calculation

if ifjacobian
    dICdq = cell(1,N);

    for i = N:-1:1
        dICdq{i} = initialize_array('number',[SpaSize,SpaSize,N]);
    end

    dICbasedq = initialize_array('number',[SpaSize,SpaSize,N]);
end

for i = N:-1:1
  if model.parent(i) ~= 0
    IC{model.parent(i)} = IC{model.parent(i)} + Xup{i}'*IC{i}*Xup{i};
    
    if ifjacobian
        for j = N:-1:1
            if i == j
                dICdq{model.parent(i)}(:,:,j) = dICdq{model.parent(i)}(:,:,j) + dXupdq{i}'*IC{i}*Xup{i} + Xup{i}'*dICdq{i}(:,:,j)*Xup{i} + Xup{i}'*IC{i}*dXupdq{i};
            else
                dICdq{model.parent(i)}(:,:,j) = dICdq{model.parent(i)}(:,:,j) + Xup{i}'*dICdq{i}(:,:,j)*Xup{i};
            end
        end
    end
  else
    ICbase = Xup{i}'*IC{i}*Xup{i};
    
    if ifjacobian
        for j = N:-1:1
            if i == j
                dICbasedq(:,:,j) = dXupdq{i}'*IC{i}*Xup{i} + Xup{i}'*dICdq{i}(:,:,j)*Xup{i} + Xup{i}'*IC{i}*dXupdq{i};
            else
                dICbasedq(:,:,j) = Xup{i}'*dICdq{i}(:,:,j)*Xup{i};
            end
        end
    end
  end
end

[~,com,~] = mcI(ICbase);

if ifjacobian
    m = ICbase(6,6);
    dmCdq = dICbasedq(1:3,4:6,:);
    dcomdq = 0.5 * [dmCdq(3,2,:) - dmCdq(2,3,:);
		            dmCdq(1,3,:) - dmCdq(3,1,:);
		            dmCdq(2,1,:) - dmCdq(1,2,:)] / m;
    dcomdq = squeeze(dcomdq);
end

hG = zeros(SpaSize,1);

if ifjacobian
    dhGdx = zeros(6,N*2);
end

for i = 1:N
    hG = hG + (Xup{i}'*Xup{i})' * IC{i} * S{i} * qd(i);

    if ifjacobian
        for j = N:-1:1
            if i == j
                dhGdx(:,j) = dhGdx(:,j) + ((dXupdq{i}'*Xup{i} + Xup{i}'*dXupdq{i})' * IC{i} + (Xup{i}'*Xup{i})' * dICdq{i}(:,:,i)) * S{i} * qd(i);
            else
                dhGdx(:,j) = dhGdx(:,j) + (Xup{i}'*Xup{i})' * dICdq{i}(:,:,j) * S{i} * qd(i);
            end
        end
        dhGdx(:,N+i) = dhGdx(:,N+i) + (Xup{i}'*Xup{i})' * IC{i} * S{i};
    end
end
