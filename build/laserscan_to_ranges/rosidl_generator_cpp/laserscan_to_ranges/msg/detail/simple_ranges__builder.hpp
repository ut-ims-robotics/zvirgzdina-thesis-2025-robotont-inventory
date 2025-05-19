// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from laserscan_to_ranges:msg/SimpleRanges.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "laserscan_to_ranges/msg/simple_ranges.hpp"


#ifndef LASERSCAN_TO_RANGES__MSG__DETAIL__SIMPLE_RANGES__BUILDER_HPP_
#define LASERSCAN_TO_RANGES__MSG__DETAIL__SIMPLE_RANGES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "laserscan_to_ranges/msg/detail/simple_ranges__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace laserscan_to_ranges
{

namespace msg
{

namespace builder
{

class Init_SimpleRanges_right
{
public:
  explicit Init_SimpleRanges_right(::laserscan_to_ranges::msg::SimpleRanges & msg)
  : msg_(msg)
  {}
  ::laserscan_to_ranges::msg::SimpleRanges right(::laserscan_to_ranges::msg::SimpleRanges::_right_type arg)
  {
    msg_.right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::laserscan_to_ranges::msg::SimpleRanges msg_;
};

class Init_SimpleRanges_front
{
public:
  explicit Init_SimpleRanges_front(::laserscan_to_ranges::msg::SimpleRanges & msg)
  : msg_(msg)
  {}
  Init_SimpleRanges_right front(::laserscan_to_ranges::msg::SimpleRanges::_front_type arg)
  {
    msg_.front = std::move(arg);
    return Init_SimpleRanges_right(msg_);
  }

private:
  ::laserscan_to_ranges::msg::SimpleRanges msg_;
};

class Init_SimpleRanges_left
{
public:
  explicit Init_SimpleRanges_left(::laserscan_to_ranges::msg::SimpleRanges & msg)
  : msg_(msg)
  {}
  Init_SimpleRanges_front left(::laserscan_to_ranges::msg::SimpleRanges::_left_type arg)
  {
    msg_.left = std::move(arg);
    return Init_SimpleRanges_front(msg_);
  }

private:
  ::laserscan_to_ranges::msg::SimpleRanges msg_;
};

class Init_SimpleRanges_header
{
public:
  Init_SimpleRanges_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SimpleRanges_left header(::laserscan_to_ranges::msg::SimpleRanges::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SimpleRanges_left(msg_);
  }

private:
  ::laserscan_to_ranges::msg::SimpleRanges msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::laserscan_to_ranges::msg::SimpleRanges>()
{
  return laserscan_to_ranges::msg::builder::Init_SimpleRanges_header();
}

}  // namespace laserscan_to_ranges

#endif  // LASERSCAN_TO_RANGES__MSG__DETAIL__SIMPLE_RANGES__BUILDER_HPP_
