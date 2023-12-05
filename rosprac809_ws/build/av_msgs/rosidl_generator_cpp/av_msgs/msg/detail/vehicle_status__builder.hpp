// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from av_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef AV_MSGS__MSG__DETAIL__VEHICLE_STATUS__BUILDER_HPP_
#define AV_MSGS__MSG__DETAIL__VEHICLE_STATUS__BUILDER_HPP_

#include "av_msgs/msg/detail/vehicle_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace av_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleStatus_current_speed
{
public:
  explicit Init_VehicleStatus_current_speed(::av_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  ::av_msgs::msg::VehicleStatus current_speed(::av_msgs::msg::VehicleStatus::_current_speed_type arg)
  {
    msg_.current_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::av_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_current_action
{
public:
  explicit Init_VehicleStatus_current_action(::av_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_current_speed current_action(::av_msgs::msg::VehicleStatus::_current_action_type arg)
  {
    msg_.current_action = std::move(arg);
    return Init_VehicleStatus_current_speed(msg_);
  }

private:
  ::av_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_driving_type
{
public:
  Init_VehicleStatus_driving_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleStatus_current_action driving_type(::av_msgs::msg::VehicleStatus::_driving_type_type arg)
  {
    msg_.driving_type = std::move(arg);
    return Init_VehicleStatus_current_action(msg_);
  }

private:
  ::av_msgs::msg::VehicleStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::av_msgs::msg::VehicleStatus>()
{
  return av_msgs::msg::builder::Init_VehicleStatus_driving_type();
}

}  // namespace av_msgs

#endif  // AV_MSGS__MSG__DETAIL__VEHICLE_STATUS__BUILDER_HPP_
