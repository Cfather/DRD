function  dXdtheta = d_rotx( theta )

% rotx  spatial coordinate transform (X-axis rotation).
% rotx(theta)  calculates the coordinate transform matrix from A to B
% coordinates for spatial motion vectors, where coordinate frame B is
% rotated by an angle theta (radians) relative to frame A about their
% common X axis.

c = cos(theta);
s = sin(theta);

% X = [ 1  0  0  0  0  0 ;
%       0  c  s  0  0  0 ;
%       0 -s  c  0  0  0 ;
%       0  0  0  1  0  0 ;
%       0  0  0  0  c  s ;
%       0  0  0  0 -s  c
%     ];

dXdtheta = [  0  0  0  0  0  0 ;
              0 -s  c  0  0  0 ;
              0 -c -s  0  0  0 ;
              0  0  0  0  0  0 ;
              0  0  0  0 -s  c ;
              0  0  0  0 -c -s ];
coder.varsize("dXdtheta", [6,6], [0,0]);
