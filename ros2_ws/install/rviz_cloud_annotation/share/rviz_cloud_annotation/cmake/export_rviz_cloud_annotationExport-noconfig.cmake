#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rviz_cloud_annotation::rviz_cloud_annotation_plugin" for configuration ""
set_property(TARGET rviz_cloud_annotation::rviz_cloud_annotation_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(rviz_cloud_annotation::rviz_cloud_annotation_plugin PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/rviz_cloud_annotation/librviz_cloud_annotation_plugin.so"
  IMPORTED_SONAME_NOCONFIG "librviz_cloud_annotation_plugin.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rviz_cloud_annotation::rviz_cloud_annotation_plugin )
list(APPEND _IMPORT_CHECK_FILES_FOR_rviz_cloud_annotation::rviz_cloud_annotation_plugin "${_IMPORT_PREFIX}/lib/rviz_cloud_annotation/librviz_cloud_annotation_plugin.so" )

# Import target "rviz_cloud_annotation::rviz_cloud_annotation_node" for configuration ""
set_property(TARGET rviz_cloud_annotation::rviz_cloud_annotation_node APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(rviz_cloud_annotation::rviz_cloud_annotation_node PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/rviz_cloud_annotation/rviz_cloud_annotation_node"
  )

list(APPEND _IMPORT_CHECK_TARGETS rviz_cloud_annotation::rviz_cloud_annotation_node )
list(APPEND _IMPORT_CHECK_FILES_FOR_rviz_cloud_annotation::rviz_cloud_annotation_node "${_IMPORT_PREFIX}/lib/rviz_cloud_annotation/rviz_cloud_annotation_node" )

# Import target "rviz_cloud_annotation::rviz_cloud_annotation_points" for configuration ""
set_property(TARGET rviz_cloud_annotation::rviz_cloud_annotation_points APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(rviz_cloud_annotation::rviz_cloud_annotation_points PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/rviz_cloud_annotation/librviz_cloud_annotation_points.so"
  IMPORTED_SONAME_NOCONFIG "librviz_cloud_annotation_points.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rviz_cloud_annotation::rviz_cloud_annotation_points )
list(APPEND _IMPORT_CHECK_FILES_FOR_rviz_cloud_annotation::rviz_cloud_annotation_points "${_IMPORT_PREFIX}/lib/rviz_cloud_annotation/librviz_cloud_annotation_points.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
