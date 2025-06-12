#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "zivid_rviz_plugin::zivid_rviz_plugin" for configuration ""
set_property(TARGET zivid_rviz_plugin::zivid_rviz_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(zivid_rviz_plugin::zivid_rviz_plugin PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libzivid_rviz_plugin.so"
  IMPORTED_SONAME_NOCONFIG "libzivid_rviz_plugin.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS zivid_rviz_plugin::zivid_rviz_plugin )
list(APPEND _IMPORT_CHECK_FILES_FOR_zivid_rviz_plugin::zivid_rviz_plugin "${_IMPORT_PREFIX}/lib/libzivid_rviz_plugin.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
