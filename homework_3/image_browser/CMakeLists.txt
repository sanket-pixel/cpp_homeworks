cmake_minimum_required(VERSION 3.10)
project(image_browser)
set(CMAKE_CXX_STANDARD 17)

include_directories(include/)

add_library(image_browser src/image_browser.cpp)

set(html_writer_INCLUDE_DIRS "../html_writer/include/")

target_link_libraries(image_browser html_writer)

target_include_directories(image_browser PRIVATE ${html_writer_INCLUDE_DIRS})

