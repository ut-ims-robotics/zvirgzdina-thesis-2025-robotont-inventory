// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robotont_msgs:msg/LedModulePixel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotont_msgs/msg/led_module_pixel.hpp"


#ifndef ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_PIXEL__TRAITS_HPP_
#define ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_PIXEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robotont_msgs/msg/detail/led_module_pixel__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'color'
#include "robotont_msgs/msg/detail/color_rgb__traits.hpp"

namespace robotont_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LedModulePixel & msg,
  std::ostream & out)
{
  out << "{";
  // member: idx
  {
    out << "idx: ";
    rosidl_generator_traits::value_to_yaml(msg.idx, out);
    out << ", ";
  }

  // member: color
  {
    out << "color: ";
    to_flow_style_yaml(msg.color, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LedModulePixel & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "idx: ";
    rosidl_generator_traits::value_to_yaml(msg.idx, out);
    out << "\n";
  }

  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color:\n";
    to_block_style_yaml(msg.color, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LedModulePixel & msg, bool use_flow_style = false)
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
  const robotont_msgs::msg::LedModulePixel & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotont_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotont_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robotont_msgs::msg::LedModulePixel & msg)
{
  return robotont_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robotont_msgs::msg::LedModulePixel>()
{
  return "robotont_msgs::msg::LedModulePixel";
}

template<>
inline const char * name<robotont_msgs::msg::LedModulePixel>()
{
  return "robotont_msgs/msg/LedModulePixel";
}

template<>
struct has_fixed_size<robotont_msgs::msg::LedModulePixel>
  : std::integral_constant<bool, has_fixed_size<robotont_msgs::msg::ColorRGB>::value> {};

template<>
struct has_bounded_size<robotont_msgs::msg::LedModulePixel>
  : std::integral_constant<bool, has_bounded_size<robotont_msgs::msg::ColorRGB>::value> {};

template<>
struct is_message<robotont_msgs::msg::LedModulePixel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_PIXEL__TRAITS_HPP_
