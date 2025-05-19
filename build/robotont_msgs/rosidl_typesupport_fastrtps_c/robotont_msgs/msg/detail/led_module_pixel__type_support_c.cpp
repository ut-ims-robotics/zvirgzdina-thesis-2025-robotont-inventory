// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robotont_msgs:msg/LedModulePixel.idl
// generated code does not contain a copyright notice
#include "robotont_msgs/msg/detail/led_module_pixel__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robotont_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robotont_msgs/msg/detail/led_module_pixel__struct.h"
#include "robotont_msgs/msg/detail/led_module_pixel__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "robotont_msgs/msg/detail/color_rgb__functions.h"  // color

// forward declare type support functions

bool cdr_serialize_robotont_msgs__msg__ColorRGB(
  const robotont_msgs__msg__ColorRGB * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_robotont_msgs__msg__ColorRGB(
  eprosima::fastcdr::Cdr & cdr,
  robotont_msgs__msg__ColorRGB * ros_message);

size_t get_serialized_size_robotont_msgs__msg__ColorRGB(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_robotont_msgs__msg__ColorRGB(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_robotont_msgs__msg__ColorRGB(
  const robotont_msgs__msg__ColorRGB * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_robotont_msgs__msg__ColorRGB(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_robotont_msgs__msg__ColorRGB(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robotont_msgs, msg, ColorRGB)();


using _LedModulePixel__ros_msg_type = robotont_msgs__msg__LedModulePixel;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotont_msgs
bool cdr_serialize_robotont_msgs__msg__LedModulePixel(
  const robotont_msgs__msg__LedModulePixel * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: idx
  {
    cdr << ros_message->idx;
  }

  // Field name: color
  {
    cdr_serialize_robotont_msgs__msg__ColorRGB(
      &ros_message->color, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotont_msgs
bool cdr_deserialize_robotont_msgs__msg__LedModulePixel(
  eprosima::fastcdr::Cdr & cdr,
  robotont_msgs__msg__LedModulePixel * ros_message)
{
  // Field name: idx
  {
    cdr >> ros_message->idx;
  }

  // Field name: color
  {
    cdr_deserialize_robotont_msgs__msg__ColorRGB(cdr, &ros_message->color);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotont_msgs
size_t get_serialized_size_robotont_msgs__msg__LedModulePixel(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LedModulePixel__ros_msg_type * ros_message = static_cast<const _LedModulePixel__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: idx
  {
    size_t item_size = sizeof(ros_message->idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: color
  current_alignment += get_serialized_size_robotont_msgs__msg__ColorRGB(
    &(ros_message->color), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotont_msgs
size_t max_serialized_size_robotont_msgs__msg__LedModulePixel(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: idx
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: color
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_robotont_msgs__msg__ColorRGB(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robotont_msgs__msg__LedModulePixel;
    is_plain =
      (
      offsetof(DataType, color) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotont_msgs
bool cdr_serialize_key_robotont_msgs__msg__LedModulePixel(
  const robotont_msgs__msg__LedModulePixel * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: idx
  {
    cdr << ros_message->idx;
  }

  // Field name: color
  {
    cdr_serialize_key_robotont_msgs__msg__ColorRGB(
      &ros_message->color, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotont_msgs
size_t get_serialized_size_key_robotont_msgs__msg__LedModulePixel(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LedModulePixel__ros_msg_type * ros_message = static_cast<const _LedModulePixel__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: idx
  {
    size_t item_size = sizeof(ros_message->idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: color
  current_alignment += get_serialized_size_key_robotont_msgs__msg__ColorRGB(
    &(ros_message->color), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotont_msgs
size_t max_serialized_size_key_robotont_msgs__msg__LedModulePixel(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: idx
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: color
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_robotont_msgs__msg__ColorRGB(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robotont_msgs__msg__LedModulePixel;
    is_plain =
      (
      offsetof(DataType, color) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _LedModulePixel__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const robotont_msgs__msg__LedModulePixel * ros_message = static_cast<const robotont_msgs__msg__LedModulePixel *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_robotont_msgs__msg__LedModulePixel(ros_message, cdr);
}

static bool _LedModulePixel__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  robotont_msgs__msg__LedModulePixel * ros_message = static_cast<robotont_msgs__msg__LedModulePixel *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_robotont_msgs__msg__LedModulePixel(cdr, ros_message);
}

static uint32_t _LedModulePixel__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robotont_msgs__msg__LedModulePixel(
      untyped_ros_message, 0));
}

static size_t _LedModulePixel__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_robotont_msgs__msg__LedModulePixel(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LedModulePixel = {
  "robotont_msgs::msg",
  "LedModulePixel",
  _LedModulePixel__cdr_serialize,
  _LedModulePixel__cdr_deserialize,
  _LedModulePixel__get_serialized_size,
  _LedModulePixel__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _LedModulePixel__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LedModulePixel,
  get_message_typesupport_handle_function,
  &robotont_msgs__msg__LedModulePixel__get_type_hash,
  &robotont_msgs__msg__LedModulePixel__get_type_description,
  &robotont_msgs__msg__LedModulePixel__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robotont_msgs, msg, LedModulePixel)() {
  return &_LedModulePixel__type_support;
}

#if defined(__cplusplus)
}
#endif
