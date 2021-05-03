#!/usr/bin/env python
import rospy
from geometry_msgs.msg import Twist

pub = rospy.Publisher('cmd_vel', Twist, queue_size=10)
rospy.init_node('node_name')
r = rospy.Rate(30) # 30hz

now = rospy.Time.now()
rate = rospy.Rate(10)

while rospy.Time.now() < now + rospy.Duration.from_sec(5): # Driving in a circle for 5 sec

    msg = Twist()
    msg.linear.x = 1.0            # http://docs.ros.org/api/geometry_msgs/html/msg/Twist.html
    msg.angular.z = 1.0

    pub.publish(msg)
    r.sleep()

while rospy.Time.now() < now + rospy.Duration.from_sec(7): # Stopping

    msg = Twist()
    msg.linear.x = 0
    msg.angular.z = 0

    pub.publish(msg)
    r.sleep()


