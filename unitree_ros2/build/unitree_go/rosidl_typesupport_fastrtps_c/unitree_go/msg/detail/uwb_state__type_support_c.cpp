// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from unitree_go:msg/UwbState.idl
// generated code does not contain a copyright notice
#include "unitree_go/msg/detail/uwb_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "unitree_go/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "unitree_go/msg/detail/uwb_state__struct.h"
#include "unitree_go/msg/detail/uwb_state__functions.h"
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


// forward declare type support functions


using _UwbState__ros_msg_type = unitree_go__msg__UwbState;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
bool cdr_serialize_unitree_go__msg__UwbState(
  const unitree_go__msg__UwbState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: version
  {
    size_t size = 2;
    auto array_ptr = ros_message->version;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: channel
  {
    cdr << ros_message->channel;
  }

  // Field name: joy_mode
  {
    cdr << ros_message->joy_mode;
  }

  // Field name: orientation_est
  {
    cdr << ros_message->orientation_est;
  }

  // Field name: pitch_est
  {
    cdr << ros_message->pitch_est;
  }

  // Field name: distance_est
  {
    cdr << ros_message->distance_est;
  }

  // Field name: yaw_est
  {
    cdr << ros_message->yaw_est;
  }

  // Field name: tag_roll
  {
    cdr << ros_message->tag_roll;
  }

  // Field name: tag_pitch
  {
    cdr << ros_message->tag_pitch;
  }

  // Field name: tag_yaw
  {
    cdr << ros_message->tag_yaw;
  }

  // Field name: base_roll
  {
    cdr << ros_message->base_roll;
  }

  // Field name: base_pitch
  {
    cdr << ros_message->base_pitch;
  }

  // Field name: base_yaw
  {
    cdr << ros_message->base_yaw;
  }

  // Field name: joystick
  {
    size_t size = 2;
    auto array_ptr = ros_message->joystick;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: error_state
  {
    cdr << ros_message->error_state;
  }

  // Field name: buttons
  {
    cdr << ros_message->buttons;
  }

  // Field name: enabled_from_app
  {
    cdr << ros_message->enabled_from_app;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
bool cdr_deserialize_unitree_go__msg__UwbState(
  eprosima::fastcdr::Cdr & cdr,
  unitree_go__msg__UwbState * ros_message)
{
  // Field name: version
  {
    size_t size = 2;
    auto array_ptr = ros_message->version;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: channel
  {
    cdr >> ros_message->channel;
  }

  // Field name: joy_mode
  {
    cdr >> ros_message->joy_mode;
  }

  // Field name: orientation_est
  {
    cdr >> ros_message->orientation_est;
  }

  // Field name: pitch_est
  {
    cdr >> ros_message->pitch_est;
  }

  // Field name: distance_est
  {
    cdr >> ros_message->distance_est;
  }

  // Field name: yaw_est
  {
    cdr >> ros_message->yaw_est;
  }

  // Field name: tag_roll
  {
    cdr >> ros_message->tag_roll;
  }

  // Field name: tag_pitch
  {
    cdr >> ros_message->tag_pitch;
  }

  // Field name: tag_yaw
  {
    cdr >> ros_message->tag_yaw;
  }

  // Field name: base_roll
  {
    cdr >> ros_message->base_roll;
  }

  // Field name: base_pitch
  {
    cdr >> ros_message->base_pitch;
  }

  // Field name: base_yaw
  {
    cdr >> ros_message->base_yaw;
  }

  // Field name: joystick
  {
    size_t size = 2;
    auto array_ptr = ros_message->joystick;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: error_state
  {
    cdr >> ros_message->error_state;
  }

  // Field name: buttons
  {
    cdr >> ros_message->buttons;
  }

  // Field name: enabled_from_app
  {
    cdr >> ros_message->enabled_from_app;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
size_t get_serialized_size_unitree_go__msg__UwbState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UwbState__ros_msg_type * ros_message = static_cast<const _UwbState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: version
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->version;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: channel
  {
    size_t item_size = sizeof(ros_message->channel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joy_mode
  {
    size_t item_size = sizeof(ros_message->joy_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: orientation_est
  {
    size_t item_size = sizeof(ros_message->orientation_est);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pitch_est
  {
    size_t item_size = sizeof(ros_message->pitch_est);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: distance_est
  {
    size_t item_size = sizeof(ros_message->distance_est);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: yaw_est
  {
    size_t item_size = sizeof(ros_message->yaw_est);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tag_roll
  {
    size_t item_size = sizeof(ros_message->tag_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tag_pitch
  {
    size_t item_size = sizeof(ros_message->tag_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tag_yaw
  {
    size_t item_size = sizeof(ros_message->tag_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: base_roll
  {
    size_t item_size = sizeof(ros_message->base_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: base_pitch
  {
    size_t item_size = sizeof(ros_message->base_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: base_yaw
  {
    size_t item_size = sizeof(ros_message->base_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joystick
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->joystick;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: error_state
  {
    size_t item_size = sizeof(ros_message->error_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: buttons
  {
    size_t item_size = sizeof(ros_message->buttons);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: enabled_from_app
  {
    size_t item_size = sizeof(ros_message->enabled_from_app);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
size_t max_serialized_size_unitree_go__msg__UwbState(
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

  // Field name: version
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: channel
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: joy_mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: orientation_est
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pitch_est
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: distance_est
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: yaw_est
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: tag_roll
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: tag_pitch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: tag_yaw
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: base_roll
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: base_pitch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: base_yaw
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: joystick
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: error_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: buttons
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: enabled_from_app
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = unitree_go__msg__UwbState;
    is_plain =
      (
      offsetof(DataType, enabled_from_app) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
bool cdr_serialize_key_unitree_go__msg__UwbState(
  const unitree_go__msg__UwbState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: version
  {
    size_t size = 2;
    auto array_ptr = ros_message->version;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: channel
  {
    cdr << ros_message->channel;
  }

  // Field name: joy_mode
  {
    cdr << ros_message->joy_mode;
  }

  // Field name: orientation_est
  {
    cdr << ros_message->orientation_est;
  }

  // Field name: pitch_est
  {
    cdr << ros_message->pitch_est;
  }

  // Field name: distance_est
  {
    cdr << ros_message->distance_est;
  }

  // Field name: yaw_est
  {
    cdr << ros_message->yaw_est;
  }

  // Field name: tag_roll
  {
    cdr << ros_message->tag_roll;
  }

  // Field name: tag_pitch
  {
    cdr << ros_message->tag_pitch;
  }

  // Field name: tag_yaw
  {
    cdr << ros_message->tag_yaw;
  }

  // Field name: base_roll
  {
    cdr << ros_message->base_roll;
  }

  // Field name: base_pitch
  {
    cdr << ros_message->base_pitch;
  }

  // Field name: base_yaw
  {
    cdr << ros_message->base_yaw;
  }

  // Field name: joystick
  {
    size_t size = 2;
    auto array_ptr = ros_message->joystick;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: error_state
  {
    cdr << ros_message->error_state;
  }

  // Field name: buttons
  {
    cdr << ros_message->buttons;
  }

  // Field name: enabled_from_app
  {
    cdr << ros_message->enabled_from_app;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
size_t get_serialized_size_key_unitree_go__msg__UwbState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UwbState__ros_msg_type * ros_message = static_cast<const _UwbState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: version
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->version;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: channel
  {
    size_t item_size = sizeof(ros_message->channel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joy_mode
  {
    size_t item_size = sizeof(ros_message->joy_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: orientation_est
  {
    size_t item_size = sizeof(ros_message->orientation_est);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pitch_est
  {
    size_t item_size = sizeof(ros_message->pitch_est);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: distance_est
  {
    size_t item_size = sizeof(ros_message->distance_est);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: yaw_est
  {
    size_t item_size = sizeof(ros_message->yaw_est);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tag_roll
  {
    size_t item_size = sizeof(ros_message->tag_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tag_pitch
  {
    size_t item_size = sizeof(ros_message->tag_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tag_yaw
  {
    size_t item_size = sizeof(ros_message->tag_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: base_roll
  {
    size_t item_size = sizeof(ros_message->base_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: base_pitch
  {
    size_t item_size = sizeof(ros_message->base_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: base_yaw
  {
    size_t item_size = sizeof(ros_message->base_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joystick
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->joystick;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: error_state
  {
    size_t item_size = sizeof(ros_message->error_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: buttons
  {
    size_t item_size = sizeof(ros_message->buttons);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: enabled_from_app
  {
    size_t item_size = sizeof(ros_message->enabled_from_app);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_go
size_t max_serialized_size_key_unitree_go__msg__UwbState(
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
  // Field name: version
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: channel
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: joy_mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: orientation_est
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pitch_est
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: distance_est
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: yaw_est
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: tag_roll
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: tag_pitch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: tag_yaw
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: base_roll
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: base_pitch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: base_yaw
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: joystick
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: error_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: buttons
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: enabled_from_app
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = unitree_go__msg__UwbState;
    is_plain =
      (
      offsetof(DataType, enabled_from_app) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _UwbState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const unitree_go__msg__UwbState * ros_message = static_cast<const unitree_go__msg__UwbState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_unitree_go__msg__UwbState(ros_message, cdr);
}

static bool _UwbState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  unitree_go__msg__UwbState * ros_message = static_cast<unitree_go__msg__UwbState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_unitree_go__msg__UwbState(cdr, ros_message);
}

static uint32_t _UwbState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_unitree_go__msg__UwbState(
      untyped_ros_message, 0));
}

static size_t _UwbState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_unitree_go__msg__UwbState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_UwbState = {
  "unitree_go::msg",
  "UwbState",
  _UwbState__cdr_serialize,
  _UwbState__cdr_deserialize,
  _UwbState__get_serialized_size,
  _UwbState__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _UwbState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_UwbState,
  get_message_typesupport_handle_function,
  &unitree_go__msg__UwbState__get_type_hash,
  &unitree_go__msg__UwbState__get_type_description,
  &unitree_go__msg__UwbState__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unitree_go, msg, UwbState)() {
  return &_UwbState__type_support;
}

#if defined(__cplusplus)
}
#endif
