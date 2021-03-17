#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <turtlesim/TeleportAbsolute.h>
#include <tutorial/typedef.h>

int main(int argc, char **argv){
    double velocity;
    
    ros::init(argc, argv, "Square");
    ros::NodeHandem nh;
    ros::Publisher pub = nh.advertise<geometry_msgs::Twist>("turtle1/cmd_vel", 1000);
    ros::Publisher pub2 = nh.advertise<geometry_msgs::Twist>("turtle1/cmd_theta", 1000);
    ros::ServiceClient teleportClient = nh.serviceClient<turtlesim::TeleportAbsolute>("turtle1/teleport_absolute");
    
    turtlesim::TeleportAbsolute::Request req;
    turtlesim::TeleportAbsolute::Response res;
  
   
    req.x = 0;
    req.y = 0;
    req.theta = 0;
    double distancia = 0,
    double dist_count = 0;
  
    
    const std::string PARAM_Velocity = "~velocity";
  
  
    bool ok = ros::param::get(PARAM_Velocity,velocity);
    if(!ok){
        ROS_FATAL_STREAM("No se pudo recibir el parametro velocity");
        exit(1);
    }
}

    double t0 = ros::Time::now().toSec();
   
 while(ok){
     
    double t1 = ros::Time::now().toSec();
     
    distancia = velocity * (t1-t0);
     
    dist_counter += distancia;
     
    if(dist_counter >= 3){
        
        req.theta += 1.57;  
        pub2.publish(req.theta);
        pub.publish(velocity);
        
    }
     
 
 
 
 }

