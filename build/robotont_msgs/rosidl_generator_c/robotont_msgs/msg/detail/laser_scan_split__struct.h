// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robotont_msgs:msg/LaserScanSplit.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotont_msgs/msg/laser_scan_split.h"


#ifndef ROBOTONT_MSGS__MSG__DETAIL__LASER_SCAN_SPLIT__STRUCT_H_
#define ROBOTONT_MSGS__MSG__DETAIL__LASER_SCAN_SPLIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/LaserScanSplit in the package robotont_msgs.
/**
  * This msg defines a message for dividing laserscan into 3 separate distances
  * It provides mean and minimum values for the three sectors.
 */
typedef struct robotont_msgs__msg__LaserScanSplit
{
  builtin_interfaces__msg__Time stamp;
  double left_min;
  double center_min;
  double right_min;
  double left_mean;
  double center_mean;
  double right_mean;
} robotont_msgs__msg__LaserScanSplit;

// Struct for a sequence of robotont_msgs__msg__LaserScanSplit.
typedef struct robotont_msgs__msg__LaserScanSplit__Sequence
{
  robotont_msgs__msg__LaserScanSplit * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotont_msgs__msg__LaserScanSplit__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTONT_MSGS__MSG__DETAIL__LASER_SCAN_SPLIT__STRUCT_H_
