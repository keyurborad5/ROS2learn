cmake_minimum_required(VERSION 3.8)
project(my_first_package)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)

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

include_directories(include/my_first_package)
add_executable(hello src/my_first_package.cpp)
ament_target_dependencies(hello rclcpp)

include_directories(include/light_switcher_pub)
add_executable(light_switcher_pub src/light_switcher_pub.cpp)
ament_target_dependencies(light_switcher_pub rclcpp)

include_directories(include/light_switcher_sub)
add_executable(light_switcher_sub src/light_switcher_sub.cpp)
ament_target_dependencies(light_switcher_sub rclcpp)



install(TARGETS hello DESTINATION lib/${PROJECT_NAME})
install(TARGETS light_switcher_pub DESTINATION lib/${PROJECT_NAME})
install(TARGETS light_switcher_sub DESTINATION lib/${PROJECT_NAME})

install(DIRECTORY include launch DESTINATION share/${PROJECT_NAME})

ament_package()
