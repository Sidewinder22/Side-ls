cmake_minimum_required(VERSION 3.22)

project(Side-ls LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -fmodules-ts")
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# For debug
set(CMAKE_BUILD_TYPE Debug)

add_library(tools
    SHARED
    Filesystem.cxx
    Filesystem-impl.cxx
    Format.cxx
    Format-impl.cxx
)

add_executable(Side-ls main.cpp)
target_link_libraries(Side-ls PRIVATE tools)
