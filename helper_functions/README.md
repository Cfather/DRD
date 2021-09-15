ros_load_urdf: read urdf tree and return information of links and joints.

create_model_from_urdf: create a Roy's style robot from a urdf file.

- I defined -Rx, -Ry and -Rz since urdf file contains joints that rotates in a reversed direction. Simply change joint angle q to -q when you encounter these. You can also replace jcalc.m with the one inside this repository.

- You will notice 'base_rot_axis' in this function. This is because we were dealing with an underactuated system before moving to Digit. You will have to delete that part for Digit.
