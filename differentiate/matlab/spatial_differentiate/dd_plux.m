function  [ddo1dx1dx2,ddo2dx1dx2] = dd_plux( i1, di1dx1, di1dx2, ddi1dx1dx2 )

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

if nargout ~= 2
    error('Other form not supported yet!');
end

% if nargin == 6				% E,r --> X
% 
%   error('haven''t finished this yet');
%   o1 = [ i1, zeros(3); -i1*skew(i2), i1 ];
%   do1 = []; % not finished
% 
% else					% X --> E,r
  
%   o1 = i1(1:3,1:3);
%   o2 = -skew(o1'*i1(4:6,1:3));

    ddo1dx1dx2 = ddi1dx1dx2(1:3,1:3);

    in1 = i1;
    in1 = reshape(in1, [36,1]);
    in2 = di1dx1;
    in2 = reshape(in2, [36,1]);
    in3 = di1dx2;
    in3 = reshape(in3, [36,1]);
    in4 = ddi1dx1dx2;
    in4 = reshape(in4, [36,1]);

    ddi1dx1dx21_1 = in4(1,:);
    ddi1dx1dx21_2 = in4(7,:);
    ddi1dx1dx21_3 = in4(13,:);
    ddi1dx1dx22_1 = in4(2,:);
    ddi1dx1dx22_2 = in4(8,:);
    ddi1dx1dx22_3 = in4(14,:);
    ddi1dx1dx23_1 = in4(3,:);
    ddi1dx1dx23_2 = in4(9,:);
    ddi1dx1dx23_3 = in4(15,:);
    ddi1dx1dx24_1 = in4(4,:);
    ddi1dx1dx24_2 = in4(10,:);
    ddi1dx1dx24_3 = in4(16,:);
    ddi1dx1dx25_1 = in4(5,:);
    ddi1dx1dx25_2 = in4(11,:);
    ddi1dx1dx25_3 = in4(17,:);
    ddi1dx1dx26_1 = in4(6,:);
    ddi1dx1dx26_2 = in4(12,:);
    ddi1dx1dx26_3 = in4(18,:);
    di1dx11_1 = in2(1,:);
    di1dx11_2 = in2(7,:);
    di1dx11_3 = in2(13,:);
    di1dx12_1 = in2(2,:);
    di1dx12_2 = in2(8,:);
    di1dx12_3 = in2(14,:);
    di1dx13_1 = in2(3,:);
    di1dx13_2 = in2(9,:);
    di1dx13_3 = in2(15,:);
    di1dx14_1 = in2(4,:);
    di1dx14_2 = in2(10,:);
    di1dx14_3 = in2(16,:);
    di1dx15_1 = in2(5,:);
    di1dx15_2 = in2(11,:);
    di1dx15_3 = in2(17,:);
    di1dx16_1 = in2(6,:);
    di1dx16_2 = in2(12,:);
    di1dx16_3 = in2(18,:);
    di1dx21_1 = in3(1,:);
    di1dx21_2 = in3(7,:);
    di1dx21_3 = in3(13,:);
    di1dx22_1 = in3(2,:);
    di1dx22_2 = in3(8,:);
    di1dx22_3 = in3(14,:);
    di1dx23_1 = in3(3,:);
    di1dx23_2 = in3(9,:);
    di1dx23_3 = in3(15,:);
    di1dx24_1 = in3(4,:);
    di1dx24_2 = in3(10,:);
    di1dx24_3 = in3(16,:);
    di1dx25_1 = in3(5,:);
    di1dx25_2 = in3(11,:);
    di1dx25_3 = in3(17,:);
    di1dx26_1 = in3(6,:);
    di1dx26_2 = in3(12,:);
    di1dx26_3 = in3(18,:);
    i11_1 = in1(1,:);
    i11_2 = in1(7,:);
    i11_3 = in1(13,:);
    i12_1 = in1(2,:);
    i12_2 = in1(8,:);
    i12_3 = in1(14,:);
    i13_1 = in1(3,:);
    i13_2 = in1(9,:);
    i13_3 = in1(15,:);
    i14_1 = in1(4,:);
    i14_2 = in1(10,:);
    i14_3 = in1(16,:);
    i15_1 = in1(5,:);
    i15_2 = in1(11,:);
    i15_3 = in1(17,:);
    i16_1 = in1(6,:);
    i16_2 = in1(12,:);
    i16_3 = in1(18,:);
    mt1 = [(di1dx11_2.*di1dx24_3)./2.0-(di1dx11_3.*di1dx24_2)./2.0-(di1dx14_2.*di1dx21_3)./2.0+(di1dx14_3.*di1dx21_2)./2.0+(di1dx12_2.*di1dx25_3)./2.0-(di1dx12_3.*di1dx25_2)./2.0-(di1dx15_2.*di1dx22_3)./2.0+(di1dx15_3.*di1dx22_2)./2.0+(di1dx13_2.*di1dx26_3)./2.0-(di1dx13_3.*di1dx26_2)./2.0-(di1dx16_2.*di1dx23_3)./2.0+(di1dx16_3.*di1dx23_2)./2.0+(ddi1dx1dx21_2.*i14_3)./2.0-(ddi1dx1dx21_3.*i14_2)./2.0-(ddi1dx1dx24_2.*i11_3)./2.0+(ddi1dx1dx24_3.*i11_2)./2.0+(ddi1dx1dx22_2.*i15_3)./2.0-(ddi1dx1dx22_3.*i15_2)./2.0-(ddi1dx1dx25_2.*i12_3)./2.0+(ddi1dx1dx25_3.*i12_2)./2.0+(ddi1dx1dx23_2.*i16_3)./2.0-(ddi1dx1dx23_3.*i16_2)./2.0-(ddi1dx1dx26_2.*i13_3)./2.0+(ddi1dx1dx26_3.*i13_2)./2.0];
    mt2 = [di1dx11_1.*di1dx24_3.*(-1.0./2.0)+(di1dx11_3.*di1dx24_1)./2.0+(di1dx14_1.*di1dx21_3)./2.0-(di1dx14_3.*di1dx21_1)./2.0-(di1dx12_1.*di1dx25_3)./2.0+(di1dx12_3.*di1dx25_1)./2.0+(di1dx15_1.*di1dx22_3)./2.0-(di1dx15_3.*di1dx22_1)./2.0-(di1dx13_1.*di1dx26_3)./2.0+(di1dx13_3.*di1dx26_1)./2.0+(di1dx16_1.*di1dx23_3)./2.0-(di1dx16_3.*di1dx23_1)./2.0-(ddi1dx1dx21_1.*i14_3)./2.0+(ddi1dx1dx21_3.*i14_1)./2.0+(ddi1dx1dx24_1.*i11_3)./2.0-(ddi1dx1dx24_3.*i11_1)./2.0-(ddi1dx1dx22_1.*i15_3)./2.0+(ddi1dx1dx22_3.*i15_1)./2.0+(ddi1dx1dx25_1.*i12_3)./2.0-(ddi1dx1dx25_3.*i12_1)./2.0-(ddi1dx1dx23_1.*i16_3)./2.0+(ddi1dx1dx23_3.*i16_1)./2.0+(ddi1dx1dx26_1.*i13_3)./2.0-(ddi1dx1dx26_3.*i13_1)./2.0];
    mt3 = [(di1dx11_1.*di1dx24_2)./2.0-(di1dx11_2.*di1dx24_1)./2.0-(di1dx14_1.*di1dx21_2)./2.0+(di1dx14_2.*di1dx21_1)./2.0+(di1dx12_1.*di1dx25_2)./2.0-(di1dx12_2.*di1dx25_1)./2.0-(di1dx15_1.*di1dx22_2)./2.0+(di1dx15_2.*di1dx22_1)./2.0+(di1dx13_1.*di1dx26_2)./2.0-(di1dx13_2.*di1dx26_1)./2.0-(di1dx16_1.*di1dx23_2)./2.0+(di1dx16_2.*di1dx23_1)./2.0+(ddi1dx1dx21_1.*i14_2)./2.0-(ddi1dx1dx21_2.*i14_1)./2.0-(ddi1dx1dx24_1.*i11_2)./2.0+(ddi1dx1dx24_2.*i11_1)./2.0+(ddi1dx1dx22_1.*i15_2)./2.0-(ddi1dx1dx22_2.*i15_1)./2.0-(ddi1dx1dx25_1.*i12_2)./2.0+(ddi1dx1dx25_2.*i12_1)./2.0+(ddi1dx1dx23_1.*i16_2)./2.0-(ddi1dx1dx23_2.*i16_1)./2.0-(ddi1dx1dx26_1.*i13_2)./2.0+(ddi1dx1dx26_2.*i13_1)./2.0];
    ddo2dx1dx2 = [mt1;mt2;mt3];

% end
