// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robotont_msgs:msg/LedModuleSegment.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotont_msgs/msg/led_module_segment.h"


#ifndef ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_SEGMENT__STRUCT_H_
#define ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_SEGMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'colors'
#include "robotont_msgs/msg/detail/color_rgb__struct.h"

/// Struct defined in msg/LedModuleSegment in the package robotont_msgs.
typedef struct robotont_msgs__msg__LedModuleSegment
{
  uint32_t idx_start;
  uint32_t idx_end;
  robotont_msgs__msg__ColorRGB__Sequence colors;
} robotont_msgs__msg__LedModuleSegment;

// Struct for a sequence of robotont_msgs__msg__LedModuleSegment.
typedef struct robotont_msgs__msg__LedModuleSegment__Sequence
{
  robotont_msgs__msg__LedModuleSegment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotont_msgs__msg__LedModuleSegment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_SEGMENT__STRUCT_H_
