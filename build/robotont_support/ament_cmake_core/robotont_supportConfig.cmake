# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_robotont_support_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED robotont_support_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(robotont_support_FOUND FALSE)
  elseif(NOT robotont_support_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(robotont_support_FOUND FALSE)
  endif()
  return()
endif()
set(_robotont_support_CONFIG_INCLUDED TRUE)

# output package information
if(NOT robotont_support_FIND_QUIETLY)
  message(STATUS "Found robotont_support: 0.0.1 (${robotont_support_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'robotont_support' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT robotont_support_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(robotont_support_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${robotont_support_DIR}/${_extra}")
endforeach()
