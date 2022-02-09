clear; clc;

uncertainty_mcI.um = 0.03;
uncertainty_mcI.uc = 0.03;
uncertainty_mcI.uI = 0.03;

% model = create_model_from_urdf('C:\Users\RoahmLab\Documents\DRD\urdf\digit_model_arm_fixed_left_pinned_simplified.urdf', 'x');
% model = create_model_from_urdf('C:\Users\RoahmLab\Documents\DRD\urdf\cassie_Lpinned.urdf', 'x');
% model = create_model_from_urdf('C:\Users\RoahmLab\Documents\DRD\urdf\rabbit_pinned.urdf', 'y');
% model = rabbit;
model = create_model_from_urdf('fetch_arm_reduced.urdf', 'disable', false, uncertainty_mcI);

q = rand(6,1);
e = 0.00191;

% q = 2*pi*rand(model.NB,1);
% qd = 2*pi*rand(model.NB,1);
% q = sym('q',[model.NB,1],'real');
% qd = sym('qd',[model.NB,1],'real');
q = infsup(q - e, q + e);
qd = infsup(zeros(model.NB,1),0.2*ones(model.NB,1));

% tic;
% [H,C,dHdq,dCdx,ddHddq,ddCddx] = differentiate_FDcrb(model, q, qd);
% toc;
tic;
[H] = differentiate_FDcrb(model, q, qd);
toc;


