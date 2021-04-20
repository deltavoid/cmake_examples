# Set the project name
project (sublibrary1)

# Add a library with the above sources
add_library(sublibrary1 src/sublib1.cpp)
#add_library(sub::lib1 ALIAS sublibrary1)

#target_include_directories(sublibrary1
#    PUBLIC ${PROJECT_SOURCE_DIR}/include
#)

target_include_directories(sublibrary1
    PUBLIC include
)
