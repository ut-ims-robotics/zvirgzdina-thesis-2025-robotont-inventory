// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robotont_msgs:msg/PowerSupply.idl
// generated code does not contain a copyright notice
#include "robotont_msgs/msg/detail/power_supply__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robotont_msgs__msg__PowerSupply__init(robotont_msgs__msg__PowerSupply * msg)
{
  if (!msg) {
    return false;
  }
  // current
  // voltage
  // estop_pressed
  return true;
}

void
robotont_msgs__msg__PowerSupply__fini(robotont_msgs__msg__PowerSupply * msg)
{
  if (!msg) {
    return;
  }
  // current
  // voltage
  // estop_pressed
}

bool
robotont_msgs__msg__PowerSupply__are_equal(const robotont_msgs__msg__PowerSupply * lhs, const robotont_msgs__msg__PowerSupply * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current
  if (lhs->current != rhs->current) {
    return false;
  }
  // voltage
  if (lhs->voltage != rhs->voltage) {
    return false;
  }
  // estop_pressed
  if (lhs->estop_pressed != rhs->estop_pressed) {
    return false;
  }
  return true;
}

bool
robotont_msgs__msg__PowerSupply__copy(
  const robotont_msgs__msg__PowerSupply * input,
  robotont_msgs__msg__PowerSupply * output)
{
  if (!input || !output) {
    return false;
  }
  // current
  output->current = input->current;
  // voltage
  output->voltage = input->voltage;
  // estop_pressed
  output->estop_pressed = input->estop_pressed;
  return true;
}

robotont_msgs__msg__PowerSupply *
robotont_msgs__msg__PowerSupply__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotont_msgs__msg__PowerSupply * msg = (robotont_msgs__msg__PowerSupply *)allocator.allocate(sizeof(robotont_msgs__msg__PowerSupply), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robotont_msgs__msg__PowerSupply));
  bool success = robotont_msgs__msg__PowerSupply__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robotont_msgs__msg__PowerSupply__destroy(robotont_msgs__msg__PowerSupply * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robotont_msgs__msg__PowerSupply__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robotont_msgs__msg__PowerSupply__Sequence__init(robotont_msgs__msg__PowerSupply__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotont_msgs__msg__PowerSupply * data = NULL;

  if (size) {
    data = (robotont_msgs__msg__PowerSupply *)allocator.zero_allocate(size, sizeof(robotont_msgs__msg__PowerSupply), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robotont_msgs__msg__PowerSupply__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robotont_msgs__msg__PowerSupply__fini(&data[i - 1]);
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
robotont_msgs__msg__PowerSupply__Sequence__fini(robotont_msgs__msg__PowerSupply__Sequence * array)
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
      robotont_msgs__msg__PowerSupply__fini(&array->data[i]);
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

robotont_msgs__msg__PowerSupply__Sequence *
robotont_msgs__msg__PowerSupply__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotont_msgs__msg__PowerSupply__Sequence * array = (robotont_msgs__msg__PowerSupply__Sequence *)allocator.allocate(sizeof(robotont_msgs__msg__PowerSupply__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robotont_msgs__msg__PowerSupply__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robotont_msgs__msg__PowerSupply__Sequence__destroy(robotont_msgs__msg__PowerSupply__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robotont_msgs__msg__PowerSupply__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robotont_msgs__msg__PowerSupply__Sequence__are_equal(const robotont_msgs__msg__PowerSupply__Sequence * lhs, const robotont_msgs__msg__PowerSupply__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robotont_msgs__msg__PowerSupply__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robotont_msgs__msg__PowerSupply__Sequence__copy(
  const robotont_msgs__msg__PowerSupply__Sequence * input,
  robotont_msgs__msg__PowerSupply__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robotont_msgs__msg__PowerSupply);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robotont_msgs__msg__PowerSupply * data =
      (robotont_msgs__msg__PowerSupply *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robotont_msgs__msg__PowerSupply__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robotont_msgs__msg__PowerSupply__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robotont_msgs__msg__PowerSupply__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
