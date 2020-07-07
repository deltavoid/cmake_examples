cmake_minimum_required(VERSION 3.5)

project(hello_library)

############################################################
# Create a library
############################################################

aux_source_directory(hello HELLO_LIBRARY_SOURCES)
message(STATUS "HELLO_LIBRARY_SOURCES: " ${HELLO_LIBRARY_SOURCES} )

#Generate the static library from the library sources
add_library(hello_library STATIC 
#    hello/Hello.cpp
    ${HELLO_LIBRARY_SOURCES}
)

target_include_directories(hello_library
    PUBLIC 
        ${PROJECT_SOURCE_DIR}
)


############################################################
# Create an executable
############################################################

# Add an executable with the above sources
add_executable(hello_binary 
    main/main.cpp
)

# link the new hello_library target with the hello_binary target
target_link_libraries( hello_binary
    PRIVATE 
        hello_library
)
