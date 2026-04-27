// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from unitree_hg:msg/BmsState.idl
// generated code does not contain a copyright notice
#include "unitree_hg/msg/detail/bms_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "unitree_hg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "unitree_hg/msg/detail/bms_state__struct.h"
#include "unitree_hg/msg/detail/bms_state__functions.h"
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


using _BmsState__ros_msg_type = unitree_hg__msg__BmsState;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_hg
bool cdr_serialize_unitree_hg__msg__BmsState(
  const unitree_hg__msg__BmsState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: version_high
  {
    cdr << ros_message->version_high;
  }

  // Field name: version_low
  {
    cdr << ros_message->version_low;
  }

  // Field name: fn
  {
    cdr << ros_message->fn;
  }

  // Field name: cell_vol
  {
    size_t size = 40;
    auto array_ptr = ros_message->cell_vol;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: bmsvoltage
  {
    size_t size = 3;
    auto array_ptr = ros_message->bmsvoltage;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: current
  {
    cdr << ros_message->current;
  }

  // Field name: soc
  {
    cdr << ros_message->soc;
  }

  // Field name: soh
  {
    cdr << ros_message->soh;
  }

  // Field name: temperature
  {
    size_t size = 12;
    auto array_ptr = ros_message->temperature;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: cycle
  {
    cdr << ros_message->cycle;
  }

  // Field name: manufacturer_date
  {
    cdr << ros_message->manufacturer_date;
  }

  // Field name: bmsstate
  {
    size_t size = 5;
    auto array_ptr = ros_message->bmsstate;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: reserve
  {
    size_t size = 3;
    auto array_ptr = ros_message->reserve;
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_hg
bool cdr_deserialize_unitree_hg__msg__BmsState(
  eprosima::fastcdr::Cdr & cdr,
  unitree_hg__msg__BmsState * ros_message)
{
  // Field name: version_high
  {
    cdr >> ros_message->version_high;
  }

  // Field name: version_low
  {
    cdr >> ros_message->version_low;
  }

  // Field name: fn
  {
    cdr >> ros_message->fn;
  }

  // Field name: cell_vol
  {
    size_t size = 40;
    auto array_ptr = ros_message->cell_vol;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: bmsvoltage
  {
    size_t size = 3;
    auto array_ptr = ros_message->bmsvoltage;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: current
  {
    cdr >> ros_message->current;
  }

  // Field name: soc
  {
    cdr >> ros_message->soc;
  }

  // Field name: soh
  {
    cdr >> ros_message->soh;
  }

  // Field name: temperature
  {
    size_t size = 12;
    auto array_ptr = ros_message->temperature;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: cycle
  {
    cdr >> ros_message->cycle;
  }

  // Field name: manufacturer_date
  {
    cdr >> ros_message->manufacturer_date;
  }

  // Field name: bmsstate
  {
    size_t size = 5;
    auto array_ptr = ros_message->bmsstate;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: reserve
  {
    size_t size = 3;
    auto array_ptr = ros_message->reserve;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_hg
size_t get_serialized_size_unitree_hg__msg__BmsState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BmsState__ros_msg_type * ros_message = static_cast<const _BmsState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: version_high
  {
    size_t item_size = sizeof(ros_message->version_high);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: version_low
  {
    size_t item_size = sizeof(ros_message->version_low);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fn
  {
    size_t item_size = sizeof(ros_message->fn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cell_vol
  {
    size_t array_size = 40;
    auto array_ptr = ros_message->cell_vol;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: bmsvoltage
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->bmsvoltage;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: current
  {
    size_t item_size = sizeof(ros_message->current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: soc
  {
    size_t item_size = sizeof(ros_message->soc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: soh
  {
    size_t item_size = sizeof(ros_message->soh);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: temperature
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->temperature;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cycle
  {
    size_t item_size = sizeof(ros_message->cycle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: manufacturer_date
  {
    size_t item_size = sizeof(ros_message->manufacturer_date);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: bmsstate
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->bmsstate;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reserve
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->reserve;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_hg
size_t max_serialized_size_unitree_hg__msg__BmsState(
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

  // Field name: version_high
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: version_low
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: fn
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: cell_vol
  {
    size_t array_size = 40;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: bmsvoltage
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: soc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: soh
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: temperature
  {
    size_t array_size = 12;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: cycle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: manufacturer_date
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: bmsstate
  {
    size_t array_size = 5;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: reserve
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = unitree_hg__msg__BmsState;
    is_plain =
      (
      offsetof(DataType, reserve) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_hg
bool cdr_serialize_key_unitree_hg__msg__BmsState(
  const unitree_hg__msg__BmsState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: version_high
  {
    cdr << ros_message->version_high;
  }

  // Field name: version_low
  {
    cdr << ros_message->version_low;
  }

  // Field name: fn
  {
    cdr << ros_message->fn;
  }

  // Field name: cell_vol
  {
    size_t size = 40;
    auto array_ptr = ros_message->cell_vol;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: bmsvoltage
  {
    size_t size = 3;
    auto array_ptr = ros_message->bmsvoltage;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: current
  {
    cdr << ros_message->current;
  }

  // Field name: soc
  {
    cdr << ros_message->soc;
  }

  // Field name: soh
  {
    cdr << ros_message->soh;
  }

  // Field name: temperature
  {
    size_t size = 12;
    auto array_ptr = ros_message->temperature;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: cycle
  {
    cdr << ros_message->cycle;
  }

  // Field name: manufacturer_date
  {
    cdr << ros_message->manufacturer_date;
  }

  // Field name: bmsstate
  {
    size_t size = 5;
    auto array_ptr = ros_message->bmsstate;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: reserve
  {
    size_t size = 3;
    auto array_ptr = ros_message->reserve;
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_hg
size_t get_serialized_size_key_unitree_hg__msg__BmsState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BmsState__ros_msg_type * ros_message = static_cast<const _BmsState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: version_high
  {
    size_t item_size = sizeof(ros_message->version_high);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: version_low
  {
    size_t item_size = sizeof(ros_message->version_low);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fn
  {
    size_t item_size = sizeof(ros_message->fn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cell_vol
  {
    size_t array_size = 40;
    auto array_ptr = ros_message->cell_vol;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: bmsvoltage
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->bmsvoltage;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: current
  {
    size_t item_size = sizeof(ros_message->current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: soc
  {
    size_t item_size = sizeof(ros_message->soc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: soh
  {
    size_t item_size = sizeof(ros_message->soh);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: temperature
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->temperature;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cycle
  {
    size_t item_size = sizeof(ros_message->cycle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: manufacturer_date
  {
    size_t item_size = sizeof(ros_message->manufacturer_date);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: bmsstate
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->bmsstate;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reserve
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->reserve;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_hg
size_t max_serialized_size_key_unitree_hg__msg__BmsState(
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
  // Field name: version_high
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: version_low
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: fn
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: cell_vol
  {
    size_t array_size = 40;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: bmsvoltage
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: soc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: soh
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: temperature
  {
    size_t array_size = 12;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: cycle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: manufacturer_date
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: bmsstate
  {
    size_t array_size = 5;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: reserve
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = unitree_hg__msg__BmsState;
    is_plain =
      (
      offsetof(DataType, reserve) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _BmsState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const unitree_hg__msg__BmsState * ros_message = static_cast<const unitree_hg__msg__BmsState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_unitree_hg__msg__BmsState(ros_message, cdr);
}

static bool _BmsState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  unitree_hg__msg__BmsState * ros_message = static_cast<unitree_hg__msg__BmsState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_unitree_hg__msg__BmsState(cdr, ros_message);
}

static uint32_t _BmsState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_unitree_hg__msg__BmsState(
      untyped_ros_message, 0));
}

static size_t _BmsState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_unitree_hg__msg__BmsState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BmsState = {
  "unitree_hg::msg",
  "BmsState",
  _BmsState__cdr_serialize,
  _BmsState__cdr_deserialize,
  _BmsState__get_serialized_size,
  _BmsState__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _BmsState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BmsState,
  get_message_typesupport_handle_function,
  &unitree_hg__msg__BmsState__get_type_hash,
  &unitree_hg__msg__BmsState__get_type_description,
  &unitree_hg__msg__BmsState__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unitree_hg, msg, BmsState)() {
  return &_BmsState__type_support;
}

#if defined(__cplusplus)
}
#endif
