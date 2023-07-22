cmake_minimum_required(VERSION 3.10)
project(your_project_name)

# Set C++ standard (change to your desired version if needed)
set(CMAKE_CXX_STANDARD 14)

# Add your header and source files
# set(HEADER_FILES
#     include/homework_4.hpp
# )

# set(SOURCE_FILES
#     src/homework_4.cpp
# )
include_directories(include)

add_library(homework_4 src/homework_4.cpp include/homework_4.hpp)

# Create an executable for your main program (assuming you have a separate main.cpp)
add_executable(main_program src/main.cpp )
target_link_libraries(main_program homework_4)

# Include the directory where your header files are located
target_include_directories(main_program PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# You don't need to explicitly compile template classes, so no need to add them separately.
# They will be automatically instantiated when used with different types in your main program.
