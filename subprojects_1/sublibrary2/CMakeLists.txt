# Set the project name
project (sublibrary2)

add_library(sublibrary2 INTERFACE)
#add_library(sub::lib2 ALIAS sublibrary2)

#target_include_directories(sublibrary2
#    INTERFACE
#        ${PROJECT_SOURCE_DIR}/include
#)

target_include_directories(sublibrary2
    INTERFACE
        include
)
