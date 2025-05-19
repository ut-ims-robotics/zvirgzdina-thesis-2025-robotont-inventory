// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robotont_msgs:msg/LedModuleMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotont_msgs/msg/led_module_mode.hpp"


#ifndef ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_MODE__STRUCT_HPP_
#define ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robotont_msgs__msg__LedModuleMode __attribute__((deprecated))
#else
# define DEPRECATED__robotont_msgs__msg__LedModuleMode __declspec(deprecated)
#endif

namespace robotont_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LedModuleMode_
{
  using Type = LedModuleMode_<ContainerAllocator>;

  explicit LedModuleMode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
    }
  }

  explicit LedModuleMode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
    }
  }

  // field types and members
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _params_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _params_type params;

  // setters for named parameter idiom
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__params(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->params = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NONE =
    0u;
  static constexpr uint8_t SPIN =
    1u;
  static constexpr uint8_t PULSE =
    2u;
  static constexpr uint8_t COLORS_SMOOTH =
    3u;
  static constexpr uint8_t WHEEL_COLORS =
    4u;
  static constexpr uint8_t COLORS_RGB =
    5u;
  static constexpr uint8_t COLORS_SPIN =
    6u;
  static constexpr uint8_t MOTOR_DUTY =
    7u;
  static constexpr uint8_t MOTOR_SPEEDS =
    8u;
  static constexpr uint8_t SCAN_RANGES =
    9u;

  // pointer types
  using RawPtr =
    robotont_msgs::msg::LedModuleMode_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotont_msgs::msg::LedModuleMode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotont_msgs::msg::LedModuleMode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotont_msgs::msg::LedModuleMode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotont_msgs::msg::LedModuleMode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotont_msgs::msg::LedModuleMode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotont_msgs::msg::LedModuleMode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotont_msgs::msg::LedModuleMode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotont_msgs::msg::LedModuleMode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotont_msgs::msg::LedModuleMode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotont_msgs__msg__LedModuleMode
    std::shared_ptr<robotont_msgs::msg::LedModuleMode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotont_msgs__msg__LedModuleMode
    std::shared_ptr<robotont_msgs::msg::LedModuleMode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedModuleMode_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->params != other.params) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedModuleMode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedModuleMode_

// alias to use template instance with default allocator
using LedModuleMode =
  robotont_msgs::msg::LedModuleMode_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedModuleMode_<ContainerAllocator>::NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedModuleMode_<ContainerAllocator>::SPIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedModuleMode_<ContainerAllocator>::PULSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedModuleMode_<ContainerAllocator>::COLORS_SMOOTH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedModuleMode_<ContainerAllocator>::WHEEL_COLORS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedModuleMode_<ContainerAllocator>::COLORS_RGB;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedModuleMode_<ContainerAllocator>::COLORS_SPIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedModuleMode_<ContainerAllocator>::MOTOR_DUTY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedModuleMode_<ContainerAllocator>::MOTOR_SPEEDS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedModuleMode_<ContainerAllocator>::SCAN_RANGES;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace robotont_msgs

#endif  // ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_MODE__STRUCT_HPP_
