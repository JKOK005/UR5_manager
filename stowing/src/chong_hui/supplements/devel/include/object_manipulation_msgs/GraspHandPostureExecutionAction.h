/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/conghui/NTU_Amazon_Picking_Challenge/demo_manipulation/src/supplements/devel/share/object_manipulation_msgs/msg/GraspHandPostureExecutionAction.msg
 *
 */


#ifndef OBJECT_MANIPULATION_MSGS_MESSAGE_GRASPHANDPOSTUREEXECUTIONACTION_H
#define OBJECT_MANIPULATION_MSGS_MESSAGE_GRASPHANDPOSTUREEXECUTIONACTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <object_manipulation_msgs/GraspHandPostureExecutionActionGoal.h>
#include <object_manipulation_msgs/GraspHandPostureExecutionActionResult.h>
#include <object_manipulation_msgs/GraspHandPostureExecutionActionFeedback.h>

namespace object_manipulation_msgs
{
template <class ContainerAllocator>
struct GraspHandPostureExecutionAction_
{
  typedef GraspHandPostureExecutionAction_<ContainerAllocator> Type;

  GraspHandPostureExecutionAction_()
    : action_goal()
    , action_result()
    , action_feedback()  {
    }
  GraspHandPostureExecutionAction_(const ContainerAllocator& _alloc)
    : action_goal(_alloc)
    , action_result(_alloc)
    , action_feedback(_alloc)  {
    }



   typedef  ::object_manipulation_msgs::GraspHandPostureExecutionActionGoal_<ContainerAllocator>  _action_goal_type;
  _action_goal_type action_goal;

   typedef  ::object_manipulation_msgs::GraspHandPostureExecutionActionResult_<ContainerAllocator>  _action_result_type;
  _action_result_type action_result;

   typedef  ::object_manipulation_msgs::GraspHandPostureExecutionActionFeedback_<ContainerAllocator>  _action_feedback_type;
  _action_feedback_type action_feedback;




  typedef boost::shared_ptr< ::object_manipulation_msgs::GraspHandPostureExecutionAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::object_manipulation_msgs::GraspHandPostureExecutionAction_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct GraspHandPostureExecutionAction_

typedef ::object_manipulation_msgs::GraspHandPostureExecutionAction_<std::allocator<void> > GraspHandPostureExecutionAction;

typedef boost::shared_ptr< ::object_manipulation_msgs::GraspHandPostureExecutionAction > GraspHandPostureExecutionActionPtr;
typedef boost::shared_ptr< ::object_manipulation_msgs::GraspHandPostureExecutionAction const> GraspHandPostureExecutionActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::object_manipulation_msgs::GraspHandPostureExecutionAction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::object_manipulation_msgs::GraspHandPostureExecutionAction_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace object_manipulation_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'household_objects_database_msgs': ['/opt/ros/hydro/share/household_objects_database_msgs/cmake/../msg'], 'shape_msgs': ['/opt/ros/hydro/share/shape_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/hydro/share/actionlib_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/hydro/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/hydro/share/sensor_msgs/cmake/../msg', '/opt/ros/hydro/share/sensor_msgs/cmake/../msg'], 'object_recognition_msgs': ['/opt/ros/hydro/share/object_recognition_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/hydro/share/geometry_msgs/cmake/../msg'], 'object_manipulation_msgs': ['/home/conghui/NTU_Amazon_Picking_Challenge/demo_manipulation/src/supplements/src/object_manipulation_msgs/msg', '/home/conghui/NTU_Amazon_Picking_Challenge/demo_manipulation/src/supplements/devel/share/object_manipulation_msgs/msg'], 'manipulation_msgs': ['/opt/ros/hydro/share/manipulation_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::object_manipulation_msgs::GraspHandPostureExecutionAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::object_manipulation_msgs::GraspHandPostureExecutionAction_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::object_manipulation_msgs::GraspHandPostureExecutionAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::object_manipulation_msgs::GraspHandPostureExecutionAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::object_manipulation_msgs::GraspHandPostureExecutionAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::object_manipulation_msgs::GraspHandPostureExecutionAction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::object_manipulation_msgs::GraspHandPostureExecutionAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ce7f0e50f3ee13e183420cd4d5559794";
  }

