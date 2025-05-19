// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robotont_msgs:msg/LedModulePixel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotont_msgs/msg/led_module_pixel.hpp"


#ifndef ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_PIXEL__STRUCT_HPP_
#define ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_PIXEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'color'
#include "robotont_msgs/msg/detail/color_rgb__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robotont_msgs__msg__LedModulePixel __attribute__((deprecated))
#else
# define DEPRECATED__robotont_msgs__msg__LedModulePixel __declspec(deprecated)
#endif

namespace robotont_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LedModulePixel_
{
  using Type = LedModulePixel_<ContainerAllocator>;

  explicit LedModulePixel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : color(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->idx = 0ul;
    }
  }

  explicit LedModulePixel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : color(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->idx = 0ul;
    }
  }

  // field types and members
  using _idx_type =
    uint32_t;
  _idx_type idx;
  using _color_type =
    robotont_msgs::msg::ColorRGB_<ContainerAllocator>;
  _color_type color;

  // setters for named parameter idiom
  Type & set__idx(
    const uint32_t & _arg)
  {
    this->idx = _arg;
    return *this;
  }
  Type & set__color(
    const robotont_msgs::msg::ColorRGB_<ContainerAllocator> & _arg)
  {
    this->color = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotont_msgs::msg::LedModulePixel_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotont_msgs::msg::LedModulePixel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotont_msgs::msg::LedModulePixel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotont_msgs::msg::LedModulePixel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotont_msgs::msg::LedModulePixel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotont_msgs::msg::LedModulePixel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotont_msgs::msg::LedModulePixel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotont_msgs::msg::LedModulePixel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotont_msgs::msg::LedModulePixel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotont_msgs::msg::LedModulePixel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotont_msgs__msg__LedModulePixel
    std::shared_ptr<robotont_msgs::msg::LedModulePixel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotont_msgs__msg__LedModulePixel
    std::shared_ptr<robotont_msgs::msg::LedModulePixel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedModulePixel_ & other) const
  {
    if (this->idx != other.idx) {
      return false;
    }
    if (this->color != other.color) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedModulePixel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedModulePixel_

// alias to use template instance with default allocator
using LedModulePixel =
  robotont_msgs::msg::LedModulePixel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robotont_msgs

#endif  // ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_PIXEL__STRUCT_HPP_
