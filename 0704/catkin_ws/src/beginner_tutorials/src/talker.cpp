#include <ros/ros.h>
#include <beginner_tutorials/NamedPoint.h>
#include <beginner_tutorials/testMsg.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "talker");
  ros::NodeHandle n;
  ros::Publisher chatter_pub =
    n.advertise<beginner_tutorials::testMsg>("chatter", 1000);
  ros::Rate loop_rate(10);

  int count = 0;

  while (ros::ok())
  {
    beginner_tutorials::testMsg msg;
    count++;
    msg.str = "This is new message!";
    msg.integer = count * 2;
    ROS_INFO_STREAM(msg);
    chatter_pub.publish(msg);
    ros::spinOnce();
    loop_rate.sleep();
  }
  return 0;
}
