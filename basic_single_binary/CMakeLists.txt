# Set the minimum version of CMake that can be used
# To find the cmake version run
# $ cmake --version
cmake_minimum_required(VERSION 3.5)

# Set the project name
project (hello)

# Add an executable
add_executable(hello 
    main.cpp
)

#target_include_directories

target_compile_definitions(hello
    PRIVATE DEBUG
)

target_compile_options(hello
    PRIVATE
        -g -O2 -Wall -fno-omit-frame-pointer
)


target_link_libraries(hello
    PRIVATE
        pthread
)

#require cmake 3.13
#target_link_options(hello 
#    PRIVATE
#        -lm -lrt 
#)
