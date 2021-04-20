cmake_minimum_required (VERSION 3.5)
message("proj5 CMakeLists.txt begin")

project(proj5
    VERSION 1.0
)

message("CMAKE_PROJECT_NAME: ${CMAKE_PROJECT_NAME}")
message("CMAKE_SOURCE_DIR: ${CMAKE_SOURCE_DIR}")
message("CMAKE_BINARY_DIR: ${CMAKE_BINARY_DIR}")

message("CMAKE_CURRENT_SOURCE_DIR: ${CMAKE_CURRENT_SOURCE_DIR}")
message("CMAKE_CURRENT_BINARY_DIR: ${CMAKE_CURRENT_BINARY_DIR}")
message("CMAKE_CURRENT_LIST_DIR: ${CMAKE_CURRENT_LIST_DIR}")

message("PROJECT_NAME: ${PROJECT_NAME}")
message("PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")
message("PROJECT_BINARY_DIR: ${PROJECT_BINARY_DIR}")

message("CMAKE_PREFIX_PATH: ${CMAKE_PREFIX_PATH}")
message("CMAKE_MODULE_PATH: ${CMAKE_MODULE_PATH}")
message("CMAKE_TOOLCHAIN_FILE: ${CMAKE_TOOLCHAIN_FILE}")





#configurations





# dependencies






# targets and directories
add_subdirectory(static_lib1)
add_subdirectory(main)




# export

set(CMAKE_INSTALL_INCLUDEDIR include)
set(CMAKE_INSTALL_LIBDIR lib)


include (CMakePackageConfigHelpers)
set (install_cmakedir ${CMAKE_INSTALL_LIBDIR}/cmake/StaticLib1)


message("static_lib1 install cmake begin")
message("CMAKE_INSTALL_PREFIX: ${CMAKE_INSTALL_PREFIX}")
message("CMAKE_INSTALL_LIBDIR: ${CMAKE_INSTALL_LIBDIR}")
message("CMAKE_INSTALL_INCLUDEDIR: ${CMAKE_INSTALL_INCLUDEDIR}")
message("install_cmakedir: ${install_cmakedir}")


install (
  TARGETS
    static_lib1
  EXPORT static_lib1-export
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR})

install (
  EXPORT static_lib1-export
  FILE StaticLib1Targets.cmake
  NAMESPACE StaticLib1::
  DESTINATION ${install_cmakedir})

write_basic_package_version_file (
  ${CMAKE_CURRENT_BINARY_DIR}/StaticLib1ConfigVersion.cmake
  VERSION ${PROJECT_VERSION}
  COMPATIBILITY ExactVersion)

configure_package_config_file (
  ${CMAKE_CURRENT_LIST_DIR}/cmake/StaticLib1Config.cmake.in
  ${CMAKE_CURRENT_BINARY_DIR}/StaticLib1Config.cmake
  INSTALL_DESTINATION ${install_cmakedir})


export (
  EXPORT static_lib1-export
  FILE ${CMAKE_CURRENT_BINARY_DIR}/StaticLib1Targets.cmake
  NAMESPACE StaticLib1::)

export (PACKAGE StaticLib1)

#
# Packaging.
#

set (CPACK_PACKAGE_VERSION_MAJOR ${PROJECT_VERSION_MAJOR})
set (CPACK_PACKAGE_VERSION_MINOR ${PROJECT_VERSION_MINOR})
set (CPACK_PACKAGE_VERSION_PATCH ${PROJECT_VERSION_PATCH})

include (CPack)


message("proj5 CMakeLists.txt end")