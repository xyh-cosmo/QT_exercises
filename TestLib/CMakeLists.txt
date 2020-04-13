cmake_minimum_required(VERSION 3.5)

project(TestLib LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(TestLib SHARED
  TestLib_global.h
  testlib.cpp
  testlib.h
)

target_compile_definitions(TestLib PRIVATE TESTLIB_LIBRARY)
