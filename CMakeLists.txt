cmake_minimum_required(VERSION 3.8)
project(main)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES firstClass.cpp)
set(SOURCE_FILES distanceClass.cpp)
set(SOURCE_FILES counter.cpp)
set(SOURCE_FILES PointClass.cpp)

add_executable(main ${SOURCE_FILES})