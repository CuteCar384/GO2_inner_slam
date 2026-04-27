// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from unitree_go:msg/SportModeCmd.idl
// generated code does not contain a copyright notice
#include "unitree_go/msg/detail/sport_mode_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "unitree_go/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "unitree_go/msg/detail/sport_mode_cmd__struct.h"
#include "unitree_go/msg/detail/sport_mode_cmd__functions.h"
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

#include "unitree_go/msg/detail/bms_cmd__functions.h"  // bms_cmd
#include "unitree_go/msg/detail/path_point__functions.h"  // path_point

// forward declare type support functions

bool cdr_serialize_unitree_go__msg__BmsCmd(
  const unitree_go__msg__BmsCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_unitree_go__msg__BmsCmd(
  eprosima::fastcdr::Cdr & cdr,
  unitree_go__msg__BmsCmd * ros_message);

size_t get_serialized_size_unitree_go__msg__BmsCmd(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_unitree_go__msg__BmsCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_unitree_go__msg__BmsCmd(
  const unitree_go__msg__BmsCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_unitree_go__msg__BmsCmd(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_unitree_go__msg__BmsCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unitree_go, msg, BmsCmd)();

bool cdr_serialize_unitree_go__msg__PathPoint(
  const unitree_go__msg__PathPoint * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_unitree_go__msg__PathPoint(
  eprosima::fastcdr::Cdr & cdr,
  unitree_go__msg__PathPoint * ros_message);

size_t get_serialized_size_unitree_go__msg__PathPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_unitree_go__msg__PathPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_unitree_go__msg__PathPoint(
  const unitree_go__msg__PathPoint * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_unitree_go__msg__PathPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_unitree_go__msg__PathPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unitree_go, msg, PathPoint)();


using _SportModeCmd__ros_msg_type = unitree_go__msg__SportModeCmd;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
bool cdr_serialize_unitree_go__msg__SportModeCmd(
  const unitree_go__msg__SportModeCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  // Field name: gait_type
  {
    cdr << ros_message->gait_type;
  }

  // Field name: speed_level
  {
    cdr << ros_message->speed_level;
  }

  // Field name: foot_raise_height
  {
    cdr << ros_message->foot_raise_height;
  }

  // Field name: body_height
  {
    cdr << ros_message->body_height;
  }

  // Field name: position
  {
    size_t size = 2;
    auto array_ptr = ros_message->position;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: euler
  {
    size_t size = 3;
    auto array_ptr = ros_message->euler;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: velocity
  {
    size_t size = 2;
    auto array_ptr = ros_message->velocity;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: yaw_speed
  {
    cdr << ros_message->yaw_speed;
  }

  // Field name: bms_cmd
  {
    cdr_serialize_unitree_go__msg__BmsCmd(
      &ros_message->bms_cmd, cdr);
  }

  // Field name: path_point
  {
    size_t size = 30;
    auto array_ptr = ros_message->path_point;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_unitree_go__msg__PathPoint(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
bool cdr_deserialize_unitree_go__msg__SportModeCmd(
  eprosima::fastcdr::Cdr & cdr,
  unitree_go__msg__SportModeCmd * ros_message)
{
  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  // Field name: gait_type
  {
    cdr >> ros_message->gait_type;
  }

  // Field name: speed_level
  {
    cdr >> ros_message->speed_level;
  }

  // Field name: foot_raise_height
  {
    cdr >> ros_message->foot_raise_height;
  }

  // Field name: body_height
  {
    cdr >> ros_message->body_height;
  }

  // Field name: position
  {
    size_t size = 2;
    auto array_ptr = ros_message->position;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: euler
  {
    size_t size = 3;
    auto array_ptr = ros_message->euler;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: velocity
  {
    size_t size = 2;
    auto array_ptr = ros_message->velocity;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: yaw_speed
  {
    cdr >> ros_message->yaw_speed;
  }

  // Field name: bms_cmd
  {
    cdr_deserialize_unitree_go__msg__BmsCmd(cdr, &ros_message->bms_cmd);
  }

  // Field name: path_point
  {
    size_t size = 30;
    auto array_ptr = ros_message->path_point;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_unitree_go__msg__PathPoint(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
size_t get_serialized_size_unitree_go__msg__SportModeCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SportModeCmd__ros_msg_type * ros_message = static_cast<const _SportModeCmd__ros_msg_type *>(untyped_ros_message);
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

  // Field name: gait_type
  {
    size_t item_size = sizeof(ros_message->gait_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: speed_level
  {
    size_t item_size = sizeof(ros_message->speed_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: foot_raise_height
  {
    size_t item_size = sizeof(ros_message->foot_raise_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: body_height
  {
    size_t item_size = sizeof(ros_message->body_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: position
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->position;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: euler
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->euler;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: velocity
  {
    size_t array_size = 2;
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

  // Field name: bms_cmd
  current_alignment += get_serialized_size_unitree_go__msg__BmsCmd(
    &(ros_message->bms_cmd), current_alignment);

  // Field name: path_point
  {
    size_t array_size = 30;
    auto array_ptr = ros_message->path_point;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_unitree_go__msg__PathPoint(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
size_t max_serialized_size_unitree_go__msg__SportModeCmd(
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

  // Field name: gait_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: speed_level
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

  // Field name: body_height
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: position
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: euler
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: velocity
  {
    size_t array_size = 2;
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

  // Field name: bms_cmd
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_unitree_go__msg__BmsCmd(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: path_point
  {
    size_t array_size = 30;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_unitree_go__msg__PathPoint(
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
    using DataType = unitree_go__msg__SportModeCmd;
    is_plain =
      (
      offsetof(DataType, path_point) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
bool cdr_serialize_key_unitree_go__msg__SportModeCmd(
  const unitree_go__msg__SportModeCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  // Field name: gait_type
  {
    cdr << ros_message->gait_type;
  }

  // Field name: speed_level
  {
    cdr << ros_message->speed_level;
  }

  // Field name: foot_raise_height
  {
    cdr << ros_message->foot_raise_height;
  }

  // Field name: body_height
  {
    cdr << ros_message->body_height;
  }

  // Field name: position
  {
    size_t size = 2;
    auto array_ptr = ros_message->position;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: euler
  {
    size_t size = 3;
    auto array_ptr = ros_message->euler;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: velocity
  {
    size_t size = 2;
    auto array_ptr = ros_message->velocity;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: yaw_speed
  {
    cdr << ros_message->yaw_speed;
  }

  // Field name: bms_cmd
  {
    cdr_serialize_key_unitree_go__msg__BmsCmd(
      &ros_message->bms_cmd, cdr);
  }

  // Field name: path_point
  {
    size_t size = 30;
    auto array_ptr = ros_message->path_point;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_unitree_go__msg__PathPoint(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
size_t get_serialized_size_key_unitree_go__msg__SportModeCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SportModeCmd__ros_msg_type * ros_message = static_cast<const _SportModeCmd__ros_msg_type *>(untyped_ros_message);
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

  // Field name: gait_type
  {
    size_t item_size = sizeof(ros_message->gait_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: speed_level
  {
    size_t item_size = sizeof(ros_message->speed_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: foot_raise_height
  {
    size_t item_size = sizeof(ros_message->foot_raise_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: body_height
  {
    size_t item_size = sizeof(ros_message->body_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: position
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->position;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: euler
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->euler;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: velocity
  {
    size_t array_size = 2;
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

  // Field name: bms_cmd
  current_alignment += get_serialized_size_key_unitree_go__msg__BmsCmd(
    &(ros_message->bms_cmd), current_alignment);

  // Field name: path_point
  {
    size_t array_size = 30;
    auto array_ptr = ros_message->path_point;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_unitree_go__msg__PathPoint(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
size_t max_serialized_size_key_unitree_go__msg__SportModeCmd(
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

  // Field name: gait_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: speed_level
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

  // Field name: body_height
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: position
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: euler
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: velocity
  {
    size_t array_size = 2;
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

  // Field name: bms_cmd
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_unitree_go__msg__BmsCmd(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: path_point
  {
    size_t array_size = 30;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_unitree_go__msg__PathPoint(
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
    using DataType = unitree_go__msg__SportModeCmd;
    is_plain =
      (
      offsetof(DataType, path_point) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SportModeCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const unitree_go__msg__SportModeCmd * ros_message = static_cast<const unitree_go__msg__SportModeCmd *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_unitree_go__msg__SportModeCmd(ros_message, cdr);
}

static bool _SportModeCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  unitree_go__msg__SportModeCmd * ros_message = static_cast<unitree_go__msg__SportModeCmd *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_unitree_go__msg__SportModeCmd(cdr, ros_message);
}

static uint32_t _SportModeCmd__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_unitree_go__msg__SportModeCmd(
      untyped_ros_message, 0));
}

static size_t _SportModeCmd__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_unitree_go__msg__SportModeCmd(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SportModeCmd = {
  "unitree_go::msg",
  "SportModeCmd",
  _SportModeCmd__cdr_serialize,
  _SportModeCmd__cdr_deserialize,
  _SportModeCmd__get_serialized_size,
  _SportModeCmd__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SportModeCmd__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SportModeCmd,
  get_message_typesupport_handle_function,
  &unitree_go__msg__SportModeCmd__get_type_hash,
  &unitree_go__msg__SportModeCmd__get_type_description,
  &unitree_go__msg__SportModeCmd__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unitree_go, msg, SportModeCmd)() {
  return &_SportModeCmd__type_support;
}

#if defined(__cplusplus)
}
#endif
