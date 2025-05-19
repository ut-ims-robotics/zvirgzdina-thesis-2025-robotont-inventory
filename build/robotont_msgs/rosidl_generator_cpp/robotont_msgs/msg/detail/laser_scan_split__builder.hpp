// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotont_msgs:msg/LaserScanSplit.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotont_msgs/msg/laser_scan_split.hpp"


#ifndef ROBOTONT_MSGS__MSG__DETAIL__LASER_SCAN_SPLIT__BUILDER_HPP_
#define ROBOTONT_MSGS__MSG__DETAIL__LASER_SCAN_SPLIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotont_msgs/msg/detail/laser_scan_split__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotont_msgs
{

namespace msg
{

namespace builder
{

class Init_LaserScanSplit_right_mean
{
public:
  explicit Init_LaserScanSplit_right_mean(::robotont_msgs::msg::LaserScanSplit & msg)
  : msg_(msg)
  {}
  ::robotont_msgs::msg::LaserScanSplit right_mean(::robotont_msgs::msg::LaserScanSplit::_right_mean_type arg)
  {
    msg_.right_mean = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotont_msgs::msg::LaserScanSplit msg_;
};

class Init_LaserScanSplit_center_mean
{
public:
  explicit Init_LaserScanSplit_center_mean(::robotont_msgs::msg::LaserScanSplit & msg)
  : msg_(msg)
  {}
  Init_LaserScanSplit_right_mean center_mean(::robotont_msgs::msg::LaserScanSplit::_center_mean_type arg)
  {
    msg_.center_mean = std::move(arg);
    return Init_LaserScanSplit_right_mean(msg_);
  }

private:
  ::robotont_msgs::msg::LaserScanSplit msg_;
};

class Init_LaserScanSplit_left_mean
{
public:
  explicit Init_LaserScanSplit_left_mean(::robotont_msgs::msg::LaserScanSplit & msg)
  : msg_(msg)
  {}
  Init_LaserScanSplit_center_mean left_mean(::robotont_msgs::msg::LaserScanSplit::_left_mean_type arg)
  {
    msg_.left_mean = std::move(arg);
    return Init_LaserScanSplit_center_mean(msg_);
  }

private:
  ::robotont_msgs::msg::LaserScanSplit msg_;
};

class Init_LaserScanSplit_right_min
{
public:
  explicit Init_LaserScanSplit_right_min(::robotont_msgs::msg::LaserScanSplit & msg)
  : msg_(msg)
  {}
  Init_LaserScanSplit_left_mean right_min(::robotont_msgs::msg::LaserScanSplit::_right_min_type arg)
  {
    msg_.right_min = std::move(arg);
    return Init_LaserScanSplit_left_mean(msg_);
  }

private:
  ::robotont_msgs::msg::LaserScanSplit msg_;
};

class Init_LaserScanSplit_center_min
{
public:
  explicit Init_LaserScanSplit_center_min(::robotont_msgs::msg::LaserScanSplit & msg)
  : msg_(msg)
  {}
  Init_LaserScanSplit_right_min center_min(::robotont_msgs::msg::LaserScanSplit::_center_min_type arg)
  {
    msg_.center_min = std::move(arg);
    return Init_LaserScanSplit_right_min(msg_);
  }

private:
  ::robotont_msgs::msg::LaserScanSplit msg_;
};

class Init_LaserScanSplit_left_min
{
public:
  explicit Init_LaserScanSplit_left_min(::robotont_msgs::msg::LaserScanSplit & msg)
  : msg_(msg)
  {}
  Init_LaserScanSplit_center_min left_min(::robotont_msgs::msg::LaserScanSplit::_left_min_type arg)
  {
    msg_.left_min = std::move(arg);
    return Init_LaserScanSplit_center_min(msg_);
  }

private:
  ::robotont_msgs::msg::LaserScanSplit msg_;
};

class Init_LaserScanSplit_stamp
{
public:
  Init_LaserScanSplit_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaserScanSplit_left_min stamp(::robotont_msgs::msg::LaserScanSplit::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_LaserScanSplit_left_min(msg_);
  }

private:
  ::robotont_msgs::msg::LaserScanSplit msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotont_msgs::msg::LaserScanSplit>()
{
  return robotont_msgs::msg::builder::Init_LaserScanSplit_stamp();
}

}  // namespace robotont_msgs

#endif  // ROBOTONT_MSGS__MSG__DETAIL__LASER_SCAN_SPLIT__BUILDER_HPP_
