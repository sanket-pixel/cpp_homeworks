cmake_minimum_required(VERSION 3.10)
project(html_writer)
set(CMAKE_CXX_STANDARD 17)

include_directories(include/)

add_library(html_writer src/html_writer.cpp)


