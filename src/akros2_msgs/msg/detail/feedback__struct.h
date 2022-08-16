// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from akros2_msgs:msg/Feedback.idl
// generated code does not contain a copyright notice

#ifndef AKROS2_MSGS__MSG__DETAIL__FEEDBACK__STRUCT_H_
#define AKROS2_MSGS__MSG__DETAIL__FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'measured'
// Member 'required'
#include "akros2_msgs/msg/detail/velocities__struct.h"

// Struct defined in msg/Feedback in the package akros2_msgs.
typedef struct akros2_msgs__msg__Feedback
{
  std_msgs__msg__Header header;
  akros2_msgs__msg__Velocities measured;
  akros2_msgs__msg__Velocities required;
} akros2_msgs__msg__Feedback;

// Struct for a sequence of akros2_msgs__msg__Feedback.
typedef struct akros2_msgs__msg__Feedback__Sequence
{
  akros2_msgs__msg__Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} akros2_msgs__msg__Feedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AKROS2_MSGS__MSG__DETAIL__FEEDBACK__STRUCT_H_
