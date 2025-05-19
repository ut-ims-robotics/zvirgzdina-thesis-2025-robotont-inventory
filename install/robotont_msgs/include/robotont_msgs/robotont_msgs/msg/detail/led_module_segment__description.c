// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotont_msgs:msg/LedModuleSegment.idl
// generated code does not contain a copyright notice

#include "robotont_msgs/msg/detail/led_module_segment__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotont_msgs
const rosidl_type_hash_t *
robotont_msgs__msg__LedModuleSegment__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9a, 0x55, 0xbf, 0x9d, 0xf1, 0x05, 0xf6, 0x09,
      0x67, 0x1e, 0x3f, 0x39, 0xf9, 0xd3, 0xf6, 0x13,
      0x54, 0x39, 0x06, 0x74, 0x21, 0x33, 0xd7, 0x01,
      0x5d, 0xf0, 0x54, 0xdd, 0xc6, 0x04, 0x0e, 0x53,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "robotont_msgs/msg/detail/color_rgb__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t robotont_msgs__msg__ColorRGB__EXPECTED_HASH = {1, {
    0xbe, 0x4e, 0xe4, 0x9a, 0xe2, 0x23, 0x82, 0x04,
    0x4e, 0xf8, 0x5a, 0x09, 0x31, 0xe3, 0x6f, 0xd6,
    0x79, 0x16, 0x73, 0xb1, 0x17, 0xf8, 0xfd, 0x4f,
    0x8a, 0x1a, 0x5a, 0xd6, 0x80, 0xf0, 0x48, 0x0b,
  }};
#endif

static char robotont_msgs__msg__LedModuleSegment__TYPE_NAME[] = "robotont_msgs/msg/LedModuleSegment";
static char robotont_msgs__msg__ColorRGB__TYPE_NAME[] = "robotont_msgs/msg/ColorRGB";

// Define type names, field names, and default values
static char robotont_msgs__msg__LedModuleSegment__FIELD_NAME__idx_start[] = "idx_start";
static char robotont_msgs__msg__LedModuleSegment__FIELD_NAME__idx_end[] = "idx_end";
static char robotont_msgs__msg__LedModuleSegment__FIELD_NAME__colors[] = "colors";

static rosidl_runtime_c__type_description__Field robotont_msgs__msg__LedModuleSegment__FIELDS[] = {
  {
    {robotont_msgs__msg__LedModuleSegment__FIELD_NAME__idx_start, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotont_msgs__msg__LedModuleSegment__FIELD_NAME__idx_end, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotont_msgs__msg__LedModuleSegment__FIELD_NAME__colors, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {robotont_msgs__msg__ColorRGB__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robotont_msgs__msg__LedModuleSegment__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {robotont_msgs__msg__ColorRGB__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotont_msgs__msg__LedModuleSegment__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotont_msgs__msg__LedModuleSegment__TYPE_NAME, 34, 34},
      {robotont_msgs__msg__LedModuleSegment__FIELDS, 3, 3},
    },
    {robotont_msgs__msg__LedModuleSegment__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&robotont_msgs__msg__ColorRGB__EXPECTED_HASH, robotont_msgs__msg__ColorRGB__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = robotont_msgs__msg__ColorRGB__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32 idx_start\n"
  "uint32 idx_end\n"
  "robotont_msgs/ColorRGB[] colors";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotont_msgs__msg__LedModuleSegment__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotont_msgs__msg__LedModuleSegment__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 63, 63},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotont_msgs__msg__LedModuleSegment__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotont_msgs__msg__LedModuleSegment__get_individual_type_description_source(NULL),
    sources[1] = *robotont_msgs__msg__ColorRGB__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
