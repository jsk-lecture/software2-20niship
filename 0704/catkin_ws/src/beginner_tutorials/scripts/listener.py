#!/usr/bin/env python

import rospy
from beginner_tutorials.msg import testMsg

def callback(msg):
    rospy.loginfo("I heard {} integer={}".format(msg.str, msg.integer))

def listener():
    rospy.init_node('listener')
    rospy.Subscriber('chatter', testMsg, callback)
    rospy.spin()

if __name__ == '__main__':
    try:
        listener()
    except rospy.ROSInterruptException: 
        print("error")
        pass
