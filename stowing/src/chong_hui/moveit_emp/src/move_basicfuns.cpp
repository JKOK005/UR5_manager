#include "ros/ros.h"
#include "std_msgs/String.h"
#include <iostream>
//#include <moveit/move_group_interface/move_group.h>
#include "/home/haibin/catkin_ws/src/moveit/move_group_interface/move_group.h"
#include "radoe_msgs/command_from_gui.h"
#include "radoe_msgs/feedback_from_robot.h"
int command = 0;
int isplanned=0;
ros::Publisher robot_feedback_pub;
radoe_msgs::feedback_from_robot robot_feedback;

void moveJoint()
{
  // plan to a joint-space goal
  // this connecs to a running instance of the move_group node
  move_group_interface::MoveGroup group("manipulator");
  // First get the current set of joint values for the group.
  std::vector<double> group_variable_values;
  group.getCurrentState()->copyJointGroupPositions(group.getCurrentState()->getRobotModel()->getJointModelGroup(group.getName()), group_variable_values);
  // modify one of the joints, plan to the new joint space goal
  group_variable_values[0] = 0.5;
  group_variable_values[1] = 0;  
  group_variable_values[2] = 0;
  group_variable_values[3] = 0;
  group_variable_values[4] = 0.5;
  group_variable_values[5] = 0;
  group.setJointValueTarget(group_variable_values);
  // plan the motion and then move the group to the sampled target 
  group.move();
}

void moveSingleposition()
{
  // plan to a single-position goal
  // this connecs to a running instance of the move_group node
  move_group_interface::MoveGroup group("manipulator");
  double x = 1.1;
  double y = 1.0;
  double z = 1.1;
  ROS_INFO("Move to : x=%f, y=%f, z=%f",x,y,z);
  group.setPositionTarget(x,y,z);
  // plan the motion and then move the group to the sampled target 
  group.move();
}

void moveMultipositions()
{
  // plan to a multi-position goal
  // this connecs to a running instance of the move_group node
  move_group_interface::MoveGroup group("manipulator");
  move_group_interface::MoveGroup::Plan plan; 

  group.setStartStateToCurrentState();

  std::vector<geometry_msgs::Pose> waypoints;

  geometry_msgs::Pose target_pose = group.getCurrentPose().pose;
  target_pose.position.x += 0.2;
  target_pose.position.y += 0.1;
  target_pose.position.z += 0.2;
  waypoints.push_back(target_pose); // up and out

  target_pose.position.y -= 0.2;
  waypoints.push_back(target_pose); // left

  target_pose.position.z -= 0.2;
  target_pose.position.y += 0.2;
  target_pose.position.x -= 0.2;
  waypoints.push_back(target_pose); // down and right (back to start)

  moveit_msgs::RobotTrajectory trajectory_msg;
  group.setPlanningTime(10.0);
 
  double fraction = group.computeCartesianPath(waypoints,
                                               0.01,  // eef_step
                                               0.0,   // jump_threshold
                                               trajectory_msg);

  ROS_INFO("fraction=%f",fraction);
  plan.trajectory_ = trajectory_msg;
  isplanned=1;
  robot_feedback.planned=isplanned;
  robot_feedback_pub.publish(robot_feedback);
  
  sleep(0.1);
 
  group.execute(plan); 
}


void commandCallback(const radoe_msgs::command_from_gui::ConstPtr& msg)
{
  command = msg->command;
  ROS_INFO("command received");
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "move_group_interface_demo");
  // start a ROS spinning thread
  //ros::AsyncSpinner spinner(1);
  //spinner.start();
  // Subsribe command topic
  ros::NodeHandle nh;

  robot_feedback_pub=nh.advertise<radoe_msgs::feedback_from_robot>("/radoe/feedback_from_robot",10);
  ros::Subscriber command_sub = nh.subscribe("/radoe/comamnd_from_gui",100,commandCallback);
  ros::Rate loop_rate(1);

  int counter=0;
  while (ros::ok())
    {


counter++;

  ROS_INFO("counter=%d",counter);

  //if (command == 1)
  {
    //moveJoint();
  }
//  if (command == 2)
//  {
//    moveSingleposition();
//  }
  if (command == 1)
  {
    moveMultipositions();
  }
  //else if(command==2)
  {
      //exe
  }
  //ros::waitForShutdown();

  ros::spinOnce();

      loop_rate.sleep();
  }

  return 0;
}

