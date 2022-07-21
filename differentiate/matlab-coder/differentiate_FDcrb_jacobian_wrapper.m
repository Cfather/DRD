function [H,C,dHdq,dCdx] = differentiate_FDcrb_jacobian_wrapper(model, q, qd)

jtype = '';
for i = 1:model.NB
    switch model.jtype{i}
      case 'Rx'
        jt = 'x';
      case 'Ry'
        jt = 'y';
      case 'Rz'
        jt = 'z';
      case '-Rx'
        jt = 'a';
      case '-Ry'
        jt = 'b';
      case '-Rz'
        jt = 'c';
      otherwise
        error('Unrecognized joint type!');
    end
    jtype = [jtype, jt];
end

[H,C,dHdq,dCdx] = differentiate_FDcrb_jacobian_pure_mex(model.NB, jtype, model.Xtree, model.parent, model.I, model.transmissionInertia, q, qd);