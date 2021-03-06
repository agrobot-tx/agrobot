import sys
import rospy
import moveit_commander
import moveit_msgs.msg
import geometry_msgs.msg

moveit_commander.roscpp_initialize(sys.argv)
rospy.init_node('my_moveit_group', anonymous=True)

robot = moveit_commander.RobotCommander()
scene = moveit_commander.PlanningSceneInterface()
group = moveit_commander.MoveGroupCommander("arm")

# clear constraints
group.clear_path_constraints()
group.clear_pose_targets()

# Setting only a goal for the lowest joint and printing
group_variable_values = group.get_current_joint_values()
print "============ Joint values: ", group_variable_values
print "============ Active Joints: ", group.get_active_joints()
print "============ End-effector: ", group.get_end_effector_link()
print "============ End-effector pose: ", group.get_current_pose()
print "============ Joints: ", group.get_joints()
print "============ Goal joint tolerances: ", group.get_goal_joint_tolerance()
print "============ Interface description: ", group.get_interface_description()
print "============ Known constraints: ", group.get_known_constraints()
group_variable_values[0] = 1.0
group.set_joint_value_target(group_variable_values)

rospy.sleep(5)

# It is always good to clear your targets after planning with poses.
group.clear_pose_targets()

rospy.sleep(5)

moveit_commander.roscpp_shutdown()
