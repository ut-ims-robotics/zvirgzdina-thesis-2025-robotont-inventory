// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from laserscan_to_ranges:msg/SimpleRanges.idl
// generated code does not contain a copyright notice

#ifndef LASERSCAN_TO_RANGES__MSG__DETAIL__SIMPLE_RANGES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define LASERSCAN_TO_RANGES__MSG__DETAIL__SIMPLE_RANGES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "laserscan_to_ranges/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "laserscan_to_ranges/msg/detail/simple_ranges__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace laserscan_to_ranges
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_laserscan_to_ranges
cdr_serialize(
  const laserscan_to_ranges::msg::SimpleRanges & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_laserscan_to_ranges
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  laserscan_to_ranges::msg::SimpleRanges & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_laserscan_to_ranges
get_serialized_size(
  const laserscan_to_ranges::msg::SimpleRanges & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_laserscan_to_ranges
max_serialized_size_SimpleRanges(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_laserscan_to_ranges
cdr_serialize_key(
  const laserscan_to_ranges::msg::SimpleRanges & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_laserscan_to_ranges
get_serialized_size_key(
  const laserscan_to_ranges::msg::SimpleRanges & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_laserscan_to_ranges
max_serialized_size_key_SimpleRanges(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace laserscan_to_ranges

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_laserscan_to_ranges
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, laserscan_to_ranges, msg, SimpleRanges)();

#ifdef __cplusplus
}
#endif

#endif  // LASERSCAN_TO_RANGES__MSG__DETAIL__SIMPLE_RANGES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
