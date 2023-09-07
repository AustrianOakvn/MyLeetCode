cmake_minimum_required(VERSION 3.0.0)
project(leetcode VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 11)

set(SOURCES src/remove-element-test.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(leetcode  
        PUBLIC
        ${PROJECT_SOURCE_DIR}/includes
)

# include(CTest)
enable_testing()

# add_executable(remove_element_test src/remove-element-test.cpp)

# Add the test which is simply run the application
add_test(NAME run_test COMMAND ${PROJECT_NAME})

# Add the test which is run the acutest case
# add_test(NAME run_test COMMAND remove_element_test)