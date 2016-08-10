cmake_minimum_required(VERSION 2.8)
# options. turn on with 'cmake -Dvarname=ON'
option(test "Build all tests." OFF)

set(PROJECT_NAME test_gtest)
project(${PROJECT_NAME})

set(CMAKE_CXX_FLAGS "-g  -Wall")

add_library(project1_lib project1.cpp)
add_executable(project1 main.cpp)
target_link_libraries(project1 project1_lib)

if(test)
    add_subdirectory(lib/googletest)
    enable_testing()
    # Include the gtest library. gtest_SOURCE_DIR is available due to 'project(gtest)' above
    include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

    #Unit Tests
    add_executable(runUnitTests test_project1.cpp)
    target_link_libraries(runUnitTests project1_lib gtest gtest_main)
    add_test(NAME that-test-I-made COMMAND runUnitTests)
    add_test(that-other-test-I-made runUnitTests)

endif()
