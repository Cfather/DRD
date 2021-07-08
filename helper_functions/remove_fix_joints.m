function [links, joints] = remove_fix_joints(links, joints)

% copied from FROST

Rz = @(th) [cos(th), -sin(th), 0; sin(th), cos(th), 0; 0,0,1];
Ry = @(th) [cos(th), 0, sin(th); 0, 1, 0; -sin(th), 0, cos(th)];
Rx = @(th) [1,0,0; 0, cos(th), -sin(th); 0, sin(th), cos(th)];
Rot = @(q) Rz(q(3))*Ry(q(2))*Rx(q(1));
joints_to_remove = [];
links_to_remove = [];
for i = 1:length(joints)
    if strcmp(joints(i).Type, 'fixed')
        parent_index = find(strcmp({links.Name}, joints(i).Parent));
        child_index = find(strcmp({links.Name}, joints(i).Child));
        % Add mass together
        M = links(parent_index).Mass + links(child_index).Mass;
        % Recompute center of mass
        COM = (1.0/M) * (links(parent_index).Mass * links(parent_index).Offset ...
            +  links(child_index).Mass * links(child_index).Offset);
        % Recompute Inertia matrix
        % Compute inertias about new COM and add together
        R1 = (COM - links(parent_index).Offset);
        R2 = (COM - links(child_index).Offset);
        J1 = links(parent_index).Inertia + links(parent_index).Mass * (dot(R1,R1)*eye(3) - (R1'*R1));
        J2 = links(child_index).Inertia + links(child_index).Mass * (dot(R2,R2)*eye(3) - (R2'*R2));

        % Update parent link
        links(parent_index).Mass = M;
        links(parent_index).Offset = COM;
        links(parent_index).Inertia = J1 + J2;

        % Find and remove the fixed joint and all children links
        fixed_joint_children_indices = find(strcmp({links.Name}, joints(i).Child));
        for j = 1:length(fixed_joint_children_indices)
            child_link = links(fixed_joint_children_indices);
            joints_with_fixed_parent = find(strcmp({joints.Parent}, child_link.Name));
            for k = 1:length(joints_with_fixed_parent)
                joints(joints_with_fixed_parent(k)).Parent = links(parent_index).Name;
                H01 = [Rot(joints(i).R), joints(i).Offset'; zeros(1,3), 1];
                H12 = [Rot(joints(joints_with_fixed_parent(k)).R), joints(joints_with_fixed_parent(k)).Offset'; zeros(1,3), 1];
                H = H01*H12;
                joints(joints_with_fixed_parent(k)).Offset = H(1:3, end)';
                joints(joints_with_fixed_parent(k)).R = H(1:3, 1:3);
            end
        end
        joints_to_remove = horzcat(joints_to_remove, i);
        links_to_remove = horzcat(links_to_remove, child_index);
    end
end
joints(joints_to_remove) = [];
links(links_to_remove) = [];

