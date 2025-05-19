// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotont_msgs:msg/LedModulePixel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotont_msgs/msg/led_module_pixel.hpp"


#ifndef ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_PIXEL__BUILDER_HPP_
#define ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_PIXEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotont_msgs/msg/detail/led_module_pixel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotont_msgs
{

namespace msg
{

namespace builder
{

class Init_LedModulePixel_color
{
public:
  explicit Init_LedModulePixel_color(::robotont_msgs::msg::LedModulePixel & msg)
  : msg_(msg)
  {}
  ::robotont_msgs::msg::LedModulePixel color(::robotont_msgs::msg::LedModulePixel::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotont_msgs::msg::LedModulePixel msg_;
};

class Init_LedModulePixel_idx
{
public:
  Init_LedModulePixel_idx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedModulePixel_color idx(::robotont_msgs::msg::LedModulePixel::_idx_type arg)
  {
    msg_.idx = std::move(arg);
    return Init_LedModulePixel_color(msg_);
  }

private:
  ::robotont_msgs::msg::LedModulePixel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotont_msgs::msg::LedModulePixel>()
{
  return robotont_msgs::msg::builder::Init_LedModulePixel_idx();
}

}  // namespace robotont_msgs

#endif  // ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_PIXEL__BUILDER_HPP_
