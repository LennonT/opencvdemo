cmake_minimum_required(VERSION 3.14)
project(OpenCVDemo)

set(CMAKE_CXX_STANDARD 14)

add_executable(OpenCVDemo main.cpp)

find_package(OpenCV)

include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(OpenCVDemo ${OpenCV_LIBS})