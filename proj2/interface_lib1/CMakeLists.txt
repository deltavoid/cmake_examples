
message("interface_lib1 CMakeLists begin")
project(interface_lib1)


message("PROJECT_NAME: ${PROJECT_NAME}")
message("PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")
message("PROJECT_BINARY_DIR: ${PROJECT_BINARY_DIR}")








# targets and directories

add_library(interface_lib1 INTERFACE)
#add_library(sub::lib2 ALIAS sublibrary2)

#target_include_directories(sublibrary2
#    INTERFACE
#        ${PROJECT_SOURCE_DIR}/include
#)

target_include_directories(interface_lib1
    INTERFACE
        include
)










message("interface_lib1 CMakeLists begin")