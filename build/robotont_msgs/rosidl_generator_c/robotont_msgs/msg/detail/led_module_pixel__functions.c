// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robotont_msgs:msg/LedModulePixel.idl
// generated code does not contain a copyright notice
#include "robotont_msgs/msg/detail/led_module_pixel__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `color`
#include "robotont_msgs/msg/detail/color_rgb__functions.h"

bool
robotont_msgs__msg__LedModulePixel__init(robotont_msgs__msg__LedModulePixel * msg)
{
  if (!msg) {
    return false;
  }
  // idx
  // color
  if (!robotont_msgs__msg__ColorRGB__init(&msg->color)) {
    robotont_msgs__msg__LedModulePixel__fini(msg);
    return false;
  }
  return true;
}

void
robotont_msgs__msg__LedModulePixel__fini(robotont_msgs__msg__LedModulePixel * msg)
{
  if (!msg) {
    return;
  }
  // idx
  // color
  robotont_msgs__msg__ColorRGB__fini(&msg->color);
}

bool
robotont_msgs__msg__LedModulePixel__are_equal(const robotont_msgs__msg__LedModulePixel * lhs, const robotont_msgs__msg__LedModulePixel * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // idx
  if (lhs->idx != rhs->idx) {
    return false;
  }
  // color
  if (!robotont_msgs__msg__ColorRGB__are_equal(
      &(lhs->color), &(rhs->color)))
  {
    return false;
  }
  return true;
}

bool
robotont_msgs__msg__LedModulePixel__copy(
  const robotont_msgs__msg__LedModulePixel * input,
  robotont_msgs__msg__LedModulePixel * output)
{
  if (!input || !output) {
    return false;
  }
  // idx
  output->idx = input->idx;
  // color
  if (!robotont_msgs__msg__ColorRGB__copy(
      &(input->color), &(output->color)))
  {
    return false;
  }
  return true;
}

robotont_msgs__msg__LedModulePixel *
robotont_msgs__msg__LedModulePixel__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotont_msgs__msg__LedModulePixel * msg = (robotont_msgs__msg__LedModulePixel *)allocator.allocate(sizeof(robotont_msgs__msg__LedModulePixel), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robotont_msgs__msg__LedModulePixel));
  bool success = robotont_msgs__msg__LedModulePixel__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robotont_msgs__msg__LedModulePixel__destroy(robotont_msgs__msg__LedModulePixel * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robotont_msgs__msg__LedModulePixel__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robotont_msgs__msg__LedModulePixel__Sequence__init(robotont_msgs__msg__LedModulePixel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotont_msgs__msg__LedModulePixel * data = NULL;

  if (size) {
    data = (robotont_msgs__msg__LedModulePixel *)allocator.zero_allocate(size, sizeof(robotont_msgs__msg__LedModulePixel), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robotont_msgs__msg__LedModulePixel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robotont_msgs__msg__LedModulePixel__fini(&data[i - 1]);
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
robotont_msgs__msg__LedModulePixel__Sequence__fini(robotont_msgs__msg__LedModulePixel__Sequence * array)
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
      robotont_msgs__msg__LedModulePixel__fini(&array->data[i]);
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

robotont_msgs__msg__LedModulePixel__Sequence *
robotont_msgs__msg__LedModulePixel__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotont_msgs__msg__LedModulePixel__Sequence * array = (robotont_msgs__msg__LedModulePixel__Sequence *)allocator.allocate(sizeof(robotont_msgs__msg__LedModulePixel__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robotont_msgs__msg__LedModulePixel__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robotont_msgs__msg__LedModulePixel__Sequence__destroy(robotont_msgs__msg__LedModulePixel__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robotont_msgs__msg__LedModulePixel__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robotont_msgs__msg__LedModulePixel__Sequence__are_equal(const robotont_msgs__msg__LedModulePixel__Sequence * lhs, const robotont_msgs__msg__LedModulePixel__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robotont_msgs__msg__LedModulePixel__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robotont_msgs__msg__LedModulePixel__Sequence__copy(
  const robotont_msgs__msg__LedModulePixel__Sequence * input,
  robotont_msgs__msg__LedModulePixel__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robotont_msgs__msg__LedModulePixel);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robotont_msgs__msg__LedModulePixel * data =
      (robotont_msgs__msg__LedModulePixel *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robotont_msgs__msg__LedModulePixel__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robotont_msgs__msg__LedModulePixel__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robotont_msgs__msg__LedModulePixel__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
