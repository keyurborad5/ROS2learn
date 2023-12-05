// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from av_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef AV_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_H_
#define AV_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'AUTONOMOUS'.
enum
{
  av_msgs__msg__VehicleStatus__AUTONOMOUS = 0
};

/// Constant 'MANUAL'.
enum
{
  av_msgs__msg__VehicleStatus__MANUAL = 1
};

/// Constant 'MOVING'.
enum
{
  av_msgs__msg__VehicleStatus__MOVING = 0
};

/// Constant 'STOPPED'.
enum
{
  av_msgs__msg__VehicleStatus__STOPPED = 1
};

// Struct defined in msg/VehicleStatus in the package av_msgs.
typedef struct av_msgs__msg__VehicleStatus
{
  uint8_t driving_type;
  uint8_t current_action;
  double current_speed;
} av_msgs__msg__VehicleStatus;

// Struct for a sequence of av_msgs__msg__VehicleStatus.
typedef struct av_msgs__msg__VehicleStatus__Sequence
{
  av_msgs__msg__VehicleStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} av_msgs__msg__VehicleStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AV_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_H_
