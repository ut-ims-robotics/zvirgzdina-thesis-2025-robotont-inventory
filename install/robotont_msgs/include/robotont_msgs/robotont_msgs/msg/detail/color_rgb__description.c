// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotont_msgs:msg/ColorRGB.idl
// generated code does not contain a copyright notice

#include "robotont_msgs/msg/detail/color_rgb__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotont_msgs
const rosidl_type_hash_t *
robotont_msgs__msg__ColorRGB__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbe, 0x4e, 0xe4, 0x9a, 0xe2, 0x23, 0x82, 0x04,
      0x4e, 0xf8, 0x5a, 0x09, 0x31, 0xe3, 0x6f, 0xd6,
      0x79, 0x16, 0x73, 0xb1, 0x17, 0xf8, 0xfd, 0x4f,
      0x8a, 0x1a, 0x5a, 0xd6, 0x80, 0xf0, 0x48, 0x0b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robotont_msgs__msg__ColorRGB__TYPE_NAME[] = "robotont_msgs/msg/ColorRGB";

// Define type names, field names, and default values
static char robotont_msgs__msg__ColorRGB__FIELD_NAME__r[] = "r";
static char robotont_msgs__msg__ColorRGB__FIELD_NAME__g[] = "g";
static char robotont_msgs__msg__ColorRGB__FIELD_NAME__b[] = "b";

static rosidl_runtime_c__type_description__Field robotont_msgs__msg__ColorRGB__FIELDS[] = {
  {
    {robotont_msgs__msg__ColorRGB__FIELD_NAME__r, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotont_msgs__msg__ColorRGB__FIELD_NAME__g, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotont_msgs__msg__ColorRGB__FIELD_NAME__b, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotont_msgs__msg__ColorRGB__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotont_msgs__msg__ColorRGB__TYPE_NAME, 26, 26},
      {robotont_msgs__msg__ColorRGB__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#Red, Green, Blue intensities in range of 0-255.\n"
  "uint8 r\n"
  "uint8 g\n"
  "uint8 b";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotont_msgs__msg__ColorRGB__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotont_msgs__msg__ColorRGB__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 73, 73},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotont_msgs__msg__ColorRGB__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotont_msgs__msg__ColorRGB__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
