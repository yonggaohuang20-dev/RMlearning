cmake_minimum_required(VERSION 3.10)
project(homework)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 包含本地头文件
include_directories(include)

# 生成可执行文件
add_executable(app src/main.cpp src/Angle.cpp)