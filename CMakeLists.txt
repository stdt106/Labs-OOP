cmake_minimum_required(VERSION 3.10)
project(NumberExtractor)

set(CMAKE_CXX_STANDARD 11)

add_executable(main main.cpp functions.cpp)

enable_testing()
find_package(GTest CONFIG REQUIRED)
add_executable(tests test.cpp functions.cpp)
target_link_libraries(tests PRIVATE GTest::gtest GTest::gtest_main)