function [H,C,dHdq,dCdx] = differentiate_FDcrb_jacobian_pure(N, jtype, Xtree, parent, I, transmissionInertia, q, qd)

% N = model.NB;
SpaSize = 6; % size(I{1},1);

input_type = 'number';

a_grav = [0;0;0;0;0;-9.806]; % get_gravity(model);

Xup = cell(1,N);
v = cell(1,N);
avp = cell(1,N);
fvp = cell(1,N);
S = zeros(SpaSize,N);

dXupdq = cell(1,N);
dvdx = cell(1,N);
davpdx = cell(1,N);
dfvpdx = cell(1,N);

for i = 1:N
    Xup{i} = zeros([SpaSize,SpaSize]);
end

for i = 1:N
    v{i} = zeros([SpaSize,1]);
end

for i = 1:N
    avp{i} = zeros([SpaSize,1]);
end

for i = 1:N
    fvp{i} = zeros([SpaSize,1]);
end

for i = 1:N
    dXupdq{i} = zeros([SpaSize,SpaSize]);
end

for i = 1:N
    dvdx{i} = zeros([SpaSize,2*N]);
end

for i = 1:N
    davpdx{i} = zeros([SpaSize,2*N]);
end

for i = 1:N
    dfvpdx{i} = zeros([SpaSize,2*N]);
end

XJ = zeros([SpaSize,SpaSize]);
dXJdq = zeros([SpaSize,SpaSize]);

coder.unroll(false);
for i = 1:N
    switch jtype(i)
      case 'x'
        jt = 'Rx';
      case 'y'
        jt = 'Ry';
      case 'z'
        jt = 'Rz';
      case 'a'
        jt = '-Rx';
      case 'b'
        jt = '-Ry';
      case 'c'
        jt = '-Rz';
      otherwise
        error('Unrecognized joint type!');
    end

    [XJ, dXJdq, ~, S(:,i)] = d_jcalc( jt, q(i) );
    coder.varsize('Xj', [6,6], [0,0]);
    coder.varsize('dXjdq', [6,6], [0,0]);

%   [ XJ, dXJdq, ~, S(:,i) ] = d_jcalc( jtype{i}, q(i) );
  vJ = S(:,i)*qd(i);
  Xup{i} = XJ * Xtree{i};

  dXupdq{i} = dXJdq * Xtree{i};
  
  if parent(i) == 0
    v{i} = vJ;
    avp{i} = Xup{i} * -a_grav;
    
    dvdx{i}(:,i + N) = S(:,i);
    davpdx{i}(:,i) = dXupdq{i} * -a_grav;
  else
    v{i} = Xup{i}*v{parent(i)} + vJ;
    
    for k = 1:N 
      if k == i
        dvdx{i}(:,k) = dXupdq{i}*v{parent(i)} + Xup{i}*dvdx{parent(i)}(:,k);  
        dvdx{i}(:,k + N) = Xup{i}*dvdx{parent(i)}(:,k + N) + S(:,i);
      else
        dvdx{i}(:,k) = Xup{i}*dvdx{parent(i)}(:,k);
        dvdx{i}(:,k + N) = Xup{i}*dvdx{parent(i)}(:,k + N);
      end
    end
    
    avp{i} = Xup{i}*avp{parent(i)} + crm(v{i})*vJ;
    
    [dcrmvdq, dcrmvdqd] = d_crm( v{i}, dvdx{i}(:,1:N), dvdx{i}(:,(N+1):(2*N)), N, input_type );
    for k = 1:N 
      if k == i
        davpdx{i}(:,k) = dXupdq{i}*avp{parent(i)} + Xup{i}*davpdx{parent(i)}(:,k) + dcrmvdq(:,:,k)*vJ;  
        davpdx{i}(:,k + N) = Xup{i}*davpdx{parent(i)}(:,k + N) + dcrmvdqd(:,:,k)*vJ + crm(v{i})*S(:,i);
      else
        davpdx{i}(:,k) = Xup{i}*davpdx{parent(i)}(:,k) + dcrmvdq(:,:,k)*vJ;
        davpdx{i}(:,k + N) = Xup{i}*davpdx{parent(i)}(:,k + N) + dcrmvdqd(:,:,k)*vJ;
      end
    end
  end
  
  fvp{i} = I{i}*avp{i} + crf(v{i})*I{i}*v{i};
  
  [dcrfvdq, dcrfvdqd] = d_crf( v{i}, dvdx{i}(:,1:N), dvdx{i}(:,(N+1):(2*N)), N, input_type );
  
  for k = 1:N 
    dfvpdx{i}(:,k) = I{i}*davpdx{i}(:,k) + dcrfvdq(:,:,k)*I{i}*v{i} + crf(v{i})*I{i}*dvdx{i}(:,k);
    dfvpdx{i}(:,k + N) = I{i}*davpdx{i}(:,k + N) + dcrfvdqd(:,:,k)*I{i}*v{i} + crf(v{i})*I{i}*dvdx{i}(:,k + N);
  end
