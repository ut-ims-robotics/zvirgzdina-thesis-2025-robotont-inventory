// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robotont_msgs:msg/ColorRGB.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotont_msgs/msg/color_rgb.hpp"


#ifndef ROBOTONT_MSGS__MSG__DETAIL__COLOR_RGB__STRUCT_HPP_
#define ROBOTONT_MSGS__MSG__DETAIL__COLOR_RGB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robotont_msgs__msg__ColorRGB __attribute__((deprecated))
#else
# define DEPRECATED__robotont_msgs__msg__ColorRGB __declspec(deprecated)
#endif

namespace robotont_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ColorRGB_
{
  using Type = ColorRGB_<ContainerAllocator>;

  explicit ColorRGB_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->r = 0;
      this->g = 0;
      this->b = 0;
    }
  }

  explicit ColorRGB_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->r = 0;
      this->g = 0;
      this->b = 0;
    }
  }

  // field types and members
  using _r_type =
    uint8_t;
  _r_type r;
  using _g_type =
    uint8_t;
  _g_type g;
  using _b_type =
    uint8_t;
  _b_type b;

  // setters for named parameter idiom
  Type & set__r(
    const uint8_t & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__g(
    const uint8_t & _arg)
  {
    this->g = _arg;
    return *this;
  }
  Type & set__b(
    const uint8_t & _arg)
  {
    this->b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotont_msgs::msg::ColorRGB_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotont_msgs::msg::ColorRGB_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotont_msgs::msg::ColorRGB_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotont_msgs::msg::ColorRGB_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotont_msgs::msg::ColorRGB_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotont_msgs::msg::ColorRGB_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotont_msgs::msg::ColorRGB_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotont_msgs::msg::ColorRGB_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotont_msgs::msg::ColorRGB_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotont_msgs::msg::ColorRGB_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotont_msgs__msg__ColorRGB
    std::shared_ptr<robotont_msgs::msg::ColorRGB_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotont_msgs__msg__ColorRGB
    std::shared_ptr<robotont_msgs::msg::ColorRGB_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ColorRGB_ & other) const
  {
    if (this->r != other.r) {
      return false;
    }
    if (this->g != other.g) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const ColorRGB_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ColorRGB_

// alias to use template instance with default allocator
using ColorRGB =
  robotont_msgs::msg::ColorRGB_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robotont_msgs

#endif  // ROBOTONT_MSGS__MSG__DETAIL__COLOR_RGB__STRUCT_HPP_
