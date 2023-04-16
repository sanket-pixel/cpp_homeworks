cmake_minimum_required(VERSION 3.10)
project(main)
set(CMAKE_CXX_STANDARD 17)

include_directories(image_browser/include)
include_directories(html_writer/include)

add_subdirectory(image_browser)
add_subdirectory(html_writer)

add_executable(main src/main.cpp)

target_link_libraries(main image_browser html_writer stdc++fs)