end

C = zeros([N,1]);
dCdx = zeros([N,2*N]);

for i = N:-1:1
  C(i) = S(:,i)' * fvp{i};
  
  dCdx(i,:) = S(:,i)' * dfvpdx{i};
  
  if parent(i) ~= 0
    fvp{parent(i)} = fvp{parent(i)} + Xup{i}'*fvp{i};
    
    for k = 1:N
      if i == k
        dfvpdx{parent(i)}(:,k) = dfvpdx{parent(i)}(:,k) + dXupdq{i}'*fvp{i} + Xup{i}'*dfvpdx{i}(:,k); 
      else
        dfvpdx{parent(i)}(:,k) = dfvpdx{parent(i)}(:,k) + Xup{i}'*dfvpdx{i}(:,k);  
      end
      dfvpdx{parent(i)}(:,k + N) = dfvpdx{parent(i)}(:,k + N) + Xup{i}'*dfvpdx{i}(:,k + N);
    end
  end
end

IC = I;				% composite inertia calculation

dICdq = cell(1,N);

for i = N:-1:1
    dICdq{i} = zeros([SpaSize,SpaSize,N]);
end

for i = N:-1:1
  if parent(i) ~= 0
    IC{parent(i)} = IC{parent(i)} + Xup{i}'*IC{i}*Xup{i};
    
    for j = N:-1:1
        if i == j
            dICdq{parent(i)}(:,:,j) = dICdq{parent(i)}(:,:,j) + dXupdq{i}'*IC{i}*Xup{i} + Xup{i}'*dICdq{i}(:,:,j)*Xup{i} + Xup{i}'*IC{i}*dXupdq{i};
        else
            dICdq{parent(i)}(:,:,j) = dICdq{parent(i)}(:,:,j) + Xup{i}'*dICdq{i}(:,:,j)*Xup{i};
        end
    end
  end
end

H = zeros([N,N]);
dHdq = zeros([N,N,N]);

for i = 1:N
  fh = IC{i} * S(:,i);
  
  dfhdq = zeros([SpaSize,N]);
  
  for k = 1:N
    dfhdq(:,k) = dICdq{i}(:,:,k) * S(:,i);
  end
  
  H(i,i) = S(:,i)' * fh + transmissionInertia{i};

  for k = 1:N
    dHdq(i,i,k) = S(:,i)' * dfhdq(:,k);
  end
  
  j = i;
  while parent(j) > 0
    for k = 1:N
      if k == j
        dfhdq(:,k) = dXupdq{j}' * fh + Xup{j}' * dfhdq(:,k);
      else
        dfhdq(:,k) = Xup{j}' * dfhdq(:,k);
      end
    end
    
    fh = Xup{j}' * fh;
    j = parent(j);
    H(i,j) = S(:,j)' * fh;
    H(j,i) = H(i,j);
    
    for k = 1:N
      dHdq(i,j,k) = S(:,j)' * dfhdq(:,k);
      dHdq(j,i,k) = dHdq(i,j,k);
    end
  end
end