  static const char* value(const ::object_manipulation_msgs::GraspHandPostureExecutionAction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xce7f0e50f3ee13e1ULL;
  static const uint64_t static_value2 = 0x83420cd4d5559794ULL;
};

template<class ContainerAllocator>
struct DataType< ::object_manipulation_msgs::GraspHandPostureExecutionAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "object_manipulation_msgs/GraspHandPostureExecutionAction";
  }

  static const char* value(const ::object_manipulation_msgs::GraspHandPostureExecutionAction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::object_manipulation_msgs::GraspHandPostureExecutionAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
GraspHandPostureExecutionActionGoal action_goal\n\
GraspHandPostureExecutionActionResult action_result\n\
GraspHandPostureExecutionActionFeedback action_feedback\n\
\n\
================================================================================\n\
MSG: object_manipulation_msgs/GraspHandPostureExecutionActionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
GraspHandPostureExecutionGoal goal\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: object_manipulation_msgs/GraspHandPostureExecutionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# an action for requesting the finger posture part of grasp be physically carried out by a hand\n\
# the name of the arm being used is not in here, as this will be sent to a specific action server\n\
# for each arm\n\
\n\
# the grasp to be executed\n\
manipulation_msgs/Grasp grasp\n\
\n\
# the goal of this action\n\
# requests that the hand be set in the pre-grasp posture\n\
int32 PRE_GRASP=1\n\
# requests that the hand execute the actual grasp\n\
int32 GRASP=2\n\
# requests that the hand open to release the object\n\
int32 RELEASE=3\n\
int32 goal\n\
\n\
# the max contact force to use (<=0 if no desired max)\n\
float32 max_contact_force\n\
\n\
\n\
================================================================================\n\
MSG: manipulation_msgs/Grasp\n\
# A name for this grasp\n\
string id\n\
\n\
# The internal posture of the hand for the pre-grasp\n\
# only positions are used\n\
sensor_msgs/JointState pre_grasp_posture\n\
\n\
# The internal posture of the hand for the grasp\n\
# positions and efforts are used\n\
sensor_msgs/JointState grasp_posture\n\
\n\
# The position of the end-effector for the grasp \n\
geometry_msgs/PoseStamped grasp_pose\n\
\n\
# The estimated probability of success for this grasp, or some other\n\
# measure of how \"good\" it is.\n\
float64 grasp_quality\n\
\n\
# The approach motion\n\
GripperTranslation approach\n\
\n\
# The retreat motion\n\
GripperTranslation retreat\n\
\n\
# the maximum contact force to use while grasping (<=0 to disable)\n\
float32 max_contact_force\n\
\n\
# an optional list of obstacles that we have semantic information about\n\
# and that can be touched/pushed/moved in the course of grasping\n\
string[] allowed_touch_objects\n\
\n\
================================================================================\n\
MSG: sensor_msgs/JointState\n\
# This is a message that holds data to describe the state of a set of torque controlled joints. \n\
#\n\
# The state of each joint (revolute or prismatic) is defined by:\n\
#  * the position of the joint (rad or m),\n\
#  * the velocity of the joint (rad/s or m/s) and \n\
#  * the effort that is applied in the joint (Nm or N).\n\
#\n\
# Each joint is uniquely identified by its name\n\
# The header specifies the time at which the joint states were recorded. All the joint states\n\
# in one message have to be recorded at the same time.\n\
#\n\
# This message consists of a multiple arrays, one for each part of the joint state. \n\
# The goal is to make each of the fields optional. When e.g. your joints have no\n\
# effort associated with them, you can leave the effort array empty. \n\
#\n\
# All arrays in this message should have the same size, or be empty.\n\
# This is the only way to uniquely associate the joint name with the correct\n\
# states.\n\
\n\
\n\
Header header\n\
\n\
string[] name\n\
float64[] position\n\
float64[] velocity\n\
float64[] effort\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: manipulation_msgs/GripperTranslation\n\
# defines a translation for the gripper, used in pickup or place tasks\n\
# for example for lifting an object off a table or approaching the table for placing\n\
\n\
# the direction of the translation\n\
geometry_msgs/Vector3Stamped direction\n\
\n\
# the desired translation distance\n\
float32 desired_distance\n\
\n\
# the min distance that must be considered feasible before the\n\
# grasp is even attempted\n\
float32 min_distance\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3Stamped\n\
# This represents a Vector3 with reference coordinate frame and timestamp\n\
Header header\n\
Vector3 vector\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: object_manipulation_msgs/GraspHandPostureExecutionActionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
GraspHandPostureExecutionResult result\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalStatus\n\
GoalID goal_id\n\
uint8 status\n\
uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n\
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n\
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n\
                            #   and has since completed its execution (Terminal State)\n\
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n\
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n\
                            #    to some failure (Terminal State)\n\
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n\
                            #    because the goal was unattainable or invalid (Terminal State)\n\
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n\
                            #    and has not yet completed execution\n\
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n\
                            #    but the action server has not yet confirmed that the goal is canceled\n\
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n\
                            #    and was successfully cancelled (Terminal State)\n\
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n\
                            #    sent over the wire by an action server\n\
\n\
#Allow for the user to associate a string with GoalStatus for debugging\n\
string text\n\
\n\
\n\
================================================================================\n\
MSG: object_manipulation_msgs/GraspHandPostureExecutionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# the result of the action\n\
ManipulationResult result\n\
\n\
\n\
================================================================================\n\
MSG: object_manipulation_msgs/ManipulationResult\n\
# Result codes for manipulation tasks\n\
\n\
# task completed as expected\n\
# generally means you can proceed as planned\n\
int32 SUCCESS = 1\n\
\n\
# task not possible (e.g. out of reach or obstacles in the way)\n\
# generally means that the world was not disturbed, so you can try another task\n\
int32 UNFEASIBLE = -1\n\
\n\
# task was thought possible, but failed due to unexpected events during execution\n\
# it is likely that the world was disturbed, so you are encouraged to refresh\n\
# your sensed world model before proceeding to another task\n\
int32 FAILED = -2\n\
\n\
# a lower level error prevented task completion (e.g. joint controller not responding)\n\
# generally requires human attention\n\
int32 ERROR = -3\n\
\n\
# means that at some point during execution we ended up in a state that the collision-aware\n\
# arm navigation module will not move out of. The world was likely not disturbed, but you \n\
# probably need a new collision map to move the arm out of the stuck position\n\
int32 ARM_MOVEMENT_PREVENTED = -4\n\
\n\
# specific to grasp actions\n\
# the object was grasped successfully, but the lift attempt could not achieve the minimum lift distance requested\n\
# it is likely that the collision environment will see collisions between the hand/object and the support surface\n\
int32 LIFT_FAILED = -5\n\
\n\
# specific to place actions\n\
# the object was placed successfully, but the retreat attempt could not achieve the minimum retreat distance requested\n\
# it is likely that the collision environment will see collisions between the hand and the object\n\
int32 RETREAT_FAILED = -6\n\
\n\
# indicates that somewhere along the line a human said \"wait, stop, this is bad, go back and do something else\"\n\
int32 CANCELLED = -7\n\
\n\
# the actual value of this error code\n\
int32 value\n\
\n\
================================================================================\n\
MSG: object_manipulation_msgs/GraspHandPostureExecutionActionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
GraspHandPostureExecutionFeedback feedback\n\
\n\
================================================================================\n\
MSG: object_manipulation_msgs/GraspHandPostureExecutionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# empty for now\n\
\n\
\n\
";
  }

  static const char* value(const ::object_manipulation_msgs::GraspHandPostureExecutionAction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::object_manipulation_msgs::GraspHandPostureExecutionAction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_goal);
      stream.next(m.action_result);
      stream.next(m.action_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct GraspHandPostureExecutionAction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::object_manipulation_msgs::GraspHandPostureExecutionAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::object_manipulation_msgs::GraspHandPostureExecutionAction_<ContainerAllocator>& v)
  {
    s << indent << "action_goal: ";
    s << std::endl;
    Printer< ::object_manipulation_msgs::GraspHandPostureExecutionActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
    s << std::endl;
    Printer< ::object_manipulation_msgs::GraspHandPostureExecutionActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
    s << std::endl;
    Printer< ::object_manipulation_msgs::GraspHandPostureExecutionActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OBJECT_MANIPULATION_MSGS_MESSAGE_GRASPHANDPOSTUREEXECUTIONACTION_H
