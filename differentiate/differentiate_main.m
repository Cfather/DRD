clear; clc;

model = create_model_from_urdf('C:\Users\RoahmLab\Documents\DRD\urdf\cassie_Lpinned.urdf', 'x');
% model = create_model_from_urdf('C:\Users\RoahmLab\Documents\DRD\urdf\rabbit_pinned.urdf', 'y');
% model = rabbit;

% q = 2*pi*rand(model.NB,1);
% qd = 2*pi*rand(model.NB,1);
% q = sym('q',[model.NB,1],'real');
% qd = sym('qd',[model.NB,1],'real');
q = infsup(zeros(model.NB,1),0.05*ones(model.NB,1));
qd = infsup(zeros(model.NB,1),0.15*ones(model.NB,1));

tic;
[H,C,dHdq,dCdx,ddHddq,ddCddx] = differentiate_FDcrb(model, q, qd);
toc;