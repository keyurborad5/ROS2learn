// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from av_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice
#include "av_msgs/msg/detail/vehicle_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
av_msgs__msg__VehicleStatus__init(av_msgs__msg__VehicleStatus * msg)
{
  if (!msg) {
    return false;
  }
  // driving_type
  // current_action
  // current_speed
  return true;
}

void
av_msgs__msg__VehicleStatus__fini(av_msgs__msg__VehicleStatus * msg)
{
  if (!msg) {
    return;
  }
  // driving_type
  // current_action
  // current_speed
}

bool
av_msgs__msg__VehicleStatus__are_equal(const av_msgs__msg__VehicleStatus * lhs, const av_msgs__msg__VehicleStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // driving_type
  if (lhs->driving_type != rhs->driving_type) {
    return false;
  }
  // current_action
  if (lhs->current_action != rhs->current_action) {
    return false;
  }
  // current_speed
  if (lhs->current_speed != rhs->current_speed) {
    return false;
  }
  return true;
}

bool
av_msgs__msg__VehicleStatus__copy(
  const av_msgs__msg__VehicleStatus * input,
  av_msgs__msg__VehicleStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // driving_type
  output->driving_type = input->driving_type;
  // current_action
  output->current_action = input->current_action;
  // current_speed
  output->current_speed = input->current_speed;
  return true;
}

av_msgs__msg__VehicleStatus *
av_msgs__msg__VehicleStatus__create()
{
  av_msgs__msg__VehicleStatus * msg = (av_msgs__msg__VehicleStatus *)malloc(sizeof(av_msgs__msg__VehicleStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(av_msgs__msg__VehicleStatus));
  bool success = av_msgs__msg__VehicleStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
av_msgs__msg__VehicleStatus__destroy(av_msgs__msg__VehicleStatus * msg)
{
  if (msg) {
    av_msgs__msg__VehicleStatus__fini(msg);
  }
  free(msg);
}


bool
av_msgs__msg__VehicleStatus__Sequence__init(av_msgs__msg__VehicleStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  av_msgs__msg__VehicleStatus * data = NULL;
  if (size) {
    data = (av_msgs__msg__VehicleStatus *)calloc(size, sizeof(av_msgs__msg__VehicleStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = av_msgs__msg__VehicleStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        av_msgs__msg__VehicleStatus__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
av_msgs__msg__VehicleStatus__Sequence__fini(av_msgs__msg__VehicleStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      av_msgs__msg__VehicleStatus__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

av_msgs__msg__VehicleStatus__Sequence *
av_msgs__msg__VehicleStatus__Sequence__create(size_t size)
{
  av_msgs__msg__VehicleStatus__Sequence * array = (av_msgs__msg__VehicleStatus__Sequence *)malloc(sizeof(av_msgs__msg__VehicleStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = av_msgs__msg__VehicleStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
av_msgs__msg__VehicleStatus__Sequence__destroy(av_msgs__msg__VehicleStatus__Sequence * array)
{
  if (array) {
    av_msgs__msg__VehicleStatus__Sequence__fini(array);
  }
  free(array);
}

bool
av_msgs__msg__VehicleStatus__Sequence__are_equal(const av_msgs__msg__VehicleStatus__Sequence * lhs, const av_msgs__msg__VehicleStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!av_msgs__msg__VehicleStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
av_msgs__msg__VehicleStatus__Sequence__copy(
  const av_msgs__msg__VehicleStatus__Sequence * input,
  av_msgs__msg__VehicleStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(av_msgs__msg__VehicleStatus);
    av_msgs__msg__VehicleStatus * data =
      (av_msgs__msg__VehicleStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!av_msgs__msg__VehicleStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          av_msgs__msg__VehicleStatus__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!av_msgs__msg__VehicleStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
