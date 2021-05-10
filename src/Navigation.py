#!/usr/bin/env python
import rospy
from geometry_msgs.msg import Twist

pub = rospy.Publisher('cmd_vel', Twist, queue_size=10)
rospy.init_node('node_name')
r = rospy.Rate(30) # 30hz

now = rospy.Time.now()
rate = rospy.Rate(10)

while rospy.Time.now() < now + rospy.Duration.from_sec(2): # Waiting for 2 sec

    msg = Twist()
    msg.linear.x = 0
    msg.angular.z = 0

    pub.publish(msg)
    r.sleep()

while rospy.Time.now() < now + rospy.Duration.from_sec(6.8): # Driving forwards for 4.8 sec (strawberry/lemon)

    msg = Twist()
    msg.linear.x = 1            # http://docs.ros.org/api/geometry_msgs/html/msg/Twist.html
    msg.angular.z = 0

    pub.publish(msg)
    r.sleep()


while rospy.Time.now() < now + rospy.Duration.from_sec(8.55): # Turning right takes 1.75 sec

    msg = Twist()
    msg.linear.x = 0           
    msg.angular.z = -1.0

    pub.publish(msg)
    r.sleep()

while rospy.Time.now() < now + rospy.Duration.from_sec(13.55): # Driving forwards for 5 sec

    msg = Twist()
    msg.linear.x = 1            
    msg.angular.z = 0

    pub.publish(msg)
    r.sleep()

while rospy.Time.now() < now + rospy.Duration.from_sec(15.55): # Stopping for 2 sec

    msg = Twist()
    msg.linear.x = 0
    msg.angular.z = 0

    pub.publish(msg)
    r.sleep()

while rospy.Time.now() < now + rospy.Duration.from_sec(20.55): # Driving backwards for 5 sec

    msg = Twist()
    msg.linear.x = -1            
    msg.angular.z = 0

    pub.publish(msg)
    r.sleep()

while rospy.Time.now() < now + rospy.Duration.from_sec(22.3): # Turning right takes 1.75 sec

    msg = Twist()
    msg.linear.x = 0           
    msg.angular.z = -1.0

    pub.publish(msg)
    r.sleep()

while rospy.Time.now() < now + rospy.Duration.from_sec(27.1): # Driving forwards for 4.8 sec

    msg = Twist()
    msg.linear.x = 1            
    msg.angular.z = 0

    pub.publish(msg)
    r.sleep()

while rospy.Time.now() < now + rospy.Duration.from_sec(29): # Stopping

    msg = Twist()
    msg.linear.x = 0
    msg.angular.z = 0

    pub.publish(msg)
    r.sleep()


