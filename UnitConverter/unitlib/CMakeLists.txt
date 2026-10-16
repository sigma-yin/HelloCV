cmake_minimum_required(VERSION 3.16)
project(unitlib)

add_library(unitlib src/unitlib.cpp)
target_include_directories(unitlib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
