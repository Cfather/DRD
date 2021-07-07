function  dXdr = d_xlt( nz )

% xlt  spatial coordinate transform (translation of origin).
% xlt(r)  calculates the coordinate transform matrix from A to B
% coordinates for spatial motion vectors, in which frame B is translated by
% an amount r (3D vector) relative to frame A.  r can be a row or column
% vector.

% X = [  1     0     0    0  0  0 ;
%        0     1     0    0  0  0 ;
%        0     0     1    0  0  0 ;
%        0     r(3) -r(2) 1  0  0 ;
%       -r(3)  0     r(1) 0  1  0 ;
%        r(2) -r(1)  0    0  0  1
%     ];

switch nz
    case 1
        dXdr = [0     0     0    0  0  0 ;
               0     0     0    0  0  0 ;
               0     0     0    0  0  0 ;
               0     0     0    0  0  0 ;
               0     0     1    0  0  0 ;
               0    -1     0    0  0  0 ];
    case 2
        dXdr = [0     0     0    0  0  0 ;
               0     0     0    0  0  0 ;
               0     0     0    0  0  0 ;
               0     0    -1    0  0  0 ;
               0     0     0    0  0  0 ;
               1     0     0    0  0  0 ];
    case 3
        dXdr = [0     0     0    0  0  0 ;
               0     0     0    0  0  0 ;
               0     0     0    0  0  0 ;
               0     1     0    0  0  0 ;
              -1     0     0    0  0  0 ;
               0     0     0    0  0  0 ];
    otherwise
        error('Unrecognize axis');
end
