// Generated by gencpp from file realsense2_camera/Extrinsics.msg
// DO NOT EDIT!


#ifndef REALSENSE2_CAMERA_MESSAGE_EXTRINSICS_H
#define REALSENSE2_CAMERA_MESSAGE_EXTRINSICS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace realsense2_camera
{
template <class ContainerAllocator>
struct Extrinsics_
{
  typedef Extrinsics_<ContainerAllocator> Type;

  Extrinsics_()
    : header()
    , rotation()
    , translation()  {
      rotation.assign(0.0);

      translation.assign(0.0);
  }
  Extrinsics_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , rotation()
    , translation()  {
  (void)_alloc;
      rotation.assign(0.0);

      translation.assign(0.0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef boost::array<double, 9>  _rotation_type;
  _rotation_type rotation;

   typedef boost::array<double, 3>  _translation_type;
  _translation_type translation;





  typedef boost::shared_ptr< ::realsense2_camera::Extrinsics_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::realsense2_camera::Extrinsics_<ContainerAllocator> const> ConstPtr;

}; // struct Extrinsics_

typedef ::realsense2_camera::Extrinsics_<std::allocator<void> > Extrinsics;

typedef boost::shared_ptr< ::realsense2_camera::Extrinsics > ExtrinsicsPtr;
typedef boost::shared_ptr< ::realsense2_camera::Extrinsics const> ExtrinsicsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::realsense2_camera::Extrinsics_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::realsense2_camera::Extrinsics_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace realsense2_camera

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'realsense2_camera': ['/home/nvidia/catkin_ws/src/realsense-ros/realsense2_camera/msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::realsense2_camera::Extrinsics_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::realsense2_camera::Extrinsics_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::realsense2_camera::Extrinsics_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::realsense2_camera::Extrinsics_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::realsense2_camera::Extrinsics_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::realsense2_camera::Extrinsics_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::realsense2_camera::Extrinsics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3627b43073f4cd5dd6dc179a49eda2ad";
  }

  static const char* value(const ::realsense2_camera::Extrinsics_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3627b43073f4cd5dULL;
  static const uint64_t static_value2 = 0xd6dc179a49eda2adULL;
};

template<class ContainerAllocator>
struct DataType< ::realsense2_camera::Extrinsics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "realsense2_camera/Extrinsics";
  }

  static const char* value(const ::realsense2_camera::Extrinsics_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::realsense2_camera::Extrinsics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
float64[9] rotation\n\
float64[3] translation\n\
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
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::realsense2_camera::Extrinsics_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::realsense2_camera::Extrinsics_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.rotation);
      stream.next(m.translation);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Extrinsics_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::realsense2_camera::Extrinsics_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::realsense2_camera::Extrinsics_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "rotation[]" << std::endl;
    for (size_t i = 0; i < v.rotation.size(); ++i)
    {
      s << indent << "  rotation[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.rotation[i]);
    }
    s << indent << "translation[]" << std::endl;
    for (size_t i = 0; i < v.translation.size(); ++i)
    {
      s << indent << "  translation[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.translation[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // REALSENSE2_CAMERA_MESSAGE_EXTRINSICS_H
