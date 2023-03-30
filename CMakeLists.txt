cmake_minimum_required(VERSION 3.10)

project(LinkingExample)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# GTest
add_subdirectory(libs/googletest)

# Include subdirectories
add_subdirectory(extern_lib)
add_subdirectory(shared_lib)
add_subdirectory(static_lib)
add_subdirectory(main)
