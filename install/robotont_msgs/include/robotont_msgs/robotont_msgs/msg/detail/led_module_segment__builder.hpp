// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotont_msgs:msg/LedModuleSegment.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotont_msgs/msg/led_module_segment.hpp"


#ifndef ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_SEGMENT__BUILDER_HPP_
#define ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_SEGMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotont_msgs/msg/detail/led_module_segment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotont_msgs
{

namespace msg
{

namespace builder
{

class Init_LedModuleSegment_colors
{
public:
  explicit Init_LedModuleSegment_colors(::robotont_msgs::msg::LedModuleSegment & msg)
  : msg_(msg)
  {}
  ::robotont_msgs::msg::LedModuleSegment colors(::robotont_msgs::msg::LedModuleSegment::_colors_type arg)
  {
    msg_.colors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotont_msgs::msg::LedModuleSegment msg_;
};

class Init_LedModuleSegment_idx_end
{
public:
  explicit Init_LedModuleSegment_idx_end(::robotont_msgs::msg::LedModuleSegment & msg)
  : msg_(msg)
  {}
  Init_LedModuleSegment_colors idx_end(::robotont_msgs::msg::LedModuleSegment::_idx_end_type arg)
  {
    msg_.idx_end = std::move(arg);
    return Init_LedModuleSegment_colors(msg_);
  }

private:
  ::robotont_msgs::msg::LedModuleSegment msg_;
};

class Init_LedModuleSegment_idx_start
{
public:
  Init_LedModuleSegment_idx_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedModuleSegment_idx_end idx_start(::robotont_msgs::msg::LedModuleSegment::_idx_start_type arg)
  {
    msg_.idx_start = std::move(arg);
    return Init_LedModuleSegment_idx_end(msg_);
  }

private:
  ::robotont_msgs::msg::LedModuleSegment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotont_msgs::msg::LedModuleSegment>()
{
  return robotont_msgs::msg::builder::Init_LedModuleSegment_idx_start();
}

}  // namespace robotont_msgs

#endif  // ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_SEGMENT__BUILDER_HPP_
