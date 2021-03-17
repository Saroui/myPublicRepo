#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <turtlesim/TeleportAbsolute.h>


int main(int argc, char **argv){
    double velocity;
    
    ros::init(argc, argv, "Square");
    ros::NodeHandle nh;
    ros::Publisher pub = nh.advertise<geometry_msgs::Twist>("turtle1/cmd_vel", 1000);
    ros::ServiceClient teleportClient = nh.serviceClient<turtlesim::TeleportAbsolute>("turtle1/teleport_absolute");
    
    turtlesim::TeleportAbsolute::Request req;
    turtlesim::TeleportAbsolute::Response res;
    double distInicial= 1;
    req.x = distInicial;
    req.y = 1;
    req.theta = 0;
    double distancia = 0;
    bool success = teleportClient.call(req, res);
    
    if(success){
        ROS_INFO_STREAM("Da orientiacion");
    }else {
        ROS_INFO_STREAM("error");
    }
   
    const std::string PARAM_Velocity = "~velocity";

    bool ok = ros::param::get(PARAM_Velocity,velocity);
    if(!ok){
        ROS_FATAL_STREAM("No se pudo recibir el parametro velocity");
        exit(1);
    }


    
    ros::Rate rate(2);
    double velAngular=1.0;
    geometry_msgs::Twist msg;
    double current_theta = 0;
    int count=1;
    msg.linear.x= velocity;
    
    double t0 = ros::Time::now().toSec();
 while(ros::ok()){
  
    double t1 = ros::Time::now().toSec();
     
    distancia = velocity * (t1-t0);
     
    ROS_INFO_STREAM("Distancia recorrida"<<distancia);
     
    if(distancia == (distInicial+7)){
       count=count+1;
       distInicial=distancia;
       msg.angular.z = 1.0;
       msg.linear.x=0;
       //msg.linear.y=0;
       pub.publish(msg);
    while(current_theta < 1.57){
        pub.publish(msg);
      
        double t2 = ros::Time::now().toSec();
        current_theta =(velAngular)*(t2 - t1);
        
        ROS_INFO_STREAM("va desde el angulo" << current_theta << "a el angulo" << 1.57);    }
  ROS_INFO_STREAM("Ya termino de rotar");
  msg.angular.z = 0;
  	/*if(count%2==0){
		msg.linear.y=velocity;
	}
	else{
		msg.linear.x=velocity;
	}*/
  pub.publish(msg); 
    
    }
  
    msg.linear.x=1.0;
    pub.publish(msg);   
    }
  ros::spinOnce();
  rate.sleep();  
 
 
 
 }
