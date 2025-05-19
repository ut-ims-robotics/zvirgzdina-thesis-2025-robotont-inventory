// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotont_msgs:msg/ColorRGB.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotont_msgs/msg/color_rgb.hpp"


#ifndef ROBOTONT_MSGS__MSG__DETAIL__COLOR_RGB__BUILDER_HPP_
#define ROBOTONT_MSGS__MSG__DETAIL__COLOR_RGB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotont_msgs/msg/detail/color_rgb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotont_msgs
{

namespace msg
{

namespace builder
{

class Init_ColorRGB_b
{
public:
  explicit Init_ColorRGB_b(::robotont_msgs::msg::ColorRGB & msg)
  : msg_(msg)
  {}
  ::robotont_msgs::msg::ColorRGB b(::robotont_msgs::msg::ColorRGB::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotont_msgs::msg::ColorRGB msg_;
};

class Init_ColorRGB_g
{
public:
  explicit Init_ColorRGB_g(::robotont_msgs::msg::ColorRGB & msg)
  : msg_(msg)
  {}
  Init_ColorRGB_b g(::robotont_msgs::msg::ColorRGB::_g_type arg)
  {
    msg_.g = std::move(arg);
    return Init_ColorRGB_b(msg_);
  }

private:
  ::robotont_msgs::msg::ColorRGB msg_;
};

class Init_ColorRGB_r
{
public:
  Init_ColorRGB_r()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ColorRGB_g r(::robotont_msgs::msg::ColorRGB::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_ColorRGB_g(msg_);
  }

private:
  ::robotont_msgs::msg::ColorRGB msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotont_msgs::msg::ColorRGB>()
{
  return robotont_msgs::msg::builder::Init_ColorRGB_r();
}

}  // namespace robotont_msgs

#endif  // ROBOTONT_MSGS__MSG__DETAIL__COLOR_RGB__BUILDER_HPP_
