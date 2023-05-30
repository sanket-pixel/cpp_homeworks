cmake_minimum_required(VERSION 3.10)
project(homework_4)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


add_library(homework_4 src/homework_4.cpp)
target_include_directories(homework_4 PRIVATE include/)

add_executable(main src/main.cpp)
target_include_directories(main PRIVATE include/)
target_link_libraries( main homework_4)


