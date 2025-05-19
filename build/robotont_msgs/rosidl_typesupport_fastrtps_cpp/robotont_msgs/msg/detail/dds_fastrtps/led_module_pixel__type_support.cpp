// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from robotont_msgs:msg/LedModulePixel.idl
// generated code does not contain a copyright notice
#include "robotont_msgs/msg/detail/led_module_pixel__rosidl_typesupport_fastrtps_cpp.hpp"
#include "robotont_msgs/msg/detail/led_module_pixel__functions.h"
#include "robotont_msgs/msg/detail/led_module_pixel__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace robotont_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const robotont_msgs::msg::ColorRGB &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  robotont_msgs::msg::ColorRGB &);
size_t get_serialized_size(
  const robotont_msgs::msg::ColorRGB &,
  size_t current_alignment);
size_t
max_serialized_size_ColorRGB(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const robotont_msgs::msg::ColorRGB &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const robotont_msgs::msg::ColorRGB &,
  size_t current_alignment);
size_t
max_serialized_size_key_ColorRGB(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace robotont_msgs


namespace robotont_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robotont_msgs
cdr_serialize(
  const robotont_msgs::msg::LedModulePixel & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: idx
  cdr << ros_message.idx;

  // Member: color
  robotont_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.color,
    cdr);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robotont_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robotont_msgs::msg::LedModulePixel & ros_message)
{
  // Member: idx
  cdr >> ros_message.idx;

  // Member: color
  robotont_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.color);

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robotont_msgs
get_serialized_size(
  const robotont_msgs::msg::LedModulePixel & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: idx
  {
    size_t item_size = sizeof(ros_message.idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: color
  current_alignment +=
    robotont_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.color, current_alignment);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robotont_msgs
max_serialized_size_LedModulePixel(
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

  // Member: idx
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: color
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        robotont_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ColorRGB(
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
    using DataType = robotont_msgs::msg::LedModulePixel;
    is_plain =
      (
      offsetof(DataType, color) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robotont_msgs
cdr_serialize_key(
  const robotont_msgs::msg::LedModulePixel & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: idx
  cdr << ros_message.idx;

  // Member: color
  robotont_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.color,
    cdr);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robotont_msgs
get_serialized_size_key(
  const robotont_msgs::msg::LedModulePixel & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: idx
  {
    size_t item_size = sizeof(ros_message.idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: color
  current_alignment +=
    robotont_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.color, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robotont_msgs
max_serialized_size_key_LedModulePixel(
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

  // Member: idx
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: color
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        robotont_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_ColorRGB(
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
    using DataType = robotont_msgs::msg::LedModulePixel;
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
  auto typed_message =
    static_cast<const robotont_msgs::msg::LedModulePixel *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LedModulePixel__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robotont_msgs::msg::LedModulePixel *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LedModulePixel__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robotont_msgs::msg::LedModulePixel *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LedModulePixel__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LedModulePixel(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LedModulePixel__callbacks = {
  "robotont_msgs::msg",
  "LedModulePixel",
  _LedModulePixel__cdr_serialize,
  _LedModulePixel__cdr_deserialize,
  _LedModulePixel__get_serialized_size,
  _LedModulePixel__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _LedModulePixel__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LedModulePixel__callbacks,
  get_message_typesupport_handle_function,
  &robotont_msgs__msg__LedModulePixel__get_type_hash,
  &robotont_msgs__msg__LedModulePixel__get_type_description,
  &robotont_msgs__msg__LedModulePixel__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace robotont_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robotont_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<robotont_msgs::msg::LedModulePixel>()
{
  return &robotont_msgs::msg::typesupport_fastrtps_cpp::_LedModulePixel__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robotont_msgs, msg, LedModulePixel)() {
  return &robotont_msgs::msg::typesupport_fastrtps_cpp::_LedModulePixel__handle;
}

#ifdef __cplusplus
}
#endif
