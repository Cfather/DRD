function  dXdtheta = d_rotz( theta )

% rotz  spatial coordinate transform (Z-axis rotation).
% rotz(theta)  calculates the coordinate transform matrix from A to B
% coordinates for spatial motion vectors, where coordinate frame B is
% rotated by an angle theta (radians) relative to frame A about their
% common Z axis.

c = cos(theta);
s = sin(theta);

% X = [  c  s  0  0  0  0 ;
%       -s  c  0  0  0  0 ;
%        0  0  1  0  0  0 ;
%        0  0  0  c  s  0 ;
%        0  0  0 -s  c  0 ;
%        0  0  0  0  0  1
%     ];

dXdtheta = [  -s  c  0  0  0  0 ;
              -c -s  0  0  0  0 ;
               0  0  0  0  0  0 ;
               0  0  0 -s  c  0 ;
               0  0  0 -c -s  0 ;
               0  0  0  0  0  0 ];
coder.varsize("dXdtheta", [6,6], [0,0]);