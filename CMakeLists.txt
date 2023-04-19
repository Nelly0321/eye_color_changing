cmake_minimum_required(VERSION 3.16)
project(eyes LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


find_package(OpenCV CONFIG REQUIRED)

add_library(eye_color eye_color.h eye_color.cpp)
add_executable(a main.cpp)

target_link_libraries(a PUBLIC eye_color)
target_link_libraries(eye_color PUBLIC opencv_highgui opencv_core opencv_imgproc opencv_objdetect opencv_videoio)


