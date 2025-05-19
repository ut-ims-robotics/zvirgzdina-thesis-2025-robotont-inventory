// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robotont_msgs:msg/LedModulePixel.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robotont_msgs/msg/detail/led_module_pixel__functions.h"
#include "robotont_msgs/msg/detail/led_module_pixel__struct.hpp"
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

void LedModulePixel_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robotont_msgs::msg::LedModulePixel(_init);
}

void LedModulePixel_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robotont_msgs::msg::LedModulePixel *>(message_memory);
  typed_message->~LedModulePixel();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LedModulePixel_message_member_array[2] = {
  {
    "idx",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotont_msgs::msg::LedModulePixel, idx),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "color",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robotont_msgs::msg::ColorRGB>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotont_msgs::msg::LedModulePixel, color),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LedModulePixel_message_members = {
  "robotont_msgs::msg",  // message namespace
  "LedModulePixel",  // message name
  2,  // number of fields
  sizeof(robotont_msgs::msg::LedModulePixel),
  false,  // has_any_key_member_
  LedModulePixel_message_member_array,  // message members
  LedModulePixel_init_function,  // function to initialize message memory (memory has to be allocated)
  LedModulePixel_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LedModulePixel_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LedModulePixel_message_members,
  get_message_typesupport_handle_function,
  &robotont_msgs__msg__LedModulePixel__get_type_hash,
  &robotont_msgs__msg__LedModulePixel__get_type_description,
  &robotont_msgs__msg__LedModulePixel__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robotont_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robotont_msgs::msg::LedModulePixel>()
{
  return &::robotont_msgs::msg::rosidl_typesupport_introspection_cpp::LedModulePixel_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotont_msgs, msg, LedModulePixel)() {
  return &::robotont_msgs::msg::rosidl_typesupport_introspection_cpp::LedModulePixel_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
