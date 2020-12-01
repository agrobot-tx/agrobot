// Generated by gencpp from file open_manipulator_msgs/SetDrawingTrajectory.msg
// DO NOT EDIT!


#ifndef OPEN_MANIPULATOR_MSGS_MESSAGE_SETDRAWINGTRAJECTORY_H
#define OPEN_MANIPULATOR_MSGS_MESSAGE_SETDRAWINGTRAJECTORY_H

#include <ros/service_traits.h>


#include <open_manipulator_msgs/SetDrawingTrajectoryRequest.h>
#include <open_manipulator_msgs/SetDrawingTrajectoryResponse.h>


namespace open_manipulator_msgs
{

struct SetDrawingTrajectory
{

typedef SetDrawingTrajectoryRequest Request;
typedef SetDrawingTrajectoryResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetDrawingTrajectory
} // namespace open_manipulator_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::open_manipulator_msgs::SetDrawingTrajectory > {
  static const char* value()
  {
    return "89315cba5d7bbfff59192e9c2e5907e7";
  }

  static const char* value(const ::open_manipulator_msgs::SetDrawingTrajectory&) { return value(); }
};

template<>
struct DataType< ::open_manipulator_msgs::SetDrawingTrajectory > {
  static const char* value()
  {
    return "open_manipulator_msgs/SetDrawingTrajectory";
  }

  static const char* value(const ::open_manipulator_msgs::SetDrawingTrajectory&) { return value(); }
};


// service_traits::MD5Sum< ::open_manipulator_msgs::SetDrawingTrajectoryRequest> should match 
// service_traits::MD5Sum< ::open_manipulator_msgs::SetDrawingTrajectory > 
template<>
struct MD5Sum< ::open_manipulator_msgs::SetDrawingTrajectoryRequest>
{
  static const char* value()
  {
    return MD5Sum< ::open_manipulator_msgs::SetDrawingTrajectory >::value();
  }
  static const char* value(const ::open_manipulator_msgs::SetDrawingTrajectoryRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::open_manipulator_msgs::SetDrawingTrajectoryRequest> should match 
// service_traits::DataType< ::open_manipulator_msgs::SetDrawingTrajectory > 
template<>
struct DataType< ::open_manipulator_msgs::SetDrawingTrajectoryRequest>
{
  static const char* value()
  {
    return DataType< ::open_manipulator_msgs::SetDrawingTrajectory >::value();
  }
  static const char* value(const ::open_manipulator_msgs::SetDrawingTrajectoryRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::open_manipulator_msgs::SetDrawingTrajectoryResponse> should match 
// service_traits::MD5Sum< ::open_manipulator_msgs::SetDrawingTrajectory > 
template<>
struct MD5Sum< ::open_manipulator_msgs::SetDrawingTrajectoryResponse>
{
  static const char* value()
  {
    return MD5Sum< ::open_manipulator_msgs::SetDrawingTrajectory >::value();
  }
  static const char* value(const ::open_manipulator_msgs::SetDrawingTrajectoryResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::open_manipulator_msgs::SetDrawingTrajectoryResponse> should match 
// service_traits::DataType< ::open_manipulator_msgs::SetDrawingTrajectory > 
template<>
struct DataType< ::open_manipulator_msgs::SetDrawingTrajectoryResponse>
{
  static const char* value()
  {
    return DataType< ::open_manipulator_msgs::SetDrawingTrajectory >::value();
  }
  static const char* value(const ::open_manipulator_msgs::SetDrawingTrajectoryResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // OPEN_MANIPULATOR_MSGS_MESSAGE_SETDRAWINGTRAJECTORY_H
