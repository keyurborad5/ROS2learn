// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from av_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "av_msgs/msg/detail/vehicle_status__rosidl_typesupport_introspection_c.h"
#include "av_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "av_msgs/msg/detail/vehicle_status__functions.h"
#include "av_msgs/msg/detail/vehicle_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  av_msgs__msg__VehicleStatus__init(message_memory);
}

void VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_fini_function(void * message_memory)
{
  av_msgs__msg__VehicleStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_member_array[3] = {
  {
    "driving_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(av_msgs__msg__VehicleStatus, driving_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(av_msgs__msg__VehicleStatus, current_action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(av_msgs__msg__VehicleStatus, current_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_members = {
  "av_msgs__msg",  // message namespace
  "VehicleStatus",  // message name
  3,  // number of fields
  sizeof(av_msgs__msg__VehicleStatus),
  VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_member_array,  // message members
  VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_type_support_handle = {
  0,
  &VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_av_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, av_msgs, msg, VehicleStatus)() {
  if (!VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_type_support_handle.typesupport_identifier) {
    VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
