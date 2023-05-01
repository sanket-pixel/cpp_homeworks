cmake_minimum_required(VERSION 3.1)
project(task_2)


# where to look for .hpp
include_directories(include/)


# add subdir 
# add_subdirectory(src)
add_library(ipb_arithmetic src/sum.cpp src/subtract.cpp)


add_executable(main src/main.cpp)

target_link_libraries(main ipb_arithmetic)

