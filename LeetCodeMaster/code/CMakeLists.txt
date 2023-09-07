
# Test
cmake_minimum_required(VERSION 3.0.0)
project(leetcode)

set(CMAKE_CXX_STANDARD 11)

include_directories(includes)

set(SOURCE_FILES src/main.cpp)

set(TEST_SOURCE_FILES src/remove-element-test.cpp)

add_executable(leetcode ${SOURCE_FILES})

add_executable(my_test ${TEST_SOURCE_FILES})

enable_testing()

add_test(NAME my_unit_test COMMAND my_test)