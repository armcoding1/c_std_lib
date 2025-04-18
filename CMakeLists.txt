cmake_minimum_required(VERSION 3.10)
project(c_std_lib)

include_directories(include)
file(GLOB SOURCES "src/*.c")

set(CMAKE_C_FLAGS "-Wall -Wextra -O2")
add_executable(std ${SOURCES})
