function  [dcrmvdq, dcrmvdqd] = d_crm( v, dvdq, dvdqd, NB, ifsymbolic )

% crm  spatial/planar cross-product operator (motion).
% crm(v)  calculates the 6x6 (or 3x3) matrix such that the expression
% crm(v)*m is the cross product of the motion vectors v and m.  If
% length(v)==6 then it is taken to be a spatial vector, and the return
% value is a 6x6 matrix.  Otherwise, v is taken to be a planar vector, and
% the return value is 3x3.

if nargin < 5
    ifsymbolic = false;
end

if length(v) == 6

%   vcross = [0    -v(3)  v(2)   0     0     0    ;
%     	      v(3)  0    -v(1)   0     0     0    ;
%     	     -v(2)  v(1)  0      0     0     0    ;
%     	      0    -v(6)  v(5)   0    -v(3)  v(2) ;
%     	      v(6)  0    -v(4)   v(3)  0    -v(1) ;
%     	     -v(5)  v(4)  0     -v(2)  v(1)  0 ];

    if ifsymbolic
        dcrmvdq = sym(zeros(6,6,NB));
    else
        dcrmvdq = zeros(6,6,NB);
    end
    
    dcrmvdq(1,2,:) = -dvdq(3,:);
    dcrmvdq(2,1,:) = dvdq(3,:);
    dcrmvdq(1,3,:) = dvdq(2,:);
    dcrmvdq(3,1,:) = -dvdq(2,:);
    dcrmvdq(2,3,:) = -dvdq(1,:);
    dcrmvdq(3,2,:) = dvdq(1,:);
    dcrmvdq(1+3,2+3,:) = -dvdq(3,:);
    dcrmvdq(2+3,1+3,:) = dvdq(3,:);
    dcrmvdq(1+3,3+3,:) = dvdq(2,:);
    dcrmvdq(3+3,1+3,:) = -dvdq(2,:);
    dcrmvdq(2+3,3+3,:) = -dvdq(1,:);
    dcrmvdq(3+3,2+3,:) = dvdq(1,:);
    dcrmvdq(1+3,2,:) = -dvdq(6,:);
    dcrmvdq(2+3,1,:) = dvdq(6,:);
    dcrmvdq(1+3,3,:) = dvdq(5,:);
    dcrmvdq(3+3,1,:) = -dvdq(5,:);
    dcrmvdq(2+3,3,:) = -dvdq(4,:);
    dcrmvdq(3+3,2,:) = dvdq(4,:);
    
    if ifsymbolic
        dcrmvdqd = sym(zeros(6,6,NB));
    else
        dcrmvdqd = zeros(6,6,NB);
    end
    
    dcrmvdqd(1,2,:) = -dvdqd(3,:);
    dcrmvdqd(2,1,:) = dvdqd(3,:);
    dcrmvdqd(1,3,:) = dvdqd(2,:);
    dcrmvdqd(3,1,:) = -dvdqd(2,:);
    dcrmvdqd(2,3,:) = -dvdqd(1,:);
    dcrmvdqd(3,2,:) = dvdqd(1,:);
    dcrmvdqd(1+3,2+3,:) = -dvdqd(3,:);
    dcrmvdqd(2+3,1+3,:) = dvdqd(3,:);
    dcrmvdqd(1+3,3+3,:) = dvdqd(2,:);
    dcrmvdqd(3+3,1+3,:) = -dvdqd(2,:);
    dcrmvdqd(2+3,3+3,:) = -dvdqd(1,:);
    dcrmvdqd(3+3,2+3,:) = dvdqd(1,:);
    dcrmvdqd(1+3,2,:) = -dvdqd(6,:);
    dcrmvdqd(2+3,1,:) = dvdqd(6,:);
    dcrmvdqd(1+3,3,:) = dvdqd(5,:);
    dcrmvdqd(3+3,1,:) = -dvdqd(5,:);
    dcrmvdqd(2+3,3,:) = -dvdqd(4,:);
    dcrmvdqd(3+3,2,:) = dvdqd(4,:);
else

%   vcross = [  0     0     0    ;
% 	      v(3)  0    -v(1) ;
% 	     -v(2)  v(1)  0 ];

    if ifsymbolic
        dcrmvdq = sym(zeros(3,3,NB));
    else
        dcrmvdq = zeros(3,3,NB);
    end
    
    dcrmvdq(2,1,:) = dvdq(3,:);
    dcrmvdq(3,1,:) = -dvdq(2,:);
    dcrmvdq(2,3,:) = -dvdq(1,:);
    dcrmvdq(3,2,:) = dvdq(1,:);
    
    if ifsymbolic
        dcrmvdqd = sym(zeros(3,3,NB));
    else
        dcrmvdqd = zeros(3,3,NB);
    end
    
    dcrmvdqd(2,1,:) = dvdqd(3,:);
    dcrmvdqd(3,1,:) = -dvdqd(2,:);
    dcrmvdqd(2,3,:) = -dvdqd(1,:);
    dcrmvdqd(3,2,:) = dvdqd(1,:);
end