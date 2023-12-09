cmake_minimum_required(VERSION 3.15)
project(image_recognition)

set(CMAKE_CXX_STANDARD 17)
find_package(OpenCV REQUIRED)

include_directories(
    ${OpenCV_INCLUDE_DIRS}
    include
)

add_executable(image_recognition 
    #src/main.cpp
    #src/utils.cpp
    src/test.cpp
)

target_link_libraries(image_recognition ${OpenCV_LIBS})
