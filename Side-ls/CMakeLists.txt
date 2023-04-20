cmake_minimum_required(VERSION 3.5)

project(Side-ls LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -fmodules-ts")
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(tools SHARED
    Tools.cxx
)

add_executable(Side-ls main.cpp)
target_link_libraries(Side-ls PRIVATE tools)
