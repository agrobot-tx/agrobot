// Generated by gencpp from file open_manipulator_msgs/JointPosition.msg
// DO NOT EDIT!


#ifndef OPEN_MANIPULATOR_MSGS_MESSAGE_JOINTPOSITION_H
#define OPEN_MANIPULATOR_MSGS_MESSAGE_JOINTPOSITION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace open_manipulator_msgs
{
template <class ContainerAllocator>
struct JointPosition_
{
  typedef JointPosition_<ContainerAllocator> Type;

  JointPosition_()
    : joint_name()
    , position()
    , max_accelerations_scaling_factor(0.0)
    , max_velocity_scaling_factor(0.0)  {
    }
  JointPosition_(const ContainerAllocator& _alloc)
    : joint_name(_alloc)
    , position(_alloc)
    , max_accelerations_scaling_factor(0.0)
    , max_velocity_scaling_factor(0.0)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _joint_name_type;
  _joint_name_type joint_name;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _position_type;
  _position_type position;

   typedef double _max_accelerations_scaling_factor_type;
  _max_accelerations_scaling_factor_type max_accelerations_scaling_factor;

   typedef double _max_velocity_scaling_factor_type;
  _max_velocity_scaling_factor_type max_velocity_scaling_factor;





  typedef boost::shared_ptr< ::open_manipulator_msgs::JointPosition_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::open_manipulator_msgs::JointPosition_<ContainerAllocator> const> ConstPtr;

}; // struct JointPosition_

typedef ::open_manipulator_msgs::JointPosition_<std::allocator<void> > JointPosition;

typedef boost::shared_ptr< ::open_manipulator_msgs::JointPosition > JointPositionPtr;
typedef boost::shared_ptr< ::open_manipulator_msgs::JointPosition const> JointPositionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::open_manipulator_msgs::JointPosition_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::open_manipulator_msgs::JointPosition_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace open_manipulator_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'open_manipulator_msgs': ['/home/nvidia/catkin_ws/src/open_manipulator_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::open_manipulator_msgs::JointPosition_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::open_manipulator_msgs::JointPosition_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::open_manipulator_msgs::JointPosition_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::open_manipulator_msgs::JointPosition_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::open_manipulator_msgs::JointPosition_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::open_manipulator_msgs::JointPosition_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::open_manipulator_msgs::JointPosition_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b6b6bc3417b5da955b766eb41a6c1698";
  }

  static const char* value(const ::open_manipulator_msgs::JointPosition_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb6b6bc3417b5da95ULL;
  static const uint64_t static_value2 = 0x5b766eb41a6c1698ULL;
};

template<class ContainerAllocator>
struct DataType< ::open_manipulator_msgs::JointPosition_<ContainerAllocator> >
{
  static const char* value()
  {
    return "open_manipulator_msgs/JointPosition";
  }

  static const char* value(const ::open_manipulator_msgs::JointPosition_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::open_manipulator_msgs::JointPosition_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[]   joint_name\n\
float64[]  position\n\
float64    max_accelerations_scaling_factor\n\
float64    max_velocity_scaling_factor\n\
";
  }

  static const char* value(const ::open_manipulator_msgs::JointPosition_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::open_manipulator_msgs::JointPosition_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint_name);
      stream.next(m.position);
      stream.next(m.max_accelerations_scaling_factor);
      stream.next(m.max_velocity_scaling_factor);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointPosition_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::open_manipulator_msgs::JointPosition_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::open_manipulator_msgs::JointPosition_<ContainerAllocator>& v)
  {
    s << indent << "joint_name[]" << std::endl;
    for (size_t i = 0; i < v.joint_name.size(); ++i)
    {
      s << indent << "  joint_name[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.joint_name[i]);
    }
    s << indent << "position[]" << std::endl;
    for (size_t i = 0; i < v.position.size(); ++i)
    {
      s << indent << "  position[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.position[i]);
    }
    s << indent << "max_accelerations_scaling_factor: ";
    Printer<double>::stream(s, indent + "  ", v.max_accelerations_scaling_factor);
    s << indent << "max_velocity_scaling_factor: ";
    Printer<double>::stream(s, indent + "  ", v.max_velocity_scaling_factor);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OPEN_MANIPULATOR_MSGS_MESSAGE_JOINTPOSITION_H
