cmake_minimum_required(VERSION 3.16)
project(UnitConverter)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 引入子模块unitlib
add_subdirectory(unitlib)

# 生成主程序可执行文件
add_executable(unit_convert src/main.cpp)

# 链接unitlib静态库
target_link_libraries(unit_convert PRIVATE unitlib)
