function  robot = rabbit()

% planar  create an n-link planar robot.
% planar(n)  creates an all-revolute n-link planar robot with identical
% links.  For efficient use with Simulink, this function stores a copy of
% the last robot it created, and returns the copy if the arguments match.

% initial_state = [0.25230725286791777506323342095129,
% - 0.75896582674490398190414452983532,
% 0.56063375711872698303750439663418,
% 2.9227742544740062946573289082153,
% 0.69696650953970351594080057111569];

robot.NB = 5;
robot.parent = [0 1 2 3 4];
robot.gravity = [0;-9.81;0];

for i = 1:5
  robot.jtype{i} = 'r';
end

robot.Xtree{1} = plnr( 0, [0 0]);
robot.I{1} = mcI( 3.2, [0 0.16], 0.2 );
robot.appearance.body{1} = { 'cyl', [0 0 0; 0 0.4 0], 0.05 };

robot.Xtree{2} = plnr( 0, [0 0.4]);
robot.I{2} = mcI( 6.8, [0 0.29], 0.47 );
robot.appearance.body{2} = { 'cyl', [0 0 0; 0 0.4 0], 0.05 };

robot.Xtree{3} = plnr( 0, [0 0.4]);
robot.I{3} = mcI( 12, [0 0.24], 1.33 );
robot.appearance.body{3} = { 'cyl', [0 0 0; 0 0.63 0], 0.05 };

robot.Xtree{4} = plnr( 0, [0 0]);
robot.I{4} = mcI( 6.8, [0 0.11], 0.47 );
robot.appearance.body{4} = { 'cyl', [0 0 0; 0 0.4 0], 0.05 };

robot.Xtree{5} = plnr( 0, [0 0.4]);
robot.I{5} = mcI( 3.2, [0 0.24], 0.2 );
robot.appearance.body{5} = { 'cyl', [0 0 0; 0 0.4 0], 0.05 };

robot.appearance.base = { 'box', [-0.02 -0.03 -0.02; 0.02 0.03 -0.007] };

