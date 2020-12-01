// Generated by gencpp from file open_manipulator_msgs/GetJointPositionRequest.msg
// DO NOT EDIT!


#ifndef OPEN_MANIPULATOR_MSGS_MESSAGE_GETJOINTPOSITIONREQUEST_H
#define OPEN_MANIPULATOR_MSGS_MESSAGE_GETJOINTPOSITIONREQUEST_H


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
struct GetJointPositionRequest_
{
  typedef GetJointPositionRequest_<ContainerAllocator> Type;

  GetJointPositionRequest_()
    : planning_group()  {
    }
  GetJointPositionRequest_(const ContainerAllocator& _alloc)
    : planning_group(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _planning_group_type;
  _planning_group_type planning_group;





  typedef boost::shared_ptr< ::open_manipulator_msgs::GetJointPositionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::open_manipulator_msgs::GetJointPositionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetJointPositionRequest_

typedef ::open_manipulator_msgs::GetJointPositionRequest_<std::allocator<void> > GetJointPositionRequest;

typedef boost::shared_ptr< ::open_manipulator_msgs::GetJointPositionRequest > GetJointPositionRequestPtr;
typedef boost::shared_ptr< ::open_manipulator_msgs::GetJointPositionRequest const> GetJointPositionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::open_manipulator_msgs::GetJointPositionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::open_manipulator_msgs::GetJointPositionRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::open_manipulator_msgs::GetJointPositionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::open_manipulator_msgs::GetJointPositionRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::open_manipulator_msgs::GetJointPositionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::open_manipulator_msgs::GetJointPositionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::open_manipulator_msgs::GetJointPositionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::open_manipulator_msgs::GetJointPositionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::open_manipulator_msgs::GetJointPositionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6b02e06b167eb20b51185dc7d0b638aa";
  }

  static const char* value(const ::open_manipulator_msgs::GetJointPositionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6b02e06b167eb20bULL;
  static const uint64_t static_value2 = 0x51185dc7d0b638aaULL;
};

template<class ContainerAllocator>
struct DataType< ::open_manipulator_msgs::GetJointPositionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "open_manipulator_msgs/GetJointPositionRequest";
  }

  static const char* value(const ::open_manipulator_msgs::GetJointPositionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::open_manipulator_msgs::GetJointPositionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string planning_group\n\
";
  }

  static const char* value(const ::open_manipulator_msgs::GetJointPositionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::open_manipulator_msgs::GetJointPositionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.planning_group);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetJointPositionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::open_manipulator_msgs::GetJointPositionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::open_manipulator_msgs::GetJointPositionRequest_<ContainerAllocator>& v)
  {
    s << indent << "planning_group: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.planning_group);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OPEN_MANIPULATOR_MSGS_MESSAGE_GETJOINTPOSITIONREQUEST_H
