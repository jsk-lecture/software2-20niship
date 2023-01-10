#include "ros/ros.h"
#include "std_msgs/String.h"
#include <beginner_tutorials/testMsg.h>

void chatterCallback(const beginner_tutorials::testMsg &msg)
{
  ROS_INFO("I heard: [%s] int = [%d]", msg.str.c_str(), msg.integer);
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "listener");
  ros::NodeHandle n;
  ros::Subscriber sub = n.subscribe("chatter", 1000, chatterCallback);
  ros::spin();
  return 0;
}

