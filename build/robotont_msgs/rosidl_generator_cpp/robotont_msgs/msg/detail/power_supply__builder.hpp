// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotont_msgs:msg/PowerSupply.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotont_msgs/msg/power_supply.hpp"


#ifndef ROBOTONT_MSGS__MSG__DETAIL__POWER_SUPPLY__BUILDER_HPP_
#define ROBOTONT_MSGS__MSG__DETAIL__POWER_SUPPLY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotont_msgs/msg/detail/power_supply__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotont_msgs
{

namespace msg
{

namespace builder
{

class Init_PowerSupply_estop_pressed
{
public:
  explicit Init_PowerSupply_estop_pressed(::robotont_msgs::msg::PowerSupply & msg)
  : msg_(msg)
  {}
  ::robotont_msgs::msg::PowerSupply estop_pressed(::robotont_msgs::msg::PowerSupply::_estop_pressed_type arg)
  {
    msg_.estop_pressed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotont_msgs::msg::PowerSupply msg_;
};

class Init_PowerSupply_voltage
{
public:
  explicit Init_PowerSupply_voltage(::robotont_msgs::msg::PowerSupply & msg)
  : msg_(msg)
  {}
  Init_PowerSupply_estop_pressed voltage(::robotont_msgs::msg::PowerSupply::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_PowerSupply_estop_pressed(msg_);
  }

private:
  ::robotont_msgs::msg::PowerSupply msg_;
};

class Init_PowerSupply_current
{
public:
  Init_PowerSupply_current()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PowerSupply_voltage current(::robotont_msgs::msg::PowerSupply::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_PowerSupply_voltage(msg_);
  }

private:
  ::robotont_msgs::msg::PowerSupply msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotont_msgs::msg::PowerSupply>()
{
  return robotont_msgs::msg::builder::Init_PowerSupply_current();
}

}  // namespace robotont_msgs

#endif  // ROBOTONT_MSGS__MSG__DETAIL__POWER_SUPPLY__BUILDER_HPP_
