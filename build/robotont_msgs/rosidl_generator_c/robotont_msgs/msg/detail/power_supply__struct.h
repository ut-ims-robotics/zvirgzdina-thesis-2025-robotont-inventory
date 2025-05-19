// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robotont_msgs:msg/PowerSupply.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotont_msgs/msg/power_supply.h"


#ifndef ROBOTONT_MSGS__MSG__DETAIL__POWER_SUPPLY__STRUCT_H_
#define ROBOTONT_MSGS__MSG__DETAIL__POWER_SUPPLY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/PowerSupply in the package robotont_msgs.
/**
  * Measured current consumption 
 */
typedef struct robotont_msgs__msg__PowerSupply
{
  float current;
  /// Measured voltage level of the battery
  float voltage;
  /// Indicates whether e-stop button is pressed or not
  bool estop_pressed;
} robotont_msgs__msg__PowerSupply;

// Struct for a sequence of robotont_msgs__msg__PowerSupply.
typedef struct robotont_msgs__msg__PowerSupply__Sequence
{
  robotont_msgs__msg__PowerSupply * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotont_msgs__msg__PowerSupply__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTONT_MSGS__MSG__DETAIL__POWER_SUPPLY__STRUCT_H_
