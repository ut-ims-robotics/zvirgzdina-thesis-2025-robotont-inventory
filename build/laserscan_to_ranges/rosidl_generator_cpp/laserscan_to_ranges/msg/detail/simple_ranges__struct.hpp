// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from laserscan_to_ranges:msg/SimpleRanges.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "laserscan_to_ranges/msg/simple_ranges.hpp"


#ifndef LASERSCAN_TO_RANGES__MSG__DETAIL__SIMPLE_RANGES__STRUCT_HPP_
#define LASERSCAN_TO_RANGES__MSG__DETAIL__SIMPLE_RANGES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__laserscan_to_ranges__msg__SimpleRanges __attribute__((deprecated))
#else
# define DEPRECATED__laserscan_to_ranges__msg__SimpleRanges __declspec(deprecated)
#endif

namespace laserscan_to_ranges
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SimpleRanges_
{
  using Type = SimpleRanges_<ContainerAllocator>;

  explicit SimpleRanges_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left = 0.0;
      this->front = 0.0;
      this->right = 0.0;
    }
  }

  explicit SimpleRanges_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left = 0.0;
      this->front = 0.0;
      this->right = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _left_type =
    double;
  _left_type left;
  using _front_type =
    double;
  _front_type front;
  using _right_type =
    double;
  _right_type right;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__left(
    const double & _arg)
  {
    this->left = _arg;
    return *this;
  }
  Type & set__front(
    const double & _arg)
  {
    this->front = _arg;
    return *this;
  }
  Type & set__right(
    const double & _arg)
  {
    this->right = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    laserscan_to_ranges::msg::SimpleRanges_<ContainerAllocator> *;
  using ConstRawPtr =
    const laserscan_to_ranges::msg::SimpleRanges_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<laserscan_to_ranges::msg::SimpleRanges_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<laserscan_to_ranges::msg::SimpleRanges_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      laserscan_to_ranges::msg::SimpleRanges_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<laserscan_to_ranges::msg::SimpleRanges_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      laserscan_to_ranges::msg::SimpleRanges_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<laserscan_to_ranges::msg::SimpleRanges_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<laserscan_to_ranges::msg::SimpleRanges_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<laserscan_to_ranges::msg::SimpleRanges_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__laserscan_to_ranges__msg__SimpleRanges
    std::shared_ptr<laserscan_to_ranges::msg::SimpleRanges_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__laserscan_to_ranges__msg__SimpleRanges
    std::shared_ptr<laserscan_to_ranges::msg::SimpleRanges_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimpleRanges_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->left != other.left) {
      return false;
    }
    if (this->front != other.front) {
      return false;
    }
    if (this->right != other.right) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimpleRanges_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimpleRanges_

// alias to use template instance with default allocator
using SimpleRanges =
  laserscan_to_ranges::msg::SimpleRanges_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace laserscan_to_ranges

#endif  // LASERSCAN_TO_RANGES__MSG__DETAIL__SIMPLE_RANGES__STRUCT_HPP_
