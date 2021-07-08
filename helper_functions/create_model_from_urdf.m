function robot = create_model_from_urdf(urdf_file_name, base_rot_axis)

% assume pinned model / serial model

if nargin < 2
    base_rot_axis = 'Rx';
else
    if strcmp(base_rot_axis, 'x') || strcmp(base_rot_axis, 'y') || strcmp(base_rot_axis, 'z')
        base_rot_axis = ['R',base_rot_axis];
    else
        error('Input axis should be x, y or z');
    end
end

[robot.name, links, joints, transmissions] = ros_load_urdf(urdf_file_name);

[links, joints] = remove_fix_joints(links, joints);

robot.NB = length(links);

robot.parent = 0:(robot.NB-1);

robot.gravity = [0;0;-9.81];

robot.jtype = cell(1,robot.NB);
robot.Xtree = cell(1,robot.NB);
robot.I = cell(1,robot.NB);
robot.appearance.body = cell(1,robot.NB);

for i = 1:robot.NB
    if i == 1
        robot.jtype{i} = base_rot_axis;
        robot.Xtree{i} = eye(6);
    else
        if joints(i-1).Axis(1) ~= 0
            robot.jtype{i} = 'Rx';
        else
            if joints(i-1).Axis(2) ~= 0
                robot.jtype{i} = 'Ry';
            else
                if joints(i-1).Axis(3) ~= 0
                    robot.jtype{i} = 'Rz';
                else
                    error('Wrong axis specified');
                end
            end
        end
        robot.Xtree{i} = rotx(joints(i-1).R(1)) * roty(joints(i-1).R(2)) * rotz(joints(i-1).R(3)) * xlt(joints(i-1).Offset);
    end
    robot.I{i} = mcI(links(i).Mass, links(i).Offset, links(i).Inertia);
    robot.appearance.body{i} = { 'cyl', [0 0 0; 0 0.4 0], 0.01 };
end







