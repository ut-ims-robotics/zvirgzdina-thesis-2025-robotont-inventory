// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robotont_msgs:msg/PowerSupply.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robotont_msgs/msg/detail/power_supply__rosidl_typesupport_introspection_c.h"
#include "robotont_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robotont_msgs/msg/detail/power_supply__functions.h"
#include "robotont_msgs/msg/detail/power_supply__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void robotont_msgs__msg__PowerSupply__rosidl_typesupport_introspection_c__PowerSupply_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robotont_msgs__msg__PowerSupply__init(message_memory);
}

void robotont_msgs__msg__PowerSupply__rosidl_typesupport_introspection_c__PowerSupply_fini_function(void * message_memory)
{
  robotont_msgs__msg__PowerSupply__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robotont_msgs__msg__PowerSupply__rosidl_typesupport_introspection_c__PowerSupply_message_member_array[3] = {
  {
    "current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotont_msgs__msg__PowerSupply, current),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "voltage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotont_msgs__msg__PowerSupply, voltage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "estop_pressed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotont_msgs__msg__PowerSupply, estop_pressed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robotont_msgs__msg__PowerSupply__rosidl_typesupport_introspection_c__PowerSupply_message_members = {
  "robotont_msgs__msg",  // message namespace
  "PowerSupply",  // message name
  3,  // number of fields
  sizeof(robotont_msgs__msg__PowerSupply),
  false,  // has_any_key_member_
  robotont_msgs__msg__PowerSupply__rosidl_typesupport_introspection_c__PowerSupply_message_member_array,  // message members
  robotont_msgs__msg__PowerSupply__rosidl_typesupport_introspection_c__PowerSupply_init_function,  // function to initialize message memory (memory has to be allocated)
  robotont_msgs__msg__PowerSupply__rosidl_typesupport_introspection_c__PowerSupply_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robotont_msgs__msg__PowerSupply__rosidl_typesupport_introspection_c__PowerSupply_message_type_support_handle = {
  0,
  &robotont_msgs__msg__PowerSupply__rosidl_typesupport_introspection_c__PowerSupply_message_members,
  get_message_typesupport_handle_function,
  &robotont_msgs__msg__PowerSupply__get_type_hash,
  &robotont_msgs__msg__PowerSupply__get_type_description,
  &robotont_msgs__msg__PowerSupply__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotont_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotont_msgs, msg, PowerSupply)() {
  if (!robotont_msgs__msg__PowerSupply__rosidl_typesupport_introspection_c__PowerSupply_message_type_support_handle.typesupport_identifier) {
    robotont_msgs__msg__PowerSupply__rosidl_typesupport_introspection_c__PowerSupply_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robotont_msgs__msg__PowerSupply__rosidl_typesupport_introspection_c__PowerSupply_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
