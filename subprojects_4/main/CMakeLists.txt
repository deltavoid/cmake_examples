
message("main CMakeLists begin")
project(main)


message("PROJECT_NAME: ${PROJECT_NAME}")
message("PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")
message("PROJECT_BINARY_DIR: ${PROJECT_BINARY_DIR}")









# targets and directories

# Create the executable
add_executable(main 
    main.cpp
)

# Link the static library from subproject1 using it's alias sub::lib1
# Link the header only library from subproject2 using it's alias sub::lib2
# This will cause the include directories for that target to be added to this project
target_link_libraries(main
    # static_lib1
    static_lib2
    # interface_lib1
)





message("main CMakeLists end")