cmake_minimum_required (VERSION 3.5)
message("subprojects_2 CMakeLists.txt begin")

project(subprojects)





#configurations





# dependencies






# targets and directories
add_subdirectory(static_lib1)
add_subdirectory(interface_lib1)
add_subdirectory(main)




message("subprojects_2 CMakeLists.txt end")