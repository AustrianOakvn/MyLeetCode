cmake_minimum_required(VERSION 3.9)

set(CMAKE_CXX_COMPILER "/usr/bin/clang++" CACHE STRING "C++ compiler" FORCE)

project(raytracer)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Werror -Wall -Wpedantic -Wextra")

file(GLOB SOURCE_FILES src/*.cpp)

add_executable(raytracer ${SOURCE_FILES})


target_include_directories(raytracer PUBLIC include)
