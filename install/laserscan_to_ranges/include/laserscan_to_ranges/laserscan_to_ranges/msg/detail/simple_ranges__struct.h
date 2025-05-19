// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from laserscan_to_ranges:msg/SimpleRanges.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "laserscan_to_ranges/msg/simple_ranges.h"


#ifndef LASERSCAN_TO_RANGES__MSG__DETAIL__SIMPLE_RANGES__STRUCT_H_
#define LASERSCAN_TO_RANGES__MSG__DETAIL__SIMPLE_RANGES__STRUCT_H_

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

/// Struct defined in msg/SimpleRanges in the package laserscan_to_ranges.
/**
  * This msg defines a message for dividing laserscan into 3 separate ranges: left, front, and right
 */
typedef struct laserscan_to_ranges__msg__SimpleRanges
{
  std_msgs__msg__Header header;
  double left;
  double front;
  double right;
} laserscan_to_ranges__msg__SimpleRanges;

// Struct for a sequence of laserscan_to_ranges__msg__SimpleRanges.
typedef struct laserscan_to_ranges__msg__SimpleRanges__Sequence
{
  laserscan_to_ranges__msg__SimpleRanges * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} laserscan_to_ranges__msg__SimpleRanges__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LASERSCAN_TO_RANGES__MSG__DETAIL__SIMPLE_RANGES__STRUCT_H_
