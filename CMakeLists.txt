cmake_minimum_required(VERSION 3.22)
project(cpp_playground LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 找系统里已经装好的 GoogleTest（apt 装的，不用联网拉 GitHub）
find_package(GTest REQUIRED)

# 把警告打开，逼自己写干净的代码
if(MSVC)
  add_compile_options(/W4)
else()
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

enable_testing()

# 我们的库
add_library(greeter src/greeter.cpp)
target_include_directories(greeter PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# 我们的测试
add_executable(greeter_test tests/greeter_test.cpp)
target_link_libraries(greeter_test PRIVATE greeter GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(greeter_test)
