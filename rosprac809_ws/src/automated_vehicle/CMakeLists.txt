cmake_minimum_required(VERSION 3.8)
project(automated_vehicle)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(av_msgs REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

include_directories(include/automated_vehicle)
add_executable(camera_driver src/camera.cpp)
ament_target_dependencies(camera_driver rclcpp sensor_msgs)
install(TARGETS camera_driver DESTINATION lib/${PROJECT_NAME})

include_directories(include/automated_vehicle)
add_executable(vehicle_driver src/vehicle.cpp)
ament_target_dependencies(vehicle_driver rclcpp av_msgs)
install(TARGETS vehicle_driver DESTINATION lib/${PROJECT_NAME})

install(DIRECTORY include launch config DESTINATION share/${PROJECT_NAME})

ament_package()
