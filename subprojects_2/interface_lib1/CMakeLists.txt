
message("interface_lib1 CMakeLists begin")
project(interface_lib1)





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