function  [dcrfvdq, dcrfvdqd] = d_crf( v, dvdq, dvdqd, NB, input_type )

% crf  spatial/planar cross-product operator (force).
% crf(v)  calculates the 6x6 (or 3x3) matrix such that the expression
% crf(v)*f is the cross product of the motion vector v with the force
% vector f.  If length(v)==6 then it is taken to be a spatial vector, and
% the return value is a 6x6 matrix.  Otherwise, v is taken to be a planar
% vector, and the return value is 3x3.

% vcross = -crm(v)';

[dcrfvdq, dcrfvdqd] = d_crm( v, dvdq, dvdqd, NB, input_type );

for i = 1:NB
    dcrfvdq(:,:,i) = -dcrfvdq(:,:,i)';
    dcrfvdqd(:,:,i) = -dcrfvdqd(:,:,i)';
end