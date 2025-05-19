// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotont_msgs:msg/LedModuleMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotont_msgs/msg/led_module_mode.hpp"


#ifndef ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_MODE__BUILDER_HPP_
#define ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotont_msgs/msg/detail/led_module_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotont_msgs
{

namespace msg
{

namespace builder
{

class Init_LedModuleMode_params
{
public:
  explicit Init_LedModuleMode_params(::robotont_msgs::msg::LedModuleMode & msg)
  : msg_(msg)
  {}
  ::robotont_msgs::msg::LedModuleMode params(::robotont_msgs::msg::LedModuleMode::_params_type arg)
  {
    msg_.params = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotont_msgs::msg::LedModuleMode msg_;
};

class Init_LedModuleMode_mode
{
public:
  Init_LedModuleMode_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedModuleMode_params mode(::robotont_msgs::msg::LedModuleMode::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_LedModuleMode_params(msg_);
  }

private:
  ::robotont_msgs::msg::LedModuleMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotont_msgs::msg::LedModuleMode>()
{
  return robotont_msgs::msg::builder::Init_LedModuleMode_mode();
}

}  // namespace robotont_msgs

#endif  // ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_MODE__BUILDER_HPP_
