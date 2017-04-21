// Generated by gencpp from file ur_msgs/RobotStateRTMsg.msg
// DO NOT EDIT!


#ifndef UR_MSGS_MESSAGE_ROBOTSTATERTMSG_H
#define UR_MSGS_MESSAGE_ROBOTSTATERTMSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ur_msgs
{
template <class ContainerAllocator>
struct RobotStateRTMsg_
{
  typedef RobotStateRTMsg_<ContainerAllocator> Type;

  RobotStateRTMsg_()
    : time(0.0)
    , q_target()
    , qd_target()
    , qdd_target()
    , i_target()
    , m_target()
    , q_actual()
    , qd_actual()
    , i_actual()
    , tool_acc_values()
    , tcp_force()
    , tool_vector()
    , tcp_speed()
    , digital_input_bits(0.0)
    , motor_temperatures()
    , controller_timer(0.0)
    , test_value(0.0)
    , robot_mode(0.0)
    , joint_modes()  {
    }
  RobotStateRTMsg_(const ContainerAllocator& _alloc)
    : time(0.0)
    , q_target(_alloc)
    , qd_target(_alloc)
    , qdd_target(_alloc)
    , i_target(_alloc)
    , m_target(_alloc)
    , q_actual(_alloc)
    , qd_actual(_alloc)
    , i_actual(_alloc)
    , tool_acc_values(_alloc)
    , tcp_force(_alloc)
    , tool_vector(_alloc)
    , tcp_speed(_alloc)
    , digital_input_bits(0.0)
    , motor_temperatures(_alloc)
    , controller_timer(0.0)
    , test_value(0.0)
    , robot_mode(0.0)
    , joint_modes(_alloc)  {
  (void)_alloc;
    }



   typedef double _time_type;
  _time_type time;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _q_target_type;
  _q_target_type q_target;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _qd_target_type;
  _qd_target_type qd_target;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _qdd_target_type;
  _qdd_target_type qdd_target;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _i_target_type;
  _i_target_type i_target;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _m_target_type;
  _m_target_type m_target;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _q_actual_type;
  _q_actual_type q_actual;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _qd_actual_type;
  _qd_actual_type qd_actual;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _i_actual_type;
  _i_actual_type i_actual;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _tool_acc_values_type;
  _tool_acc_values_type tool_acc_values;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _tcp_force_type;
  _tcp_force_type tcp_force;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _tool_vector_type;
  _tool_vector_type tool_vector;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _tcp_speed_type;
  _tcp_speed_type tcp_speed;

   typedef double _digital_input_bits_type;
  _digital_input_bits_type digital_input_bits;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _motor_temperatures_type;
  _motor_temperatures_type motor_temperatures;

   typedef double _controller_timer_type;
  _controller_timer_type controller_timer;

   typedef double _test_value_type;
  _test_value_type test_value;

   typedef double _robot_mode_type;
  _robot_mode_type robot_mode;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _joint_modes_type;
  _joint_modes_type joint_modes;




  typedef boost::shared_ptr< ::ur_msgs::RobotStateRTMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ur_msgs::RobotStateRTMsg_<ContainerAllocator> const> ConstPtr;

}; // struct RobotStateRTMsg_

typedef ::ur_msgs::RobotStateRTMsg_<std::allocator<void> > RobotStateRTMsg;

typedef boost::shared_ptr< ::ur_msgs::RobotStateRTMsg > RobotStateRTMsgPtr;
typedef boost::shared_ptr< ::ur_msgs::RobotStateRTMsg const> RobotStateRTMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ur_msgs::RobotStateRTMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ur_msgs::RobotStateRTMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ur_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'ur_msgs': ['/home/luis/VT2/catkin_ws/src/universal_robot/ur_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ur_msgs::RobotStateRTMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ur_msgs::RobotStateRTMsg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur_msgs::RobotStateRTMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur_msgs::RobotStateRTMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur_msgs::RobotStateRTMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur_msgs::RobotStateRTMsg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ur_msgs::RobotStateRTMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ce6feddd3ccb4ca7dbcd0ff105b603c7";
  }

  static const char* value(const ::ur_msgs::RobotStateRTMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xce6feddd3ccb4ca7ULL;
  static const uint64_t static_value2 = 0xdbcd0ff105b603c7ULL;
};

template<class ContainerAllocator>
struct DataType< ::ur_msgs::RobotStateRTMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ur_msgs/RobotStateRTMsg";
  }

  static const char* value(const ::ur_msgs::RobotStateRTMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ur_msgs::RobotStateRTMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Data structure for the realtime communications interface (aka Matlab interface)\n\
# used by the Universal Robots controller\n\
# \n\
# This data structure is send at 125 Hz on TCP port 30003\n\
# \n\
# Dokumentation can be found on the Universal Robots Support Wiki\n\
# (http://wiki03.lynero.net/Technical/RealTimeClientInterface?rev=9)\n\
\n\
float64 time\n\
float64[] q_target\n\
float64[] qd_target\n\
float64[] qdd_target\n\
float64[] i_target\n\
float64[] m_target\n\
float64[] q_actual\n\
float64[] qd_actual\n\
float64[] i_actual\n\
float64[] tool_acc_values\n\
float64[] tcp_force\n\
float64[] tool_vector\n\
float64[] tcp_speed\n\
float64 digital_input_bits\n\
float64[] motor_temperatures\n\
float64 controller_timer\n\
float64 test_value\n\
float64 robot_mode\n\
float64[] joint_modes\n\
";
  }

  static const char* value(const ::ur_msgs::RobotStateRTMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ur_msgs::RobotStateRTMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.time);
      stream.next(m.q_target);
      stream.next(m.qd_target);
      stream.next(m.qdd_target);
      stream.next(m.i_target);
      stream.next(m.m_target);
      stream.next(m.q_actual);
      stream.next(m.qd_actual);
      stream.next(m.i_actual);
      stream.next(m.tool_acc_values);
      stream.next(m.tcp_force);
      stream.next(m.tool_vector);
      stream.next(m.tcp_speed);
      stream.next(m.digital_input_bits);
      stream.next(m.motor_temperatures);
      stream.next(m.controller_timer);
      stream.next(m.test_value);
      stream.next(m.robot_mode);
      stream.next(m.joint_modes);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RobotStateRTMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ur_msgs::RobotStateRTMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ur_msgs::RobotStateRTMsg_<ContainerAllocator>& v)
  {
    s << indent << "time: ";
    Printer<double>::stream(s, indent + "  ", v.time);
    s << indent << "q_target[]" << std::endl;
    for (size_t i = 0; i < v.q_target.size(); ++i)
    {
      s << indent << "  q_target[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.q_target[i]);
    }
    s << indent << "qd_target[]" << std::endl;
    for (size_t i = 0; i < v.qd_target.size(); ++i)
    {
      s << indent << "  qd_target[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.qd_target[i]);
    }
    s << indent << "qdd_target[]" << std::endl;
    for (size_t i = 0; i < v.qdd_target.size(); ++i)
    {
      s << indent << "  qdd_target[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.qdd_target[i]);
    }
    s << indent << "i_target[]" << std::endl;
    for (size_t i = 0; i < v.i_target.size(); ++i)
    {
      s << indent << "  i_target[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.i_target[i]);
    }
    s << indent << "m_target[]" << std::endl;
    for (size_t i = 0; i < v.m_target.size(); ++i)
    {
      s << indent << "  m_target[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.m_target[i]);
    }
    s << indent << "q_actual[]" << std::endl;
    for (size_t i = 0; i < v.q_actual.size(); ++i)
    {
      s << indent << "  q_actual[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.q_actual[i]);
    }
    s << indent << "qd_actual[]" << std::endl;
    for (size_t i = 0; i < v.qd_actual.size(); ++i)
    {
      s << indent << "  qd_actual[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.qd_actual[i]);
    }
    s << indent << "i_actual[]" << std::endl;
    for (size_t i = 0; i < v.i_actual.size(); ++i)
    {
      s << indent << "  i_actual[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.i_actual[i]);
    }
    s << indent << "tool_acc_values[]" << std::endl;
    for (size_t i = 0; i < v.tool_acc_values.size(); ++i)
    {
      s << indent << "  tool_acc_values[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.tool_acc_values[i]);
    }
    s << indent << "tcp_force[]" << std::endl;
    for (size_t i = 0; i < v.tcp_force.size(); ++i)
    {
      s << indent << "  tcp_force[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.tcp_force[i]);
    }
    s << indent << "tool_vector[]" << std::endl;
    for (size_t i = 0; i < v.tool_vector.size(); ++i)
    {
      s << indent << "  tool_vector[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.tool_vector[i]);
    }
    s << indent << "tcp_speed[]" << std::endl;
    for (size_t i = 0; i < v.tcp_speed.size(); ++i)
    {
      s << indent << "  tcp_speed[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.tcp_speed[i]);
    }
    s << indent << "digital_input_bits: ";
    Printer<double>::stream(s, indent + "  ", v.digital_input_bits);
    s << indent << "motor_temperatures[]" << std::endl;
    for (size_t i = 0; i < v.motor_temperatures.size(); ++i)
    {
      s << indent << "  motor_temperatures[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.motor_temperatures[i]);
    }
    s << indent << "controller_timer: ";
    Printer<double>::stream(s, indent + "  ", v.controller_timer);
    s << indent << "test_value: ";
    Printer<double>::stream(s, indent + "  ", v.test_value);
    s << indent << "robot_mode: ";
    Printer<double>::stream(s, indent + "  ", v.robot_mode);
    s << indent << "joint_modes[]" << std::endl;
    for (size_t i = 0; i < v.joint_modes.size(); ++i)
    {
      s << indent << "  joint_modes[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.joint_modes[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // UR_MSGS_MESSAGE_ROBOTSTATERTMSG_H