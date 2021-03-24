// Generated by gencpp from file open_manipulator_msgs/SetDrawingTrajectoryRequest.msg
// DO NOT EDIT!


#ifndef OPEN_MANIPULATOR_MSGS_MESSAGE_SETDRAWINGTRAJECTORYREQUEST_H
#define OPEN_MANIPULATOR_MSGS_MESSAGE_SETDRAWINGTRAJECTORYREQUEST_H


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
struct SetDrawingTrajectoryRequest_
{
  typedef SetDrawingTrajectoryRequest_<ContainerAllocator> Type;

  SetDrawingTrajectoryRequest_()
    : end_effector_name()
    , drawing_trajectory_name()
    , param()
    , path_time(0.0)  {
    }
  SetDrawingTrajectoryRequest_(const ContainerAllocator& _alloc)
    : end_effector_name(_alloc)
    , drawing_trajectory_name(_alloc)
    , param(_alloc)
    , path_time(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _end_effector_name_type;
  _end_effector_name_type end_effector_name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _drawing_trajectory_name_type;
  _drawing_trajectory_name_type drawing_trajectory_name;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _param_type;
  _param_type param;

   typedef double _path_time_type;
  _path_time_type path_time;





  typedef boost::shared_ptr< ::open_manipulator_msgs::SetDrawingTrajectoryRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::open_manipulator_msgs::SetDrawingTrajectoryRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetDrawingTrajectoryRequest_

typedef ::open_manipulator_msgs::SetDrawingTrajectoryRequest_<std::allocator<void> > SetDrawingTrajectoryRequest;

typedef boost::shared_ptr< ::open_manipulator_msgs::SetDrawingTrajectoryRequest > SetDrawingTrajectoryRequestPtr;
typedef boost::shared_ptr< ::open_manipulator_msgs::SetDrawingTrajectoryRequest const> SetDrawingTrajectoryRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::open_manipulator_msgs::SetDrawingTrajectoryRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::open_manipulator_msgs::SetDrawingTrajectoryRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace open_manipulator_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'open_manipulator_msgs': ['/mnt/catkin_ws/src/open_manipulator_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::open_manipulator_msgs::SetDrawingTrajectoryRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::open_manipulator_msgs::SetDrawingTrajectoryRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::open_manipulator_msgs::SetDrawingTrajectoryRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::open_manipulator_msgs::SetDrawingTrajectoryRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::open_manipulator_msgs::SetDrawingTrajectoryRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::open_manipulator_msgs::SetDrawingTrajectoryRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::open_manipulator_msgs::SetDrawingTrajectoryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5b1621cd6a6a57a64c9ee8bfb64e3d14";
  }

  static const char* value(const ::open_manipulator_msgs::SetDrawingTrajectoryRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5b1621cd6a6a57a6ULL;
  static const uint64_t static_value2 = 0x4c9ee8bfb64e3d14ULL;
};

template<class ContainerAllocator>
struct DataType< ::open_manipulator_msgs::SetDrawingTrajectoryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "open_manipulator_msgs/SetDrawingTrajectoryRequest";
  }

  static const char* value(const ::open_manipulator_msgs::SetDrawingTrajectoryRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::open_manipulator_msgs::SetDrawingTrajectoryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string end_effector_name\n\
string drawing_trajectory_name\n\
float64[] param\n\
float64 path_time\n\
";
  }

  static const char* value(const ::open_manipulator_msgs::SetDrawingTrajectoryRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::open_manipulator_msgs::SetDrawingTrajectoryRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.end_effector_name);
      stream.next(m.drawing_trajectory_name);
      stream.next(m.param);
      stream.next(m.path_time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetDrawingTrajectoryRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::open_manipulator_msgs::SetDrawingTrajectoryRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::open_manipulator_msgs::SetDrawingTrajectoryRequest_<ContainerAllocator>& v)
  {
    s << indent << "end_effector_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.end_effector_name);
    s << indent << "drawing_trajectory_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.drawing_trajectory_name);
    s << indent << "param[]" << std::endl;
    for (size_t i = 0; i < v.param.size(); ++i)
    {
      s << indent << "  param[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.param[i]);
    }
    s << indent << "path_time: ";
    Printer<double>::stream(s, indent + "  ", v.path_time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OPEN_MANIPULATOR_MSGS_MESSAGE_SETDRAWINGTRAJECTORYREQUEST_H
