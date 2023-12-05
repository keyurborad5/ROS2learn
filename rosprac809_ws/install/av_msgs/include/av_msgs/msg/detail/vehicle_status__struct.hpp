// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from av_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef AV_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_HPP_
#define AV_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__av_msgs__msg__VehicleStatus __attribute__((deprecated))
#else
# define DEPRECATED__av_msgs__msg__VehicleStatus __declspec(deprecated)
#endif

namespace av_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleStatus_
{
  using Type = VehicleStatus_<ContainerAllocator>;

  explicit VehicleStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->driving_type = 0;
      this->current_action = 0;
      this->current_speed = 0.0;
    }
  }

  explicit VehicleStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->driving_type = 0;
      this->current_action = 0;
      this->current_speed = 0.0;
    }
  }

  // field types and members
  using _driving_type_type =
    uint8_t;
  _driving_type_type driving_type;
  using _current_action_type =
    uint8_t;
  _current_action_type current_action;
  using _current_speed_type =
    double;
  _current_speed_type current_speed;

  // setters for named parameter idiom
  Type & set__driving_type(
    const uint8_t & _arg)
  {
    this->driving_type = _arg;
    return *this;
  }
  Type & set__current_action(
    const uint8_t & _arg)
  {
    this->current_action = _arg;
    return *this;
  }
  Type & set__current_speed(
    const double & _arg)
  {
    this->current_speed = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t AUTONOMOUS =
    0u;
  static constexpr uint8_t MANUAL =
    1u;
  static constexpr uint8_t MOVING =
    0u;
  static constexpr uint8_t STOPPED =
    1u;

  // pointer types
  using RawPtr =
    av_msgs::msg::VehicleStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const av_msgs::msg::VehicleStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<av_msgs::msg::VehicleStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<av_msgs::msg::VehicleStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      av_msgs::msg::VehicleStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<av_msgs::msg::VehicleStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      av_msgs::msg::VehicleStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<av_msgs::msg::VehicleStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<av_msgs::msg::VehicleStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<av_msgs::msg::VehicleStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__av_msgs__msg__VehicleStatus
    std::shared_ptr<av_msgs::msg::VehicleStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__av_msgs__msg__VehicleStatus
    std::shared_ptr<av_msgs::msg::VehicleStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleStatus_ & other) const
  {
    if (this->driving_type != other.driving_type) {
      return false;
    }
    if (this->current_action != other.current_action) {
      return false;
    }
    if (this->current_speed != other.current_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleStatus_

// alias to use template instance with default allocator
using VehicleStatus =
  av_msgs::msg::VehicleStatus_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::AUTONOMOUS;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::MANUAL;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::MOVING;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::STOPPED;

}  // namespace msg

}  // namespace av_msgs

#endif  // AV_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_HPP_
