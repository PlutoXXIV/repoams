#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "nav2_voxel_grid::voxel_grid" for configuration "Release"
set_property(TARGET nav2_voxel_grid::voxel_grid APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(nav2_voxel_grid::voxel_grid PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libvoxel_grid.so"
  IMPORTED_SONAME_RELEASE "libvoxel_grid.so"
  )

list(APPEND _cmake_import_check_targets nav2_voxel_grid::voxel_grid )
list(APPEND _cmake_import_check_files_for_nav2_voxel_grid::voxel_grid "${_IMPORT_PREFIX}/lib/libvoxel_grid.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
