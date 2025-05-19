// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robotont_msgs:msg/ColorRGB.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotont_msgs/msg/color_rgb.h"


#ifndef ROBOTONT_MSGS__MSG__DETAIL__COLOR_RGB__STRUCT_H_
#define ROBOTONT_MSGS__MSG__DETAIL__COLOR_RGB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/ColorRGB in the package robotont_msgs.
/**
  * Red, Green, Blue intensities in range of 0-255.
 */
typedef struct robotont_msgs__msg__ColorRGB
{
  uint8_t r;
  uint8_t g;
  uint8_t b;
} robotont_msgs__msg__ColorRGB;

// Struct for a sequence of robotont_msgs__msg__ColorRGB.
typedef struct robotont_msgs__msg__ColorRGB__Sequence
{
  robotont_msgs__msg__ColorRGB * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotont_msgs__msg__ColorRGB__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTONT_MSGS__MSG__DETAIL__COLOR_RGB__STRUCT_H_
