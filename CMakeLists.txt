cmake_minimum_required(VERSION 3.20)

project(OOP_LABS CXX)

enable_testing()

if (MSVC)
    add_compile_options(/W4 /WX)
else()
    add_compile_options(-Wall -Wextra -pedantic -Werror)
endif()

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")

#add LAB1
add_subdirectory(lab1)

#add LAB2
add_subdirectory(lab2)

#add LAB3
add_subdirectory(lab3)

#add LAB4
add_subdirectory(lab4)

#add LAB5
add_subdirectory(lab5)

#add LAB6
add_subdirectory(lab6)

#add LAB7
add_subdirectory(lab7)


add_subdirectory(tests)
