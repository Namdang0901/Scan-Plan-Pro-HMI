#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rviz_3d_view_controller::rviz_3d_view_controller" for configuration ""
set_property(TARGET rviz_3d_view_controller::rviz_3d_view_controller APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(rviz_3d_view_controller::rviz_3d_view_controller PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/librviz_3d_view_controller.so"
  IMPORTED_SONAME_NOCONFIG "librviz_3d_view_controller.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rviz_3d_view_controller::rviz_3d_view_controller )
list(APPEND _IMPORT_CHECK_FILES_FOR_rviz_3d_view_controller::rviz_3d_view_controller "${_IMPORT_PREFIX}/lib/librviz_3d_view_controller.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
