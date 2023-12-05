// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from av_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef AV_MSGS__MSG__DETAIL__VEHICLE_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define AV_MSGS__MSG__DETAIL__VEHICLE_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "av_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "av_msgs/msg/detail/vehicle_status__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace av_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_av_msgs
cdr_serialize(
  const av_msgs::msg::VehicleStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_av_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  av_msgs::msg::VehicleStatus & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_av_msgs
get_serialized_size(
  const av_msgs::msg::VehicleStatus & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_av_msgs
max_serialized_size_VehicleStatus(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace av_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_av_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, av_msgs, msg, VehicleStatus)();

#ifdef __cplusplus
}
#endif

#endif  // AV_MSGS__MSG__DETAIL__VEHICLE_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
