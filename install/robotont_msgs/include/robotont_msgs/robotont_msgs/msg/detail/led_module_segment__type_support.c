// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robotont_msgs:msg/LedModuleSegment.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robotont_msgs/msg/detail/led_module_segment__rosidl_typesupport_introspection_c.h"
#include "robotont_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robotont_msgs/msg/detail/led_module_segment__functions.h"
#include "robotont_msgs/msg/detail/led_module_segment__struct.h"


// Include directives for member types
// Member `colors`
#include "robotont_msgs/msg/color_rgb.h"
// Member `colors`
#include "robotont_msgs/msg/detail/color_rgb__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robotont_msgs__msg__LedModuleSegment__rosidl_typesupport_introspection_c__LedModuleSegment_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robotont_msgs__msg__LedModuleSegment__init(message_memory);
}

void robotont_msgs__msg__LedModuleSegment__rosidl_typesupport_introspection_c__LedModuleSegment_fini_function(void * message_memory)
{
  robotont_msgs__msg__LedModuleSegment__fini(message_memory);
}

size_t robotont_msgs__msg__LedModuleSegment__rosidl_typesupport_introspection_c__size_function__LedModuleSegment__colors(
  const void * untyped_member)
{
  const robotont_msgs__msg__ColorRGB__Sequence * member =
    (const robotont_msgs__msg__ColorRGB__Sequence *)(untyped_member);
  return member->size;
}

const void * robotont_msgs__msg__LedModuleSegment__rosidl_typesupport_introspection_c__get_const_function__LedModuleSegment__colors(
  const void * untyped_member, size_t index)
{
  const robotont_msgs__msg__ColorRGB__Sequence * member =
    (const robotont_msgs__msg__ColorRGB__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robotont_msgs__msg__LedModuleSegment__rosidl_typesupport_introspection_c__get_function__LedModuleSegment__colors(
  void * untyped_member, size_t index)
{
  robotont_msgs__msg__ColorRGB__Sequence * member =
    (robotont_msgs__msg__ColorRGB__Sequence *)(untyped_member);
  return &member->data[index];
}

void robotont_msgs__msg__LedModuleSegment__rosidl_typesupport_introspection_c__fetch_function__LedModuleSegment__colors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const robotont_msgs__msg__ColorRGB * item =
    ((const robotont_msgs__msg__ColorRGB *)
    robotont_msgs__msg__LedModuleSegment__rosidl_typesupport_introspection_c__get_const_function__LedModuleSegment__colors(untyped_member, index));
  robotont_msgs__msg__ColorRGB * value =
    (robotont_msgs__msg__ColorRGB *)(untyped_value);
  *value = *item;
}

void robotont_msgs__msg__LedModuleSegment__rosidl_typesupport_introspection_c__assign_function__LedModuleSegment__colors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  robotont_msgs__msg__ColorRGB * item =
    ((robotont_msgs__msg__ColorRGB *)
    robotont_msgs__msg__LedModuleSegment__rosidl_typesupport_introspection_c__get_function__LedModuleSegment__colors(untyped_member, index));
  const robotont_msgs__msg__ColorRGB * value =
    (const robotont_msgs__msg__ColorRGB *)(untyped_value);
  *item = *value;
}

bool robotont_msgs__msg__LedModuleSegment__rosidl_typesupport_introspection_c__resize_function__LedModuleSegment__colors(
  void * untyped_member, size_t size)
{
  robotont_msgs__msg__ColorRGB__Sequence * member =
    (robotont_msgs__msg__ColorRGB__Sequence *)(untyped_member);
  robotont_msgs__msg__ColorRGB__Sequence__fini(member);
  return robotont_msgs__msg__ColorRGB__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robotont_msgs__msg__LedModuleSegment__rosidl_typesupport_introspection_c__LedModuleSegment_message_member_array[3] = {
  {
    "idx_start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotont_msgs__msg__LedModuleSegment, idx_start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "idx_end",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotont_msgs__msg__LedModuleSegment, idx_end),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "colors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotont_msgs__msg__LedModuleSegment, colors),  // bytes offset in struct
    NULL,  // default value
    robotont_msgs__msg__LedModuleSegment__rosidl_typesupport_introspection_c__size_function__LedModuleSegment__colors,  // size() function pointer
    robotont_msgs__msg__LedModuleSegment__rosidl_typesupport_introspection_c__get_const_function__LedModuleSegment__colors,  // get_const(index) function pointer
    robotont_msgs__msg__LedModuleSegment__rosidl_typesupport_introspection_c__get_function__LedModuleSegment__colors,  // get(index) function pointer
    robotont_msgs__msg__LedModuleSegment__rosidl_typesupport_introspection_c__fetch_function__LedModuleSegment__colors,  // fetch(index, &value) function pointer
    robotont_msgs__msg__LedModuleSegment__rosidl_typesupport_introspection_c__assign_function__LedModuleSegment__colors,  // assign(index, value) function pointer
    robotont_msgs__msg__LedModuleSegment__rosidl_typesupport_introspection_c__resize_function__LedModuleSegment__colors  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robotont_msgs__msg__LedModuleSegment__rosidl_typesupport_introspection_c__LedModuleSegment_message_members = {
  "robotont_msgs__msg",  // message namespace
  "LedModuleSegment",  // message name
  3,  // number of fields
  sizeof(robotont_msgs__msg__LedModuleSegment),
  false,  // has_any_key_member_
  robotont_msgs__msg__LedModuleSegment__rosidl_typesupport_introspection_c__LedModuleSegment_message_member_array,  // message members
  robotont_msgs__msg__LedModuleSegment__rosidl_typesupport_introspection_c__LedModuleSegment_init_function,  // function to initialize message memory (memory has to be allocated)
  robotont_msgs__msg__LedModuleSegment__rosidl_typesupport_introspection_c__LedModuleSegment_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robotont_msgs__msg__LedModuleSegment__rosidl_typesupport_introspection_c__LedModuleSegment_message_type_support_handle = {
  0,
  &robotont_msgs__msg__LedModuleSegment__rosidl_typesupport_introspection_c__LedModuleSegment_message_members,
  get_message_typesupport_handle_function,
  &robotont_msgs__msg__LedModuleSegment__get_type_hash,
  &robotont_msgs__msg__LedModuleSegment__get_type_description,
  &robotont_msgs__msg__LedModuleSegment__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotont_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotont_msgs, msg, LedModuleSegment)() {
  robotont_msgs__msg__LedModuleSegment__rosidl_typesupport_introspection_c__LedModuleSegment_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotont_msgs, msg, ColorRGB)();
  if (!robotont_msgs__msg__LedModuleSegment__rosidl_typesupport_introspection_c__LedModuleSegment_message_type_support_handle.typesupport_identifier) {
    robotont_msgs__msg__LedModuleSegment__rosidl_typesupport_introspection_c__LedModuleSegment_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robotont_msgs__msg__LedModuleSegment__rosidl_typesupport_introspection_c__LedModuleSegment_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
