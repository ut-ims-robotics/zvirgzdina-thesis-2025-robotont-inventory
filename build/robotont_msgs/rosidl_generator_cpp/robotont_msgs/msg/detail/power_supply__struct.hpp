// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robotont_msgs:msg/PowerSupply.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotont_msgs/msg/power_supply.hpp"


#ifndef ROBOTONT_MSGS__MSG__DETAIL__POWER_SUPPLY__STRUCT_HPP_
#define ROBOTONT_MSGS__MSG__DETAIL__POWER_SUPPLY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robotont_msgs__msg__PowerSupply __attribute__((deprecated))
#else
# define DEPRECATED__robotont_msgs__msg__PowerSupply __declspec(deprecated)
#endif

namespace robotont_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PowerSupply_
{
  using Type = PowerSupply_<ContainerAllocator>;

  explicit PowerSupply_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current = 0.0f;
      this->voltage = 0.0f;
      this->estop_pressed = false;
    }
  }

  explicit PowerSupply_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current = 0.0f;
      this->voltage = 0.0f;
      this->estop_pressed = false;
    }
  }

  // field types and members
  using _current_type =
    float;
  _current_type current;
  using _voltage_type =
    float;
  _voltage_type voltage;
  using _estop_pressed_type =
    bool;
  _estop_pressed_type estop_pressed;

  // setters for named parameter idiom
  Type & set__current(
    const float & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__voltage(
    const float & _arg)
  {
    this->voltage = _arg;
    return *this;
  }
  Type & set__estop_pressed(
    const bool & _arg)
  {
    this->estop_pressed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotont_msgs::msg::PowerSupply_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotont_msgs::msg::PowerSupply_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotont_msgs::msg::PowerSupply_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotont_msgs::msg::PowerSupply_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotont_msgs::msg::PowerSupply_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotont_msgs::msg::PowerSupply_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotont_msgs::msg::PowerSupply_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotont_msgs::msg::PowerSupply_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotont_msgs::msg::PowerSupply_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotont_msgs::msg::PowerSupply_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotont_msgs__msg__PowerSupply
    std::shared_ptr<robotont_msgs::msg::PowerSupply_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotont_msgs__msg__PowerSupply
    std::shared_ptr<robotont_msgs::msg::PowerSupply_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PowerSupply_ & other) const
  {
    if (this->current != other.current) {
      return false;
    }
    if (this->voltage != other.voltage) {
      return false;
    }
    if (this->estop_pressed != other.estop_pressed) {
      return false;
    }
    return true;
  }
  bool operator!=(const PowerSupply_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PowerSupply_

// alias to use template instance with default allocator
using PowerSupply =
  robotont_msgs::msg::PowerSupply_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robotont_msgs

#endif  // ROBOTONT_MSGS__MSG__DETAIL__POWER_SUPPLY__STRUCT_HPP_
