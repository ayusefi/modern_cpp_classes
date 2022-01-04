cmake_minimum_required(VERSION 3.1)
# Enable C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
project(homework_6)

SET(OpenCV_DIR /home/abdullah/opencv/build/share/OpenCV)

# Include OpenCV
find_package(OpenCV 3 REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

include_directories(${PROJECT_SOURCE_DIR}/include)

add_library(image_class src/image_class.cpp src/io_tools.cpp) 

# add_library(convert_dataset src/convert_dataset.cpp src/serialize.cpp src/compute_sifts.cpp) 
# target_link_libraries(convert_dataset serialize stdc++fs ${OpenCV_LIBS})

add_executable(main src/main.cpp)
target_link_libraries(main image_class stdc++fs ${OpenCV_LIBS})