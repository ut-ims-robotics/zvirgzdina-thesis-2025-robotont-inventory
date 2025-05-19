// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robotont_msgs:msg/PowerSupply.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotont_msgs/msg/power_supply.hpp"


#ifndef ROBOTONT_MSGS__MSG__DETAIL__POWER_SUPPLY__TRAITS_HPP_
#define ROBOTONT_MSGS__MSG__DETAIL__POWER_SUPPLY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robotont_msgs/msg/detail/power_supply__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robotont_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PowerSupply & msg,
  std::ostream & out)
{
  out << "{";
  // member: current
  {
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << ", ";
  }

  // member: voltage
  {
    out << "voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage, out);
    out << ", ";
  }

  // member: estop_pressed
  {
    out << "estop_pressed: ";
    rosidl_generator_traits::value_to_yaml(msg.estop_pressed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PowerSupply & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << "\n";
  }

  // member: voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage, out);
    out << "\n";
  }

  // member: estop_pressed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estop_pressed: ";
    rosidl_generator_traits::value_to_yaml(msg.estop_pressed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PowerSupply & msg, bool use_flow_style = false)
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
  const robotont_msgs::msg::PowerSupply & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotont_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotont_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robotont_msgs::msg::PowerSupply & msg)
{
  return robotont_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robotont_msgs::msg::PowerSupply>()
{
  return "robotont_msgs::msg::PowerSupply";
}

template<>
inline const char * name<robotont_msgs::msg::PowerSupply>()
{
  return "robotont_msgs/msg/PowerSupply";
}

template<>
struct has_fixed_size<robotont_msgs::msg::PowerSupply>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robotont_msgs::msg::PowerSupply>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robotont_msgs::msg::PowerSupply>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOTONT_MSGS__MSG__DETAIL__POWER_SUPPLY__TRAITS_HPP_
