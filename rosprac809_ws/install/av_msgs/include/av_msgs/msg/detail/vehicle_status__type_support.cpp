// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from av_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "av_msgs/msg/detail/vehicle_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace av_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void VehicleStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) av_msgs::msg::VehicleStatus(_init);
}

void VehicleStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<av_msgs::msg::VehicleStatus *>(message_memory);
  typed_message->~VehicleStatus();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VehicleStatus_message_member_array[3] = {
  {
    "driving_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(av_msgs::msg::VehicleStatus, driving_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "current_action",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(av_msgs::msg::VehicleStatus, current_action),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "current_speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(av_msgs::msg::VehicleStatus, current_speed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VehicleStatus_message_members = {
  "av_msgs::msg",  // message namespace
  "VehicleStatus",  // message name
  3,  // number of fields
  sizeof(av_msgs::msg::VehicleStatus),
  VehicleStatus_message_member_array,  // message members
  VehicleStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  VehicleStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VehicleStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VehicleStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace av_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<av_msgs::msg::VehicleStatus>()
{
  return &::av_msgs::msg::rosidl_typesupport_introspection_cpp::VehicleStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, av_msgs, msg, VehicleStatus)() {
  return &::av_msgs::msg::rosidl_typesupport_introspection_cpp::VehicleStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
