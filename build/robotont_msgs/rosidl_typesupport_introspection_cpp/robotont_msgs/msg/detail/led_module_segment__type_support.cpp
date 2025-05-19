// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robotont_msgs:msg/LedModuleSegment.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robotont_msgs/msg/detail/led_module_segment__functions.h"
#include "robotont_msgs/msg/detail/led_module_segment__struct.hpp"
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

void LedModuleSegment_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robotont_msgs::msg::LedModuleSegment(_init);
}

void LedModuleSegment_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robotont_msgs::msg::LedModuleSegment *>(message_memory);
  typed_message->~LedModuleSegment();
}

size_t size_function__LedModuleSegment__colors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<robotont_msgs::msg::ColorRGB> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LedModuleSegment__colors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<robotont_msgs::msg::ColorRGB> *>(untyped_member);
  return &member[index];
}

void * get_function__LedModuleSegment__colors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<robotont_msgs::msg::ColorRGB> *>(untyped_member);
  return &member[index];
}

void fetch_function__LedModuleSegment__colors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const robotont_msgs::msg::ColorRGB *>(
    get_const_function__LedModuleSegment__colors(untyped_member, index));
  auto & value = *reinterpret_cast<robotont_msgs::msg::ColorRGB *>(untyped_value);
  value = item;
}

void assign_function__LedModuleSegment__colors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<robotont_msgs::msg::ColorRGB *>(
    get_function__LedModuleSegment__colors(untyped_member, index));
  const auto & value = *reinterpret_cast<const robotont_msgs::msg::ColorRGB *>(untyped_value);
  item = value;
}

void resize_function__LedModuleSegment__colors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<robotont_msgs::msg::ColorRGB> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LedModuleSegment_message_member_array[3] = {
  {
    "idx_start",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotont_msgs::msg::LedModuleSegment, idx_start),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "idx_end",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotont_msgs::msg::LedModuleSegment, idx_end),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "colors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robotont_msgs::msg::ColorRGB>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotont_msgs::msg::LedModuleSegment, colors),  // bytes offset in struct
    nullptr,  // default value
    size_function__LedModuleSegment__colors,  // size() function pointer
    get_const_function__LedModuleSegment__colors,  // get_const(index) function pointer
    get_function__LedModuleSegment__colors,  // get(index) function pointer
    fetch_function__LedModuleSegment__colors,  // fetch(index, &value) function pointer
    assign_function__LedModuleSegment__colors,  // assign(index, value) function pointer
    resize_function__LedModuleSegment__colors  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LedModuleSegment_message_members = {
  "robotont_msgs::msg",  // message namespace
  "LedModuleSegment",  // message name
  3,  // number of fields
  sizeof(robotont_msgs::msg::LedModuleSegment),
  false,  // has_any_key_member_
  LedModuleSegment_message_member_array,  // message members
  LedModuleSegment_init_function,  // function to initialize message memory (memory has to be allocated)
  LedModuleSegment_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LedModuleSegment_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LedModuleSegment_message_members,
  get_message_typesupport_handle_function,
  &robotont_msgs__msg__LedModuleSegment__get_type_hash,
  &robotont_msgs__msg__LedModuleSegment__get_type_description,
  &robotont_msgs__msg__LedModuleSegment__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robotont_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robotont_msgs::msg::LedModuleSegment>()
{
  return &::robotont_msgs::msg::rosidl_typesupport_introspection_cpp::LedModuleSegment_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotont_msgs, msg, LedModuleSegment)() {
  return &::robotont_msgs::msg::rosidl_typesupport_introspection_cpp::LedModuleSegment_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
