function  ddcrfvddx = dd_crf( v, ddvddx, NB, ifsymbolic )

% crf  spatial/planar cross-product operator (force).
% crf(v)  calculates the 6x6 (or 3x3) matrix such that the expression
% crf(v)*f is the cross product of the motion vector v with the force
% vector f.  If length(v)==6 then it is taken to be a spatial vector, and
% the return value is a 6x6 matrix.  Otherwise, v is taken to be a planar
% vector, and the return value is 3x3.

% vcross = -crm(v)';

if nargin < 4
    ddcrfvddx = dd_crm( v, ddvddx, NB );
else
    ddcrfvddx = dd_crm( v, ddvddx, NB, ifsymbolic );
end

for i = 1:2*NB
    for j = 1:2*NB
        ddcrfvddx(:,:,i,j) = -ddcrfvddx(:,:,i,j)';
    end
end