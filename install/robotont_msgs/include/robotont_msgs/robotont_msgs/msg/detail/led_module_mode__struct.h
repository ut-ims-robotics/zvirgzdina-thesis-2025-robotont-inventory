// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robotont_msgs:msg/LedModuleMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotont_msgs/msg/led_module_mode.h"


#ifndef ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_MODE__STRUCT_H_
#define ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'NONE'.
/**
  * Parameters: -
 */
enum
{
  robotont_msgs__msg__LedModuleMode__NONE = 0
};

/// Constant 'SPIN'.
/**
  * Parameters: r, g, b, speed
 */
enum
{
  robotont_msgs__msg__LedModuleMode__SPIN = 1
};

/// Constant 'PULSE'.
/**
  * Parameters: r, g, b, speed
 */
enum
{
  robotont_msgs__msg__LedModuleMode__PULSE = 2
};

/// Constant 'COLORS_SMOOTH'.
/**
  * Parameters: speed
 */
enum
{
  robotont_msgs__msg__LedModuleMode__COLORS_SMOOTH = 3
};

/// Constant 'WHEEL_COLORS'.
/**
  * Parameters: speed
 */
enum
{
  robotont_msgs__msg__LedModuleMode__WHEEL_COLORS = 4
};

/// Constant 'COLORS_RGB'.
/**
  * Parameters: -
 */
enum
{
  robotont_msgs__msg__LedModuleMode__COLORS_RGB = 5
};

/// Constant 'COLORS_SPIN'.
/**
  * Parameters: speed
 */
enum
{
  robotont_msgs__msg__LedModuleMode__COLORS_SPIN = 6
};

/// Constant 'MOTOR_DUTY'.
/**
  * Parameters: -
 */
enum
{
  robotont_msgs__msg__LedModuleMode__MOTOR_DUTY = 7
};

/// Constant 'MOTOR_SPEEDS'.
/**
  * Parameters: -
 */
enum
{
  robotont_msgs__msg__LedModuleMode__MOTOR_SPEEDS = 8
};

/// Constant 'SCAN_RANGES'.
/**
  * Parameters: left, right, front
 */
enum
{
  robotont_msgs__msg__LedModuleMode__SCAN_RANGES = 9
};

// Include directives for member types
// Member 'params'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/LedModuleMode in the package robotont_msgs.
typedef struct robotont_msgs__msg__LedModuleMode
{
  uint8_t mode;
  rosidl_runtime_c__int16__Sequence params;
} robotont_msgs__msg__LedModuleMode;

// Struct for a sequence of robotont_msgs__msg__LedModuleMode.
typedef struct robotont_msgs__msg__LedModuleMode__Sequence
{
  robotont_msgs__msg__LedModuleMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotont_msgs__msg__LedModuleMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_MODE__STRUCT_H_
