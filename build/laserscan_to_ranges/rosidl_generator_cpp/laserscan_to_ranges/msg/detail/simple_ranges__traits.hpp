// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from laserscan_to_ranges:msg/SimpleRanges.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "laserscan_to_ranges/msg/simple_ranges.hpp"


#ifndef LASERSCAN_TO_RANGES__MSG__DETAIL__SIMPLE_RANGES__TRAITS_HPP_
#define LASERSCAN_TO_RANGES__MSG__DETAIL__SIMPLE_RANGES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "laserscan_to_ranges/msg/detail/simple_ranges__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace laserscan_to_ranges
{

namespace msg
{

inline void to_flow_style_yaml(
  const SimpleRanges & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: left
  {
    out << "left: ";
    rosidl_generator_traits::value_to_yaml(msg.left, out);
    out << ", ";
  }

  // member: front
  {
    out << "front: ";
    rosidl_generator_traits::value_to_yaml(msg.front, out);
    out << ", ";
  }

  // member: right
  {
    out << "right: ";
    rosidl_generator_traits::value_to_yaml(msg.right, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SimpleRanges & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left: ";
    rosidl_generator_traits::value_to_yaml(msg.left, out);
    out << "\n";
  }

  // member: front
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front: ";
    rosidl_generator_traits::value_to_yaml(msg.front, out);
    out << "\n";
  }

  // member: right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right: ";
    rosidl_generator_traits::value_to_yaml(msg.right, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimpleRanges & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace laserscan_to_ranges

namespace rosidl_generator_traits
{

[[deprecated("use laserscan_to_ranges::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const laserscan_to_ranges::msg::SimpleRanges & msg,
  std::ostream & out, size_t indentation = 0)
{
  laserscan_to_ranges::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use laserscan_to_ranges::msg::to_yaml() instead")]]
inline std::string to_yaml(const laserscan_to_ranges::msg::SimpleRanges & msg)
{
  return laserscan_to_ranges::msg::to_yaml(msg);
}

template<>
inline const char * data_type<laserscan_to_ranges::msg::SimpleRanges>()
{
  return "laserscan_to_ranges::msg::SimpleRanges";
}

template<>
inline const char * name<laserscan_to_ranges::msg::SimpleRanges>()
{
  return "laserscan_to_ranges/msg/SimpleRanges";
}

template<>
struct has_fixed_size<laserscan_to_ranges::msg::SimpleRanges>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<laserscan_to_ranges::msg::SimpleRanges>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<laserscan_to_ranges::msg::SimpleRanges>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LASERSCAN_TO_RANGES__MSG__DETAIL__SIMPLE_RANGES__TRAITS_HPP_
