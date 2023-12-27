set(CMAKE_CXX_STANDARD 23)

add_executable(lab3 main.cpp src/figures.cpp src/point.cpp src/array.cpp include/figures.hpp include/point.hpp include/array.hpp)

target_include_directories(lab3 PRIVATE include)