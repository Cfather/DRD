function  [do1,do2] = d_plux( i1, i2, di1, di2 )

% plux  compose/decompose Plucker coordinate transform.
% X=plux(E,r) and [E,r]=plux(X)  compose a Plucker coordinate transform X
% from its component parts E and r, and decompose it into those parts,
% respectively.  E is a 3x3 rotational coordinate transform and r is a 3D
% vector.  r is returned as a column vector, but it can be supplied as a
% row or column vector.  X is a coordinate transform corresponding to a
% shift of origin by an amount specified by r, followed by a rotation about
% the new origin as specified by E.  For example, plux(rx(1),[2 3 4]) makes
% the same transform as rotx(1)*xlt([2 3 4]).  If two arguments are
% supplied then they are assumed to be E and r, otherwise X.

if nargin == 4				% E,r --> X

  o1 = [ i1, zeros(3); -i1*skew(i2), i1 ];
  do1 = []; % not finished

else					% X --> E,r

  di1 = i2;

%   o1 = i1(1:3,1:3);
%   o2 = -skew(o1'*i1(4:6,1:3));

  do1 = di1(1:3,1:3);

  do2 = [(di1(1,2)*i1(4,3))/2 - (di1(1,3)*i1(4,2))/2 - (di1(4,2)*i1(1,3))/2 + (di1(4,3)*i1(1,2))/2 + (di1(2,2)*i1(5,3))/2 - (di1(2,3)*i1(5,2))/2 - (di1(5,2)*i1(2,3))/2 + (di1(5,3)*i1(2,2))/2 + (di1(3,2)*i1(6,3))/2 - (di1(3,3)*i1(6,2))/2 - (di1(6,2)*i1(3,3))/2 + (di1(6,3)*i1(3,2))/2;
         (di1(1,3)*i1(4,1))/2 - (di1(1,1)*i1(4,3))/2 + (di1(4,1)*i1(1,3))/2 - (di1(4,3)*i1(1,1))/2 - (di1(2,1)*i1(5,3))/2 + (di1(2,3)*i1(5,1))/2 + (di1(5,1)*i1(2,3))/2 - (di1(5,3)*i1(2,1))/2 - (di1(3,1)*i1(6,3))/2 + (di1(3,3)*i1(6,1))/2 + (di1(6,1)*i1(3,3))/2 - (di1(6,3)*i1(3,1))/2;
         (di1(1,1)*i1(4,2))/2 - (di1(1,2)*i1(4,1))/2 - (di1(4,1)*i1(1,2))/2 + (di1(4,2)*i1(1,1))/2 + (di1(2,1)*i1(5,2))/2 - (di1(2,2)*i1(5,1))/2 - (di1(5,1)*i1(2,2))/2 + (di1(5,2)*i1(2,1))/2 + (di1(3,1)*i1(6,2))/2 - (di1(3,2)*i1(6,1))/2 - (di1(6,1)*i1(3,2))/2 + (di1(6,2)*i1(3,1))/2];

end
