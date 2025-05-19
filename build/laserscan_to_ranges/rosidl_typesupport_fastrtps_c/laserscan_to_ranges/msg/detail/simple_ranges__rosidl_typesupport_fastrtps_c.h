// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from laserscan_to_ranges:msg/SimpleRanges.idl
// generated code does not contain a copyright notice
#ifndef LASERSCAN_TO_RANGES__MSG__DETAIL__SIMPLE_RANGES__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define LASERSCAN_TO_RANGES__MSG__DETAIL__SIMPLE_RANGES__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "laserscan_to_ranges/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "laserscan_to_ranges/msg/detail/simple_ranges__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_laserscan_to_ranges
bool cdr_serialize_laserscan_to_ranges__msg__SimpleRanges(
  const laserscan_to_ranges__msg__SimpleRanges * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_laserscan_to_ranges
bool cdr_deserialize_laserscan_to_ranges__msg__SimpleRanges(
  eprosima::fastcdr::Cdr &,
  laserscan_to_ranges__msg__SimpleRanges * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_laserscan_to_ranges
size_t get_serialized_size_laserscan_to_ranges__msg__SimpleRanges(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_laserscan_to_ranges
size_t max_serialized_size_laserscan_to_ranges__msg__SimpleRanges(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_laserscan_to_ranges
bool cdr_serialize_key_laserscan_to_ranges__msg__SimpleRanges(
  const laserscan_to_ranges__msg__SimpleRanges * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_laserscan_to_ranges
size_t get_serialized_size_key_laserscan_to_ranges__msg__SimpleRanges(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_laserscan_to_ranges
size_t max_serialized_size_key_laserscan_to_ranges__msg__SimpleRanges(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_laserscan_to_ranges
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, laserscan_to_ranges, msg, SimpleRanges)();

#ifdef __cplusplus
}
#endif

#endif  // LASERSCAN_TO_RANGES__MSG__DETAIL__SIMPLE_RANGES__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
