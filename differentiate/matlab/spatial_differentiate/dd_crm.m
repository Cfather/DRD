function  ddcrmvddx = dd_crm( v, ddvddx, NB, input_type )

% crm  spatial/planar cross-product operator (motion).
% crm(v)  calculates the 6x6 (or 3x3) matrix such that the expression
% crm(v)*m is the cross product of the motion vectors v and m.  If
% length(v)==6 then it is taken to be a spatial vector, and the return
% value is a 6x6 matrix.  Otherwise, v is taken to be a planar vector, and
% the return value is 3x3.

if length(v) == 6

%   vcross = [0    -v(3)  v(2)   0     0     0    ;
%     	      v(3)  0    -v(1)   0     0     0    ;
%     	     -v(2)  v(1)  0      0     0     0    ;
%     	      0    -v(6)  v(5)   0    -v(3)  v(2) ;
%     	      v(6)  0    -v(4)   v(3)  0    -v(1) ;
%     	     -v(5)  v(4)  0     -v(2)  v(1)  0 ];

    ddcrmvddx = initialize_array(input_type, [6,6,2*NB,2*NB]);
    
    ddcrmvddx(1,2,:,:) = -ddvddx(3,:,:);
    ddcrmvddx(2,1,:,:) = ddvddx(3,:,:);
    ddcrmvddx(1,3,:,:) = ddvddx(2,:,:);
    ddcrmvddx(3,1,:,:) = -ddvddx(2,:,:);
    ddcrmvddx(2,3,:,:) = -ddvddx(1,:,:);
    ddcrmvddx(3,2,:,:) = ddvddx(1,:,:);
    ddcrmvddx(1+3,2+3,:,:) = -ddvddx(3,:,:);
    ddcrmvddx(2+3,1+3,:,:) = ddvddx(3,:,:);
    ddcrmvddx(1+3,3+3,:,:) = ddvddx(2,:,:);
    ddcrmvddx(3+3,1+3,:,:) = -ddvddx(2,:,:);
    ddcrmvddx(2+3,3+3,:,:) = -ddvddx(1,:,:);
    ddcrmvddx(3+3,2+3,:,:) = ddvddx(1,:,:);
    ddcrmvddx(1+3,2,:,:) = -ddvddx(6,:,:);
    ddcrmvddx(2+3,1,:,:) = ddvddx(6,:,:);
    ddcrmvddx(1+3,3,:,:) = ddvddx(5,:,:);
    ddcrmvddx(3+3,1,:,:) = -ddvddx(5,:,:);
    ddcrmvddx(2+3,3,:,:) = -ddvddx(4,:,:);
    ddcrmvddx(3+3,2,:,:) = ddvddx(4,:,:);
else

%   vcross = [  0     0     0    ;
% 	      v(3)  0    -v(1) ;
% 	     -v(2)  v(1)  0 ];

    ddcrmvddx = initialize_array(input_type, [3,3,2*NB,2*NB]);
    
    ddcrmvddx(2,1,:,:) = ddvddx(3,:,:);
    ddcrmvddx(3,1,:,:) = -ddvddx(2,:,:);
    ddcrmvddx(2,3,:,:) = -ddvddx(1,:,:);
    ddcrmvddx(3,2,:,:) = ddvddx(1,:,:);
end