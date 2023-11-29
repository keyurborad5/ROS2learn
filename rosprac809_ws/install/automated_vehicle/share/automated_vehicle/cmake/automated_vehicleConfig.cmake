# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_automated_vehicle_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED automated_vehicle_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(automated_vehicle_FOUND FALSE)
  elseif(NOT automated_vehicle_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(automated_vehicle_FOUND FALSE)
  endif()
  return()
endif()
set(_automated_vehicle_CONFIG_INCLUDED TRUE)

# output package information
if(NOT automated_vehicle_FIND_QUIETLY)
  message(STATUS "Found automated_vehicle: 0.0.0 (${automated_vehicle_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'automated_vehicle' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${automated_vehicle_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(automated_vehicle_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${automated_vehicle_DIR}/${_extra}")
endforeach()
