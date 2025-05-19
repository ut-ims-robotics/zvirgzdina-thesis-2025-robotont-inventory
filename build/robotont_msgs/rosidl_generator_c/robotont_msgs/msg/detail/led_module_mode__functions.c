// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robotont_msgs:msg/LedModuleMode.idl
// generated code does not contain a copyright notice
#include "robotont_msgs/msg/detail/led_module_mode__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `params`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
robotont_msgs__msg__LedModuleMode__init(robotont_msgs__msg__LedModuleMode * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  // params
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->params, 0)) {
    robotont_msgs__msg__LedModuleMode__fini(msg);
    return false;
  }
  return true;
}

void
robotont_msgs__msg__LedModuleMode__fini(robotont_msgs__msg__LedModuleMode * msg)
{
  if (!msg) {
    return;
  }
  // mode
  // params
  rosidl_runtime_c__int16__Sequence__fini(&msg->params);
}

bool
robotont_msgs__msg__LedModuleMode__are_equal(const robotont_msgs__msg__LedModuleMode * lhs, const robotont_msgs__msg__LedModuleMode * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // params
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->params), &(rhs->params)))
  {
    return false;
  }
  return true;
}

bool
robotont_msgs__msg__LedModuleMode__copy(
  const robotont_msgs__msg__LedModuleMode * input,
  robotont_msgs__msg__LedModuleMode * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  output->mode = input->mode;
  // params
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->params), &(output->params)))
  {
    return false;
  }
  return true;
}

robotont_msgs__msg__LedModuleMode *
robotont_msgs__msg__LedModuleMode__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotont_msgs__msg__LedModuleMode * msg = (robotont_msgs__msg__LedModuleMode *)allocator.allocate(sizeof(robotont_msgs__msg__LedModuleMode), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robotont_msgs__msg__LedModuleMode));
  bool success = robotont_msgs__msg__LedModuleMode__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robotont_msgs__msg__LedModuleMode__destroy(robotont_msgs__msg__LedModuleMode * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robotont_msgs__msg__LedModuleMode__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robotont_msgs__msg__LedModuleMode__Sequence__init(robotont_msgs__msg__LedModuleMode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotont_msgs__msg__LedModuleMode * data = NULL;

  if (size) {
    data = (robotont_msgs__msg__LedModuleMode *)allocator.zero_allocate(size, sizeof(robotont_msgs__msg__LedModuleMode), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robotont_msgs__msg__LedModuleMode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robotont_msgs__msg__LedModuleMode__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robotont_msgs__msg__LedModuleMode__Sequence__fini(robotont_msgs__msg__LedModuleMode__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robotont_msgs__msg__LedModuleMode__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robotont_msgs__msg__LedModuleMode__Sequence *
robotont_msgs__msg__LedModuleMode__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotont_msgs__msg__LedModuleMode__Sequence * array = (robotont_msgs__msg__LedModuleMode__Sequence *)allocator.allocate(sizeof(robotont_msgs__msg__LedModuleMode__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robotont_msgs__msg__LedModuleMode__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robotont_msgs__msg__LedModuleMode__Sequence__destroy(robotont_msgs__msg__LedModuleMode__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robotont_msgs__msg__LedModuleMode__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robotont_msgs__msg__LedModuleMode__Sequence__are_equal(const robotont_msgs__msg__LedModuleMode__Sequence * lhs, const robotont_msgs__msg__LedModuleMode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robotont_msgs__msg__LedModuleMode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robotont_msgs__msg__LedModuleMode__Sequence__copy(
  const robotont_msgs__msg__LedModuleMode__Sequence * input,
  robotont_msgs__msg__LedModuleMode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robotont_msgs__msg__LedModuleMode);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robotont_msgs__msg__LedModuleMode * data =
      (robotont_msgs__msg__LedModuleMode *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robotont_msgs__msg__LedModuleMode__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robotont_msgs__msg__LedModuleMode__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robotont_msgs__msg__LedModuleMode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
