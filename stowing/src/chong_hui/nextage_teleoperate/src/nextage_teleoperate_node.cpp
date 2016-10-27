#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <signal.h>
#include <termios.h>
#include <stdio.h>


#define KEYCODE_YP 0x43 
#define KEYCODE_YN 0x44
#define KEYCODE_XP 0x41
#define KEYCODE_XN 0x42
#define KEYCODE_ZP 0x2E
#define KEYCODE_ZN 0x2C
#define KEYCODE_Q 0x71

class TeleopNextage
{
public:
  TeleopNextage();
  void keyLoop();

private:

  
  ros::NodeHandle nh_;
  double linear_, angular_, l_scale_, a_scale_;
  ros::Publisher twist_pub_;
  
};

TeleopNextage::TeleopNextage():
  linear_(0),
  angular_(0),
  l_scale_(0.02),
  a_scale_(0.02)
{
  nh_.param("scale_angular", a_scale_, a_scale_);
  nh_.param("scale_linear", l_scale_, l_scale_);

  twist_pub_ = nh_.advertise<geometry_msgs::Twist>("Nextage/cmd_vel", 10);
}

int kfd = 0;
struct termios cooked, raw;

void quit(int sig)
{
  tcsetattr(kfd, TCSANOW, &cooked);
  ros::shutdown();
  exit(0);
}


int main(int argc, char** argv)
{
  ros::init(argc, argv, "teleop_Nextage");
  TeleopNextage teleop_nextage;

  signal(SIGINT,quit);

  teleop_nextage.keyLoop();
  
  return(0);
}


void TeleopNextage::keyLoop()
{
  char c;
  bool dirty=false;


  // get the console in raw mode                                                              
  tcgetattr(kfd, &cooked);
  memcpy(&raw, &cooked, sizeof(struct termios));
  raw.c_lflag &=~ (ICANON | ECHO);
  // Setting a new line, then end of file                         
  raw.c_cc[VEOL] = 1;
  raw.c_cc[VEOF] = 2;
  tcsetattr(kfd, TCSANOW, &raw);

  puts("Reading from keyboard");
  puts("---------------------------");
  puts("Use arrow keys to move the Nextage robot.");


  for(;;)
  {
    // get the next event from the keyboard  
    if(read(kfd, &c, 1) < 0)
    {
      perror("read():");
      exit(-1);
    }

    linear_=angular_=0;
    ROS_DEBUG("value: 0x%02X\n", c);
    //ROS_INFO("value: 0x%02X\n", c);
    geometry_msgs::Twist twist;

    switch(c)
    {
      case KEYCODE_XP:
        ROS_DEBUG("XP");
        linear_ = 1.0;;
        twist.linear.x = l_scale_*linear_;
        dirty = true;
        break;
      case KEYCODE_XN:
        ROS_DEBUG("XN");
        linear_ = -1.0;;
        twist.linear.x = l_scale_*linear_;
        dirty = true;
        break;
      case KEYCODE_YP:
        ROS_DEBUG("YP");
        linear_ = 1.0;;
        twist.linear.y = l_scale_*linear_;
        dirty = true;
        break;
      case KEYCODE_YN:
        ROS_DEBUG("YN");
        linear_ = -1.0;;
        twist.linear.y = l_scale_*linear_;
        dirty = true;
        break;
      case KEYCODE_ZP:
        ROS_DEBUG("ZP");
        linear_ = 1.0;;
        twist.linear.z = l_scale_*linear_;
        dirty = true;
        break;
      case KEYCODE_ZN:
        ROS_DEBUG("ZN");
        linear_ = -1.0;;
        twist.linear.z = l_scale_*linear_;
        dirty = true;
        break;
    }
    
    if(dirty ==true)
    {
      twist_pub_.publish(twist);    
      dirty=false;
    }
  }


  return;
}



