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
add_subdirectory(seastar)
add_subdirectory(main)



# export

set(CMAKE_INSTALL_INCLUDEDIR include)
set(CMAKE_INSTALL_LIBDIR lib)


include (CMakePackageConfigHelpers)
set (install_cmakedir ${CMAKE_INSTALL_LIBDIR}/cmake/Seastar)


message("seastar install cmake begin")
message("CMAKE_INSTALL_PREFIX: ${CMAKE_INSTALL_PREFIX}")
message("CMAKE_INSTALL_LIBDIR: ${CMAKE_INSTALL_LIBDIR}")
message("CMAKE_INSTALL_INCLUDEDIR: ${CMAKE_INSTALL_INCLUDEDIR}")
message("install_cmakedir: ${install_cmakedir}")

# install (
#   DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/
#   DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

# install (
#   DIRECTORY ${Seastar_GEN_BINARY_DIR}/include/
#   DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

# install (
#   PROGRAMS ${CMAKE_CURRENT_SOURCE_DIR}/scripts/seastar-json2code.py
#   DESTINATION ${CMAKE_INSTALL_BINDIR})

install (
  TARGETS
    seastar
    # seastar_testing
    # seastar_perf_testing
  EXPORT seastar-export
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR})

install (
  EXPORT seastar-export
  FILE SeastarTargets.cmake
  NAMESPACE Seastar::
  DESTINATION ${install_cmakedir})

write_basic_package_version_file (
  ${CMAKE_CURRENT_BINARY_DIR}/SeastarConfigVersion.cmake
  VERSION ${PROJECT_VERSION}
  COMPATIBILITY ExactVersion)

configure_package_config_file (
  ${CMAKE_CURRENT_LIST_DIR}/cmake/SeastarConfig.cmake.in
  ${CMAKE_CURRENT_BINARY_DIR}/SeastarConfig.cmake
  INSTALL_DESTINATION ${install_cmakedir})

# install (
#   FILES
#     ${CMAKE_CURRENT_BINARY_DIR}/SeastarConfig.cmake
#     ${CMAKE_CURRENT_BINARY_DIR}/SeastarConfigVersion.cmake
#   DESTINATION ${install_cmakedir})

# install (
#   FILES
#     ${CMAKE_CURRENT_SOURCE_DIR}/cmake/FindConcepts.cmake
#     ${CMAKE_CURRENT_SOURCE_DIR}/cmake/FindGnuTLS.cmake
#     ${CMAKE_CURRENT_SOURCE_DIR}/cmake/FindLinuxMembarrier.cmake
#     ${CMAKE_CURRENT_SOURCE_DIR}/cmake/FindProtobuf.cmake
#     ${CMAKE_CURRENT_SOURCE_DIR}/cmake/FindSanitizers.cmake
#     ${CMAKE_CURRENT_SOURCE_DIR}/cmake/FindStdAtomic.cmake
#     ${CMAKE_CURRENT_SOURCE_DIR}/cmake/FindStdFilesystem.cmake
#     ${CMAKE_CURRENT_SOURCE_DIR}/cmake/Findc-ares.cmake
#     ${CMAKE_CURRENT_SOURCE_DIR}/cmake/Findcryptopp.cmake
#     ${CMAKE_CURRENT_SOURCE_DIR}/cmake/Finddpdk.cmake
#     ${CMAKE_CURRENT_SOURCE_DIR}/cmake/Finddpdk_ste.cmake
#     ${CMAKE_CURRENT_SOURCE_DIR}/cmake/Findpcap.cmake
#     ${CMAKE_CURRENT_SOURCE_DIR}/cmake/Findmnl.cmake
#     ${CMAKE_CURRENT_SOURCE_DIR}/cmake/Findibverbs.cmake
#     ${CMAKE_CURRENT_SOURCE_DIR}/cmake/Findnl-3.cmake
#     ${CMAKE_CURRENT_SOURCE_DIR}/cmake/Findnl-route-3.cmake
#     ${CMAKE_CURRENT_SOURCE_DIR}/cmake/Findmlx5.cmake
#     ${CMAKE_CURRENT_SOURCE_DIR}/cmake/Findhwloc.cmake
#     ${CMAKE_CURRENT_SOURCE_DIR}/cmake/Findlksctp-tools.cmake
#     ${CMAKE_CURRENT_SOURCE_DIR}/cmake/Findlz4.cmake
#     ${CMAKE_CURRENT_SOURCE_DIR}/cmake/Findnumactl.cmake
#     ${CMAKE_CURRENT_SOURCE_DIR}/cmake/Findragel.cmake
#     ${CMAKE_CURRENT_SOURCE_DIR}/cmake/Findrt.cmake
#     ${CMAKE_CURRENT_SOURCE_DIR}/cmake/Findyaml-cpp.cmake
#     ${CMAKE_CURRENT_SOURCE_DIR}/cmake/SeastarDependencies.cmake
#   DESTINATION ${install_cmakedir})

# install (
#   DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/cmake/code_tests
#   DESTINATION ${install_cmakedir})

# install (
#   FILES ${CMAKE_CURRENT_BINARY_DIR}/seastar-install.pc
#   DESTINATION ${CMAKE_INSTALL_LIBDIR}/pkgconfig
#   RENAME seastar.pc)

# install (
#   FILES ${CMAKE_CURRENT_BINARY_DIR}/seastar-testing-install.pc
#   DESTINATION ${CMAKE_INSTALL_LIBDIR}/pkgconfig
#   RENAME seastar-testing.pc)

#
# Export targets from the build tree for the user package registry.
#

export (
  EXPORT seastar-export
  FILE ${CMAKE_CURRENT_BINARY_DIR}/SeastarTargets.cmake
  NAMESPACE Seastar::)

export (PACKAGE Seastar)

#
# Packaging.
#

set (CPACK_PACKAGE_VERSION_MAJOR ${PROJECT_VERSION_MAJOR})
set (CPACK_PACKAGE_VERSION_MINOR ${PROJECT_VERSION_MINOR})
set (CPACK_PACKAGE_VERSION_PATCH ${PROJECT_VERSION_PATCH})

include (CPack)




message("proj5 CMakeLists.txt end")