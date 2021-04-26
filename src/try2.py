import sys
import rospy
import moveit_commander
import moveit_msgs.msg
import geometry_msgs.msg
import copy

moveit_commander.roscpp_initialize(sys.argv)
rospy.init_node('my_moveit_group', anonymous=True)

robot = moveit_commander.RobotCommander()
scene = moveit_commander.PlanningSceneInterface()
group = moveit_commander.MoveGroupCommander("arm")

# clear constraints
group.clear_path_constraints()

waypoints = []

# start with the current pose
waypoints.append(group.get_current_pose().pose)

  # first orient gripper and move forward (+x)
wpose = geometry_msgs.msg.Pose()
wpose.orientation.w = 1.0
wpose.position.x = waypoints[0].position.x + 0.1
wpose.position.y = waypoints[0].position.y
wpose.position.z = waypoints[0].position.z
waypoints.append(copy.deepcopy(wpose))

  # second move down
wpose.position.z -= 0.10
waypoints.append(copy.deepcopy(wpose))

  # third move to the side
wpose.position.y += 0.05
waypoints.append(copy.deepcopy(wpose))


wpose.position.z += 0.15
waypoints.append(copy.deepcopy(wpose))

wpose.position.x -= 0.05
waypoints.append(copy.deepcopy(wpose))

wpose.position.y += 0.15
waypoints.append(copy.deepcopy(wpose))

  ## We want the cartesian path to be interpolated at a resolution of 1 cm
  ## which is why we will specify 0.01 as the eef_step in cartesian
  ## translation.  We will specify the jump threshold as 0.0, effectively
  ## disabling it.
(plan, fraction) = group.compute_cartesian_path(
                               waypoints,   # waypoints to follow
                               0.01,        # eef_step
                               0.0)         # jump_threshold
group.execute(plan, wait=True)

# Calling `stop()` ensures that there is no residual movement
group.stop()

# It is always good to clear your targets after planning with poses.
group.clear_pose_targets()

rospy.sleep(5)

moveit_commander.roscpp_shutdown()
