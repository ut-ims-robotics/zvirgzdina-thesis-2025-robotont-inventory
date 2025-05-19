// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from robotont_msgs:msg/LedModuleSegment.idl
// generated code does not contain a copyright notice
#ifndef ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_SEGMENT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_SEGMENT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "robotont_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robotont_msgs/msg/detail/led_module_segment__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotont_msgs
bool cdr_serialize_robotont_msgs__msg__LedModuleSegment(
  const robotont_msgs__msg__LedModuleSegment * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotont_msgs
bool cdr_deserialize_robotont_msgs__msg__LedModuleSegment(
  eprosima::fastcdr::Cdr &,
  robotont_msgs__msg__LedModuleSegment * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotont_msgs
size_t get_serialized_size_robotont_msgs__msg__LedModuleSegment(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotont_msgs
size_t max_serialized_size_robotont_msgs__msg__LedModuleSegment(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotont_msgs
bool cdr_serialize_key_robotont_msgs__msg__LedModuleSegment(
  const robotont_msgs__msg__LedModuleSegment * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotont_msgs
size_t get_serialized_size_key_robotont_msgs__msg__LedModuleSegment(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotont_msgs
size_t max_serialized_size_key_robotont_msgs__msg__LedModuleSegment(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotont_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robotont_msgs, msg, LedModuleSegment)();

#ifdef __cplusplus
}
#endif

#endif  // ROBOTONT_MSGS__MSG__DETAIL__LED_MODULE_SEGMENT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
