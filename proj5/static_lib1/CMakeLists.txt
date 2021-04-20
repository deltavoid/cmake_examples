
message("static_lib1 CMakeLists begin")
project (static_lib1)



message("CMAKE_PROJECT_NAME: ${CMAKE_PROJECT_NAME}")
message("CMAKE_SOURCE_DIR: ${CMAKE_SOURCE_DIR}")
message("CMAKE_BINARY_DIR: ${CMAKE_BINARY_DIR}")

message("CMAKE_CURRENT_SOURCE_DIR: ${CMAKE_CURRENT_SOURCE_DIR}")
message("CMAKE_CURRENT_BINARY_DIR: ${CMAKE_CURRENT_BINARY_DIR}")
message("CMAKE_CURRENT_LIST_DIR: ${CMAKE_CURRENT_LIST_DIR}")

message("PROJECT_NAME: ${PROJECT_NAME}")
message("PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")
message("PROJECT_BINARY_DIR: ${PROJECT_BINARY_DIR}")








# targets and directories

# Add a library with the above sources
add_library(static_lib1 STATIC
    src/sublib1.cpp
)
#add_library(sub::lib1 ALIAS sublibrary1)

#target_include_directories(sublibrary1
#    PUBLIC ${PROJECT_SOURCE_DIR}/include
#)

target_include_directories(static_lib1
    PUBLIC 
        include
)




message("static_lib1 CMakeLists end")