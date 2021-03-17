#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <turtlesim/TeleportAbsolute.h>
#include <tutorial/typedef.h>

int main(int argc, char **argv){
    double velocity
    
    ros::init(argc, argv, "adelante");
    ros::NodeHandem nh;
    ros::Publisher pub = nh.advertise<geometry_msgs::Twist>("turtle1/cmd_vel", 1000);
    ros::ServiceClient teleportClient = nh.serviceClient<turtlesim::TeleportAbsolute>("turtle1/teleport_absolute");
    
    turtlesim::TeleportAbsolute::Request req;
    turtlesim::TeleportAbsolute::Response res;
  
   
    req.x = 0;
    req.y = 0;
    req.theta = 0;
  
    
    const std::string PARAM_Velocity = "~velocity";
  
  
    bool ok = ros::param::get(PARAM_Velocity,velocity);
    if(!ok){
        ROS_FATAL_STREAM("No se pudo recibir el parametro velocity");
        exit(1);
    }
}
