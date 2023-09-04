// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from decawave_interfaces:msg/DecaRange.idl
// generated code does not contain a copyright notice

#ifndef DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE__STRUCT_H_
#define DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'tag_id'
// Member 'anch_id1'
// Member 'anch_id2'
// Member 'anch_id3'
// Member 'anch_id4'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/DecaRange in the package decawave_interfaces.
typedef struct decawave_interfaces__msg__DecaRange
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String tag_id;
  rosidl_runtime_c__String anch_id1;
  float range1;
  rosidl_runtime_c__String anch_id2;
  float range2;
  rosidl_runtime_c__String anch_id3;
  float range3;
  rosidl_runtime_c__String anch_id4;
  float range4;
} decawave_interfaces__msg__DecaRange;

// Struct for a sequence of decawave_interfaces__msg__DecaRange.
typedef struct decawave_interfaces__msg__DecaRange__Sequence
{
  decawave_interfaces__msg__DecaRange * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} decawave_interfaces__msg__DecaRange__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE__STRUCT_H_
