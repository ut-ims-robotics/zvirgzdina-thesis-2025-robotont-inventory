// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robotont_msgs:msg/LedModuleMode.idl
// generated code does not contain a copyright notice
#include "robotont_msgs/msg/detail/led_module_mode__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robotont_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robotont_msgs/msg/detail/led_module_mode__struct.h"
#include "robotont_msgs/msg/detail/led_module_mode__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // params
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // params

// forward declare type support functions


using _LedModuleMode__ros_msg_type = robotont_msgs__msg__LedModuleMode;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotont_msgs
bool cdr_serialize_robotont_msgs__msg__LedModuleMode(
  const robotont_msgs__msg__LedModuleMode * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  // Field name: params
  {
    size_t size = ros_message->params.size;
    auto array_ptr = ros_message->params.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotont_msgs
bool cdr_deserialize_robotont_msgs__msg__LedModuleMode(
  eprosima::fastcdr::Cdr & cdr,
  robotont_msgs__msg__LedModuleMode * ros_message)
{
  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  // Field name: params
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->params.data) {
      rosidl_runtime_c__int16__Sequence__fini(&ros_message->params);
    }
    if (!rosidl_runtime_c__int16__Sequence__init(&ros_message->params, size)) {
      fprintf(stderr, "failed to create array for field 'params'");
      return false;
    }
    auto array_ptr = ros_message->params.data;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotont_msgs
size_t get_serialized_size_robotont_msgs__msg__LedModuleMode(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LedModuleMode__ros_msg_type * ros_message = static_cast<const _LedModuleMode__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: params
  {
    size_t array_size = ros_message->params.size;
    auto array_ptr = ros_message->params.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotont_msgs
size_t max_serialized_size_robotont_msgs__msg__LedModuleMode(
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

  // Field name: mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: params
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robotont_msgs__msg__LedModuleMode;
    is_plain =
      (
      offsetof(DataType, params) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotont_msgs
bool cdr_serialize_key_robotont_msgs__msg__LedModuleMode(
  const robotont_msgs__msg__LedModuleMode * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  // Field name: params
  {
    size_t size = ros_message->params.size;
    auto array_ptr = ros_message->params.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotont_msgs
size_t get_serialized_size_key_robotont_msgs__msg__LedModuleMode(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LedModuleMode__ros_msg_type * ros_message = static_cast<const _LedModuleMode__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: params
  {
    size_t array_size = ros_message->params.size;
    auto array_ptr = ros_message->params.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotont_msgs
size_t max_serialized_size_key_robotont_msgs__msg__LedModuleMode(
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
  // Field name: mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: params
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robotont_msgs__msg__LedModuleMode;
    is_plain =
      (
      offsetof(DataType, params) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _LedModuleMode__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const robotont_msgs__msg__LedModuleMode * ros_message = static_cast<const robotont_msgs__msg__LedModuleMode *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_robotont_msgs__msg__LedModuleMode(ros_message, cdr);
}

static bool _LedModuleMode__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  robotont_msgs__msg__LedModuleMode * ros_message = static_cast<robotont_msgs__msg__LedModuleMode *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_robotont_msgs__msg__LedModuleMode(cdr, ros_message);
}

static uint32_t _LedModuleMode__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robotont_msgs__msg__LedModuleMode(
      untyped_ros_message, 0));
}

static size_t _LedModuleMode__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_robotont_msgs__msg__LedModuleMode(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LedModuleMode = {
  "robotont_msgs::msg",
  "LedModuleMode",
  _LedModuleMode__cdr_serialize,
  _LedModuleMode__cdr_deserialize,
  _LedModuleMode__get_serialized_size,
  _LedModuleMode__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _LedModuleMode__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LedModuleMode,
  get_message_typesupport_handle_function,
  &robotont_msgs__msg__LedModuleMode__get_type_hash,
  &robotont_msgs__msg__LedModuleMode__get_type_description,
  &robotont_msgs__msg__LedModuleMode__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robotont_msgs, msg, LedModuleMode)() {
  return &_LedModuleMode__type_support;
}

#if defined(__cplusplus)
}
#endif
