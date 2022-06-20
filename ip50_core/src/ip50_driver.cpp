#include <ros/ros.h>
#include <ros/console.h>
#include <ip50_core/ip50_driver.hpp>

using namespace aidl;

int main (int argc, char **argv) {
    ros::init(argc, argv, "ip50_driver");
    ros::NodeHandle nh;
    ip50BodyNode ip50 = ip50BodyNode(&nh);

	ros::AsyncSpinner spinner(0);
    spinner.start();
	
    ROS_INFO("IP50 Driver Node is started");
	ros::waitForShutdown();
}