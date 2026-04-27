// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from unitree_go:msg/SportModeState.idl
// generated code does not contain a copyright notice
#include "unitree_go/msg/detail/sport_mode_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "unitree_go/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "unitree_go/msg/detail/sport_mode_state__struct.h"
#include "unitree_go/msg/detail/sport_mode_state__functions.h"
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

#include "unitree_go/msg/detail/imu_state__functions.h"  // imu_state
#include "unitree_go/msg/detail/time_spec__functions.h"  // stamp

// forward declare type support functions

bool cdr_serialize_unitree_go__msg__IMUState(
  const unitree_go__msg__IMUState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_unitree_go__msg__IMUState(
  eprosima::fastcdr::Cdr & cdr,
  unitree_go__msg__IMUState * ros_message);

size_t get_serialized_size_unitree_go__msg__IMUState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_unitree_go__msg__IMUState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_unitree_go__msg__IMUState(
  const unitree_go__msg__IMUState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_unitree_go__msg__IMUState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_unitree_go__msg__IMUState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unitree_go, msg, IMUState)();

bool cdr_serialize_unitree_go__msg__TimeSpec(
  const unitree_go__msg__TimeSpec * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_unitree_go__msg__TimeSpec(
  eprosima::fastcdr::Cdr & cdr,
  unitree_go__msg__TimeSpec * ros_message);

size_t get_serialized_size_unitree_go__msg__TimeSpec(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_unitree_go__msg__TimeSpec(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_unitree_go__msg__TimeSpec(
  const unitree_go__msg__TimeSpec * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_unitree_go__msg__TimeSpec(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_unitree_go__msg__TimeSpec(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unitree_go, msg, TimeSpec)();


using _SportModeState__ros_msg_type = unitree_go__msg__SportModeState;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
bool cdr_serialize_unitree_go__msg__SportModeState(
  const unitree_go__msg__SportModeState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: stamp
  {
    cdr_serialize_unitree_go__msg__TimeSpec(
      &ros_message->stamp, cdr);
  }

  // Field name: error_code
  {
    cdr << ros_message->error_code;
  }

  // Field name: imu_state
  {
    cdr_serialize_unitree_go__msg__IMUState(
      &ros_message->imu_state, cdr);
  }

  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  // Field name: progress
  {
    cdr << ros_message->progress;
  }

  // Field name: gait_type
  {
    cdr << ros_message->gait_type;
  }

  // Field name: foot_raise_height
  {
    cdr << ros_message->foot_raise_height;
  }

  // Field name: position
  {
    size_t size = 3;
    auto array_ptr = ros_message->position;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: body_height
  {
    cdr << ros_message->body_height;
  }

  // Field name: velocity
  {
    size_t size = 3;
    auto array_ptr = ros_message->velocity;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: yaw_speed
  {
    cdr << ros_message->yaw_speed;
  }

  // Field name: range_obstacle
  {
    size_t size = 4;
    auto array_ptr = ros_message->range_obstacle;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: foot_force
  {
    size_t size = 4;
    auto array_ptr = ros_message->foot_force;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: foot_position_body
  {
    size_t size = 12;
    auto array_ptr = ros_message->foot_position_body;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: foot_speed_body
  {
    size_t size = 12;
    auto array_ptr = ros_message->foot_speed_body;
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
bool cdr_deserialize_unitree_go__msg__SportModeState(
  eprosima::fastcdr::Cdr & cdr,
  unitree_go__msg__SportModeState * ros_message)
{
  // Field name: stamp
  {
    cdr_deserialize_unitree_go__msg__TimeSpec(cdr, &ros_message->stamp);
  }

  // Field name: error_code
  {
    cdr >> ros_message->error_code;
  }

  // Field name: imu_state
  {
    cdr_deserialize_unitree_go__msg__IMUState(cdr, &ros_message->imu_state);
  }

  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  // Field name: progress
  {
    cdr >> ros_message->progress;
  }

  // Field name: gait_type
  {
    cdr >> ros_message->gait_type;
  }

  // Field name: foot_raise_height
  {
    cdr >> ros_message->foot_raise_height;
  }

  // Field name: position
  {
    size_t size = 3;
    auto array_ptr = ros_message->position;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: body_height
  {
    cdr >> ros_message->body_height;
  }

  // Field name: velocity
  {
    size_t size = 3;
    auto array_ptr = ros_message->velocity;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: yaw_speed
  {
    cdr >> ros_message->yaw_speed;
  }

  // Field name: range_obstacle
  {
    size_t size = 4;
    auto array_ptr = ros_message->range_obstacle;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: foot_force
  {
    size_t size = 4;
    auto array_ptr = ros_message->foot_force;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: foot_position_body
  {
    size_t size = 12;
    auto array_ptr = ros_message->foot_position_body;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: foot_speed_body
  {
    size_t size = 12;
    auto array_ptr = ros_message->foot_speed_body;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
size_t get_serialized_size_unitree_go__msg__SportModeState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SportModeState__ros_msg_type * ros_message = static_cast<const _SportModeState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: stamp
  current_alignment += get_serialized_size_unitree_go__msg__TimeSpec(
    &(ros_message->stamp), current_alignment);

  // Field name: error_code
  {
    size_t item_size = sizeof(ros_message->error_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: imu_state
  current_alignment += get_serialized_size_unitree_go__msg__IMUState(
    &(ros_message->imu_state), current_alignment);

  // Field name: mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: progress
  {
    size_t item_size = sizeof(ros_message->progress);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gait_type
  {
    size_t item_size = sizeof(ros_message->gait_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: foot_raise_height
  {
    size_t item_size = sizeof(ros_message->foot_raise_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: position
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->position;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: body_height
  {
    size_t item_size = sizeof(ros_message->body_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: velocity
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->velocity;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: yaw_speed
  {
    size_t item_size = sizeof(ros_message->yaw_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: range_obstacle
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->range_obstacle;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: foot_force
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->foot_force;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: foot_position_body
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->foot_position_body;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: foot_speed_body
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->foot_speed_body;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
size_t max_serialized_size_unitree_go__msg__SportModeState(
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

  // Field name: stamp
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_unitree_go__msg__TimeSpec(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: error_code
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: imu_state
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_unitree_go__msg__IMUState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: progress
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: gait_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: foot_raise_height
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: position
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: body_height
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: velocity
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: yaw_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: range_obstacle
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: foot_force
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: foot_position_body
  {
    size_t array_size = 12;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: foot_speed_body
  {
    size_t array_size = 12;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = unitree_go__msg__SportModeState;
    is_plain =
      (
      offsetof(DataType, foot_speed_body) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
bool cdr_serialize_key_unitree_go__msg__SportModeState(
  const unitree_go__msg__SportModeState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: stamp
  {
    cdr_serialize_key_unitree_go__msg__TimeSpec(
      &ros_message->stamp, cdr);
  }

  // Field name: error_code
  {
    cdr << ros_message->error_code;
  }

  // Field name: imu_state
  {
    cdr_serialize_key_unitree_go__msg__IMUState(
      &ros_message->imu_state, cdr);
  }

  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  // Field name: progress
  {
    cdr << ros_message->progress;
  }

  // Field name: gait_type
  {
    cdr << ros_message->gait_type;
  }

  // Field name: foot_raise_height
  {
    cdr << ros_message->foot_raise_height;
  }

  // Field name: position
  {
    size_t size = 3;
    auto array_ptr = ros_message->position;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: body_height
  {
    cdr << ros_message->body_height;
  }

  // Field name: velocity
  {
    size_t size = 3;
    auto array_ptr = ros_message->velocity;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: yaw_speed
  {
    cdr << ros_message->yaw_speed;
  }

  // Field name: range_obstacle
  {
    size_t size = 4;
    auto array_ptr = ros_message->range_obstacle;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: foot_force
  {
    size_t size = 4;
    auto array_ptr = ros_message->foot_force;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: foot_position_body
  {
    size_t size = 12;
    auto array_ptr = ros_message->foot_position_body;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: foot_speed_body
  {
    size_t size = 12;
    auto array_ptr = ros_message->foot_speed_body;
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
size_t get_serialized_size_key_unitree_go__msg__SportModeState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SportModeState__ros_msg_type * ros_message = static_cast<const _SportModeState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: stamp
  current_alignment += get_serialized_size_key_unitree_go__msg__TimeSpec(
    &(ros_message->stamp), current_alignment);

  // Field name: error_code
  {
    size_t item_size = sizeof(ros_message->error_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: imu_state
  current_alignment += get_serialized_size_key_unitree_go__msg__IMUState(
    &(ros_message->imu_state), current_alignment);

  // Field name: mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: progress
  {
    size_t item_size = sizeof(ros_message->progress);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gait_type
  {
    size_t item_size = sizeof(ros_message->gait_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: foot_raise_height
  {
    size_t item_size = sizeof(ros_message->foot_raise_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: position
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->position;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: body_height
  {
    size_t item_size = sizeof(ros_message->body_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: velocity
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->velocity;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: yaw_speed
  {
    size_t item_size = sizeof(ros_message->yaw_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: range_obstacle
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->range_obstacle;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: foot_force
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->foot_force;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: foot_position_body
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->foot_position_body;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: foot_speed_body
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->foot_speed_body;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
size_t max_serialized_size_key_unitree_go__msg__SportModeState(
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
  // Field name: stamp
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_unitree_go__msg__TimeSpec(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: error_code
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: imu_state
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_unitree_go__msg__IMUState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: progress
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: gait_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: foot_raise_height
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: position
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: body_height
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: velocity
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: yaw_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: range_obstacle
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: foot_force
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: foot_position_body
  {
    size_t array_size = 12;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: foot_speed_body
  {
    size_t array_size = 12;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = unitree_go__msg__SportModeState;
    is_plain =
      (
      offsetof(DataType, foot_speed_body) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SportModeState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const unitree_go__msg__SportModeState * ros_message = static_cast<const unitree_go__msg__SportModeState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_unitree_go__msg__SportModeState(ros_message, cdr);
}

static bool _SportModeState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  unitree_go__msg__SportModeState * ros_message = static_cast<unitree_go__msg__SportModeState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_unitree_go__msg__SportModeState(cdr, ros_message);
}

static uint32_t _SportModeState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_unitree_go__msg__SportModeState(
      untyped_ros_message, 0));
}

static size_t _SportModeState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_unitree_go__msg__SportModeState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SportModeState = {
  "unitree_go::msg",
  "SportModeState",
  _SportModeState__cdr_serialize,
  _SportModeState__cdr_deserialize,
  _SportModeState__get_serialized_size,
  _SportModeState__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SportModeState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SportModeState,
  get_message_typesupport_handle_function,
  &unitree_go__msg__SportModeState__get_type_hash,
  &unitree_go__msg__SportModeState__get_type_description,
  &unitree_go__msg__SportModeState__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unitree_go, msg, SportModeState)() {
  return &_SportModeState__type_support;
}

#if defined(__cplusplus)
}
#endif
