// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robotont_msgs:msg/LedModuleMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotont_msgs/msg/led_module_mode.hpp"


#ifndef ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_MODE__TRAITS_HPP_
#define ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_MODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robotont_msgs/msg/detail/led_module_mode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robotont_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LedModuleMode & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: params
  {
    if (msg.params.size() == 0) {
      out << "params: []";
    } else {
      out << "params: [";
      size_t pending_items = msg.params.size();
      for (auto item : msg.params) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const LedModuleMode & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.params.size() == 0) {
      out << "params: []\n";
    } else {
      out << "params:\n";
      for (auto item : msg.params) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LedModuleMode & msg, bool use_flow_style = false)
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
  const robotont_msgs::msg::LedModuleMode & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotont_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotont_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robotont_msgs::msg::LedModuleMode & msg)
{
  return robotont_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robotont_msgs::msg::LedModuleMode>()
{
  return "robotont_msgs::msg::LedModuleMode";
}

template<>
inline const char * name<robotont_msgs::msg::LedModuleMode>()
{
  return "robotont_msgs/msg/LedModuleMode";
}

template<>
struct has_fixed_size<robotont_msgs::msg::LedModuleMode>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robotont_msgs::msg::LedModuleMode>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robotont_msgs::msg::LedModuleMode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_MODE__TRAITS_HPP_
