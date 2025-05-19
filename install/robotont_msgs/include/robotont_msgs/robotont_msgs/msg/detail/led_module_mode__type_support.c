// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robotont_msgs:msg/LedModuleMode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robotont_msgs/msg/detail/led_module_mode__rosidl_typesupport_introspection_c.h"
#include "robotont_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robotont_msgs/msg/detail/led_module_mode__functions.h"
#include "robotont_msgs/msg/detail/led_module_mode__struct.h"


// Include directives for member types
// Member `params`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robotont_msgs__msg__LedModuleMode__rosidl_typesupport_introspection_c__LedModuleMode_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robotont_msgs__msg__LedModuleMode__init(message_memory);
}

void robotont_msgs__msg__LedModuleMode__rosidl_typesupport_introspection_c__LedModuleMode_fini_function(void * message_memory)
{
  robotont_msgs__msg__LedModuleMode__fini(message_memory);
}

size_t robotont_msgs__msg__LedModuleMode__rosidl_typesupport_introspection_c__size_function__LedModuleMode__params(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * robotont_msgs__msg__LedModuleMode__rosidl_typesupport_introspection_c__get_const_function__LedModuleMode__params(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robotont_msgs__msg__LedModuleMode__rosidl_typesupport_introspection_c__get_function__LedModuleMode__params(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void robotont_msgs__msg__LedModuleMode__rosidl_typesupport_introspection_c__fetch_function__LedModuleMode__params(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    robotont_msgs__msg__LedModuleMode__rosidl_typesupport_introspection_c__get_const_function__LedModuleMode__params(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void robotont_msgs__msg__LedModuleMode__rosidl_typesupport_introspection_c__assign_function__LedModuleMode__params(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    robotont_msgs__msg__LedModuleMode__rosidl_typesupport_introspection_c__get_function__LedModuleMode__params(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool robotont_msgs__msg__LedModuleMode__rosidl_typesupport_introspection_c__resize_function__LedModuleMode__params(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robotont_msgs__msg__LedModuleMode__rosidl_typesupport_introspection_c__LedModuleMode_message_member_array[2] = {
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotont_msgs__msg__LedModuleMode, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotont_msgs__msg__LedModuleMode, params),  // bytes offset in struct
    NULL,  // default value
    robotont_msgs__msg__LedModuleMode__rosidl_typesupport_introspection_c__size_function__LedModuleMode__params,  // size() function pointer
    robotont_msgs__msg__LedModuleMode__rosidl_typesupport_introspection_c__get_const_function__LedModuleMode__params,  // get_const(index) function pointer
    robotont_msgs__msg__LedModuleMode__rosidl_typesupport_introspection_c__get_function__LedModuleMode__params,  // get(index) function pointer
    robotont_msgs__msg__LedModuleMode__rosidl_typesupport_introspection_c__fetch_function__LedModuleMode__params,  // fetch(index, &value) function pointer
    robotont_msgs__msg__LedModuleMode__rosidl_typesupport_introspection_c__assign_function__LedModuleMode__params,  // assign(index, value) function pointer
    robotont_msgs__msg__LedModuleMode__rosidl_typesupport_introspection_c__resize_function__LedModuleMode__params  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robotont_msgs__msg__LedModuleMode__rosidl_typesupport_introspection_c__LedModuleMode_message_members = {
  "robotont_msgs__msg",  // message namespace
  "LedModuleMode",  // message name
  2,  // number of fields
  sizeof(robotont_msgs__msg__LedModuleMode),
  false,  // has_any_key_member_
  robotont_msgs__msg__LedModuleMode__rosidl_typesupport_introspection_c__LedModuleMode_message_member_array,  // message members
  robotont_msgs__msg__LedModuleMode__rosidl_typesupport_introspection_c__LedModuleMode_init_function,  // function to initialize message memory (memory has to be allocated)
  robotont_msgs__msg__LedModuleMode__rosidl_typesupport_introspection_c__LedModuleMode_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robotont_msgs__msg__LedModuleMode__rosidl_typesupport_introspection_c__LedModuleMode_message_type_support_handle = {
  0,
  &robotont_msgs__msg__LedModuleMode__rosidl_typesupport_introspection_c__LedModuleMode_message_members,
  get_message_typesupport_handle_function,
  &robotont_msgs__msg__LedModuleMode__get_type_hash,
  &robotont_msgs__msg__LedModuleMode__get_type_description,
  &robotont_msgs__msg__LedModuleMode__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotont_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotont_msgs, msg, LedModuleMode)() {
  if (!robotont_msgs__msg__LedModuleMode__rosidl_typesupport_introspection_c__LedModuleMode_message_type_support_handle.typesupport_identifier) {
    robotont_msgs__msg__LedModuleMode__rosidl_typesupport_introspection_c__LedModuleMode_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robotont_msgs__msg__LedModuleMode__rosidl_typesupport_introspection_c__LedModuleMode_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
