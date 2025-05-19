// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from laserscan_to_ranges:msg/SimpleRanges.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "laserscan_to_ranges/msg/detail/simple_ranges__functions.h"
#include "laserscan_to_ranges/msg/detail/simple_ranges__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace laserscan_to_ranges
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SimpleRanges_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) laserscan_to_ranges::msg::SimpleRanges(_init);
}

void SimpleRanges_fini_function(void * message_memory)
{
  auto typed_message = static_cast<laserscan_to_ranges::msg::SimpleRanges *>(message_memory);
  typed_message->~SimpleRanges();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SimpleRanges_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(laserscan_to_ranges::msg::SimpleRanges, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "left",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(laserscan_to_ranges::msg::SimpleRanges, left),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "front",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(laserscan_to_ranges::msg::SimpleRanges, front),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "right",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(laserscan_to_ranges::msg::SimpleRanges, right),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SimpleRanges_message_members = {
  "laserscan_to_ranges::msg",  // message namespace
  "SimpleRanges",  // message name
  4,  // number of fields
  sizeof(laserscan_to_ranges::msg::SimpleRanges),
  false,  // has_any_key_member_
  SimpleRanges_message_member_array,  // message members
  SimpleRanges_init_function,  // function to initialize message memory (memory has to be allocated)
  SimpleRanges_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SimpleRanges_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SimpleRanges_message_members,
  get_message_typesupport_handle_function,
  &laserscan_to_ranges__msg__SimpleRanges__get_type_hash,
  &laserscan_to_ranges__msg__SimpleRanges__get_type_description,
  &laserscan_to_ranges__msg__SimpleRanges__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace laserscan_to_ranges


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<laserscan_to_ranges::msg::SimpleRanges>()
{
  return &::laserscan_to_ranges::msg::rosidl_typesupport_introspection_cpp::SimpleRanges_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, laserscan_to_ranges, msg, SimpleRanges)() {
  return &::laserscan_to_ranges::msg::rosidl_typesupport_introspection_cpp::SimpleRanges_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
