set(CMAKE_CXX_STANDARD 23)

add_executable(lab1 main.cpp src/strToNum.cpp include/strToNum.hpp)

target_include_directories(lab1 PRIVATE include)
