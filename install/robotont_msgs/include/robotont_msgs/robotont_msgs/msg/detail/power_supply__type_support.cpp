// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robotont_msgs:msg/PowerSupply.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robotont_msgs/msg/detail/power_supply__functions.h"
#include "robotont_msgs/msg/detail/power_supply__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robotont_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PowerSupply_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robotont_msgs::msg::PowerSupply(_init);
}

void PowerSupply_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robotont_msgs::msg::PowerSupply *>(message_memory);
  typed_message->~PowerSupply();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PowerSupply_message_member_array[3] = {
  {
    "current",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotont_msgs::msg::PowerSupply, current),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "voltage",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotont_msgs::msg::PowerSupply, voltage),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "estop_pressed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotont_msgs::msg::PowerSupply, estop_pressed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PowerSupply_message_members = {
  "robotont_msgs::msg",  // message namespace
  "PowerSupply",  // message name
  3,  // number of fields
  sizeof(robotont_msgs::msg::PowerSupply),
  false,  // has_any_key_member_
  PowerSupply_message_member_array,  // message members
  PowerSupply_init_function,  // function to initialize message memory (memory has to be allocated)
  PowerSupply_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PowerSupply_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PowerSupply_message_members,
  get_message_typesupport_handle_function,
  &robotont_msgs__msg__PowerSupply__get_type_hash,
  &robotont_msgs__msg__PowerSupply__get_type_description,
  &robotont_msgs__msg__PowerSupply__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robotont_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robotont_msgs::msg::PowerSupply>()
{
  return &::robotont_msgs::msg::rosidl_typesupport_introspection_cpp::PowerSupply_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotont_msgs, msg, PowerSupply)() {
  return &::robotont_msgs::msg::rosidl_typesupport_introspection_cpp::PowerSupply_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
