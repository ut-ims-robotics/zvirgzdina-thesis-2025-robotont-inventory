# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_robina_thesis_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED robina_thesis_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(robina_thesis_FOUND FALSE)
  elseif(NOT robina_thesis_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(robina_thesis_FOUND FALSE)
  endif()
  return()
endif()
set(_robina_thesis_CONFIG_INCLUDED TRUE)

# output package information
if(NOT robina_thesis_FIND_QUIETLY)
  message(STATUS "Found robina_thesis: 0.0.0 (${robina_thesis_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'robina_thesis' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT robina_thesis_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(robina_thesis_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${robina_thesis_DIR}/${_extra}")
endforeach()
