// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robotont_msgs:msg/LedModuleSegment.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotont_msgs/msg/led_module_segment.hpp"


#ifndef ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_SEGMENT__TRAITS_HPP_
#define ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_SEGMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robotont_msgs/msg/detail/led_module_segment__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'colors'
#include "robotont_msgs/msg/detail/color_rgb__traits.hpp"

namespace robotont_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LedModuleSegment & msg,
  std::ostream & out)
{
  out << "{";
  // member: idx_start
  {
    out << "idx_start: ";
    rosidl_generator_traits::value_to_yaml(msg.idx_start, out);
    out << ", ";
  }

  // member: idx_end
  {
    out << "idx_end: ";
    rosidl_generator_traits::value_to_yaml(msg.idx_end, out);
    out << ", ";
  }

  // member: colors
  {
    if (msg.colors.size() == 0) {
      out << "colors: []";
    } else {
      out << "colors: [";
      size_t pending_items = msg.colors.size();
      for (auto item : msg.colors) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LedModuleSegment & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: idx_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "idx_start: ";
    rosidl_generator_traits::value_to_yaml(msg.idx_start, out);
    out << "\n";
  }

  // member: idx_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "idx_end: ";
    rosidl_generator_traits::value_to_yaml(msg.idx_end, out);
    out << "\n";
  }

  // member: colors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.colors.size() == 0) {
      out << "colors: []\n";
    } else {
      out << "colors:\n";
      for (auto item : msg.colors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LedModuleSegment & msg, bool use_flow_style = false)
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
  const robotont_msgs::msg::LedModuleSegment & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotont_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotont_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robotont_msgs::msg::LedModuleSegment & msg)
{
  return robotont_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robotont_msgs::msg::LedModuleSegment>()
{
  return "robotont_msgs::msg::LedModuleSegment";
}

template<>
inline const char * name<robotont_msgs::msg::LedModuleSegment>()
{
  return "robotont_msgs/msg/LedModuleSegment";
}

template<>
struct has_fixed_size<robotont_msgs::msg::LedModuleSegment>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robotont_msgs::msg::LedModuleSegment>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robotont_msgs::msg::LedModuleSegment>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_SEGMENT__TRAITS_HPP_
