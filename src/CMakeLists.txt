cmake_minimum_required(VERSION 3.22)

project(Side-ls LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(TARGET Side-ls)

add_subdirectory(tools)

add_executable(${TARGET} main.cpp)
target_link_libraries(${TARGET} tools)
