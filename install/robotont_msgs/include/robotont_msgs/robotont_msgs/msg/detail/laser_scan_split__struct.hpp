// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robotont_msgs:msg/LaserScanSplit.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotont_msgs/msg/laser_scan_split.hpp"


#ifndef ROBOTONT_MSGS__MSG__DETAIL__LASER_SCAN_SPLIT__STRUCT_HPP_
#define ROBOTONT_MSGS__MSG__DETAIL__LASER_SCAN_SPLIT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robotont_msgs__msg__LaserScanSplit __attribute__((deprecated))
#else
# define DEPRECATED__robotont_msgs__msg__LaserScanSplit __declspec(deprecated)
#endif

namespace robotont_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaserScanSplit_
{
  using Type = LaserScanSplit_<ContainerAllocator>;

  explicit LaserScanSplit_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_min = 0.0;
      this->center_min = 0.0;
      this->right_min = 0.0;
      this->left_mean = 0.0;
      this->center_mean = 0.0;
      this->right_mean = 0.0;
    }
  }

  explicit LaserScanSplit_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_min = 0.0;
      this->center_min = 0.0;
      this->right_min = 0.0;
      this->left_mean = 0.0;
      this->center_mean = 0.0;
      this->right_mean = 0.0;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _left_min_type =
    double;
  _left_min_type left_min;
  using _center_min_type =
    double;
  _center_min_type center_min;
  using _right_min_type =
    double;
  _right_min_type right_min;
  using _left_mean_type =
    double;
  _left_mean_type left_mean;
  using _center_mean_type =
    double;
  _center_mean_type center_mean;
  using _right_mean_type =
    double;
  _right_mean_type right_mean;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__left_min(
    const double & _arg)
  {
    this->left_min = _arg;
    return *this;
  }
  Type & set__center_min(
    const double & _arg)
  {
    this->center_min = _arg;
    return *this;
  }
  Type & set__right_min(
    const double & _arg)
  {
    this->right_min = _arg;
    return *this;
  }
  Type & set__left_mean(
    const double & _arg)
  {
    this->left_mean = _arg;
    return *this;
  }
  Type & set__center_mean(
    const double & _arg)
  {
    this->center_mean = _arg;
    return *this;
  }
  Type & set__right_mean(
    const double & _arg)
  {
    this->right_mean = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotont_msgs::msg::LaserScanSplit_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotont_msgs::msg::LaserScanSplit_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotont_msgs::msg::LaserScanSplit_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotont_msgs::msg::LaserScanSplit_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotont_msgs::msg::LaserScanSplit_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotont_msgs::msg::LaserScanSplit_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotont_msgs::msg::LaserScanSplit_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotont_msgs::msg::LaserScanSplit_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotont_msgs::msg::LaserScanSplit_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotont_msgs::msg::LaserScanSplit_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotont_msgs__msg__LaserScanSplit
    std::shared_ptr<robotont_msgs::msg::LaserScanSplit_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotont_msgs__msg__LaserScanSplit
    std::shared_ptr<robotont_msgs::msg::LaserScanSplit_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaserScanSplit_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->left_min != other.left_min) {
      return false;
    }
    if (this->center_min != other.center_min) {
      return false;
    }
    if (this->right_min != other.right_min) {
      return false;
    }
    if (this->left_mean != other.left_mean) {
      return false;
    }
    if (this->center_mean != other.center_mean) {
      return false;
    }
    if (this->right_mean != other.right_mean) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaserScanSplit_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaserScanSplit_

// alias to use template instance with default allocator
using LaserScanSplit =
  robotont_msgs::msg::LaserScanSplit_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robotont_msgs

#endif  // ROBOTONT_MSGS__MSG__DETAIL__LASER_SCAN_SPLIT__STRUCT_HPP_
