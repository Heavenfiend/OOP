cmake_minimum_required(VERSION 3.20)
project(untitled1)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled1
        main.cpp
        func.cpp
)

include(FetchContent)

FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(tests
        test_division.cpp
        func.cpp
)

target_link_libraries(tests
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(tests)

