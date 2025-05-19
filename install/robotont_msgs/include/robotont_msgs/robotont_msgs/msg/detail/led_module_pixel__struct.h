// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robotont_msgs:msg/LedModulePixel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotont_msgs/msg/led_module_pixel.h"


#ifndef ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_PIXEL__STRUCT_H_
#define ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_PIXEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'color'
#include "robotont_msgs/msg/detail/color_rgb__struct.h"

/// Struct defined in msg/LedModulePixel in the package robotont_msgs.
typedef struct robotont_msgs__msg__LedModulePixel
{
  uint32_t idx;
  robotont_msgs__msg__ColorRGB color;
} robotont_msgs__msg__LedModulePixel;

// Struct for a sequence of robotont_msgs__msg__LedModulePixel.
typedef struct robotont_msgs__msg__LedModulePixel__Sequence
{
  robotont_msgs__msg__LedModulePixel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotont_msgs__msg__LedModulePixel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_PIXEL__STRUCT_H_
