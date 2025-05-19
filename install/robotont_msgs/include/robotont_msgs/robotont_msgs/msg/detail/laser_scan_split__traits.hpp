// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robotont_msgs:msg/LaserScanSplit.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotont_msgs/msg/laser_scan_split.hpp"


#ifndef ROBOTONT_MSGS__MSG__DETAIL__LASER_SCAN_SPLIT__TRAITS_HPP_
#define ROBOTONT_MSGS__MSG__DETAIL__LASER_SCAN_SPLIT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robotont_msgs/msg/detail/laser_scan_split__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace robotont_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaserScanSplit & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: left_min
  {
    out << "left_min: ";
    rosidl_generator_traits::value_to_yaml(msg.left_min, out);
    out << ", ";
  }

  // member: center_min
  {
    out << "center_min: ";
    rosidl_generator_traits::value_to_yaml(msg.center_min, out);
    out << ", ";
  }

  // member: right_min
  {
    out << "right_min: ";
    rosidl_generator_traits::value_to_yaml(msg.right_min, out);
    out << ", ";
  }

  // member: left_mean
  {
    out << "left_mean: ";
    rosidl_generator_traits::value_to_yaml(msg.left_mean, out);
    out << ", ";
  }

  // member: center_mean
  {
    out << "center_mean: ";
    rosidl_generator_traits::value_to_yaml(msg.center_mean, out);
    out << ", ";
  }

  // member: right_mean
  {
    out << "right_mean: ";
    rosidl_generator_traits::value_to_yaml(msg.right_mean, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaserScanSplit & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: left_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_min: ";
    rosidl_generator_traits::value_to_yaml(msg.left_min, out);
    out << "\n";
  }

  // member: center_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_min: ";
    rosidl_generator_traits::value_to_yaml(msg.center_min, out);
    out << "\n";
  }

  // member: right_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_min: ";
    rosidl_generator_traits::value_to_yaml(msg.right_min, out);
    out << "\n";
  }

  // member: left_mean
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_mean: ";
    rosidl_generator_traits::value_to_yaml(msg.left_mean, out);
    out << "\n";
  }

  // member: center_mean
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_mean: ";
    rosidl_generator_traits::value_to_yaml(msg.center_mean, out);
    out << "\n";
  }

  // member: right_mean
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_mean: ";
    rosidl_generator_traits::value_to_yaml(msg.right_mean, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaserScanSplit & msg, bool use_flow_style = false)
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

}  // namespace robotont_msgs

namespace rosidl_generator_traits
{

[[deprecated("use robotont_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotont_msgs::msg::LaserScanSplit & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotont_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotont_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robotont_msgs::msg::LaserScanSplit & msg)
{
  return robotont_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robotont_msgs::msg::LaserScanSplit>()
{
  return "robotont_msgs::msg::LaserScanSplit";
}

template<>
inline const char * name<robotont_msgs::msg::LaserScanSplit>()
{
  return "robotont_msgs/msg/LaserScanSplit";
}

template<>
struct has_fixed_size<robotont_msgs::msg::LaserScanSplit>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<robotont_msgs::msg::LaserScanSplit>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<robotont_msgs::msg::LaserScanSplit>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOTONT_MSGS__MSG__DETAIL__LASER_SCAN_SPLIT__TRAITS_HPP_
