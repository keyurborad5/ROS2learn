// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from av_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice
#include "av_msgs/msg/detail/vehicle_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "av_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "av_msgs/msg/detail/vehicle_status__struct.h"
#include "av_msgs/msg/detail/vehicle_status__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _VehicleStatus__ros_msg_type = av_msgs__msg__VehicleStatus;

static bool _VehicleStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleStatus__ros_msg_type * ros_message = static_cast<const _VehicleStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: driving_type
  {
    cdr << ros_message->driving_type;
  }

  // Field name: current_action
  {
    cdr << ros_message->current_action;
  }

  // Field name: current_speed
  {
    cdr << ros_message->current_speed;
  }

  return true;
}

static bool _VehicleStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleStatus__ros_msg_type * ros_message = static_cast<_VehicleStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: driving_type
  {
    cdr >> ros_message->driving_type;
  }

  // Field name: current_action
  {
    cdr >> ros_message->current_action;
  }

  // Field name: current_speed
  {
    cdr >> ros_message->current_speed;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_av_msgs
size_t get_serialized_size_av_msgs__msg__VehicleStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleStatus__ros_msg_type * ros_message = static_cast<const _VehicleStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name driving_type
  {
    size_t item_size = sizeof(ros_message->driving_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_action
  {
    size_t item_size = sizeof(ros_message->current_action);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_speed
  {
    size_t item_size = sizeof(ros_message->current_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_av_msgs__msg__VehicleStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_av_msgs
size_t max_serialized_size_av_msgs__msg__VehicleStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: driving_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: current_action
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: current_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _VehicleStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_av_msgs__msg__VehicleStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VehicleStatus = {
  "av_msgs::msg",
  "VehicleStatus",
  _VehicleStatus__cdr_serialize,
  _VehicleStatus__cdr_deserialize,
  _VehicleStatus__get_serialized_size,
  _VehicleStatus__max_serialized_size
};

static rosidl_message_type_support_t _VehicleStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, av_msgs, msg, VehicleStatus)() {
  return &_VehicleStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
