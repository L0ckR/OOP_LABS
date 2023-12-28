include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        release-1.11.0
)

FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

#add LAB1
add_executable(lab1_test lab1_test.cpp ../lab1/src/strToNum.cpp ../lab1/include/strToNum.hpp)

target_link_libraries(lab1_test PRIVATE GTest::GTest)
target_include_directories(lab1_test PRIVATE ../lab1/include)

add_test(lab1_test lab1_test)

#add LAB2
add_executable(lab2_test lab2_test.cpp ../lab2/src/Eleven.cpp ../lab2/include/Eleven.hpp)

target_link_libraries(lab2_test PRIVATE GTest::GTest)
target_include_directories(lab2_test PRIVATE ../lab2/include)

add_test(lab2_test lab2_test)

#add LAB3
add_executable(lab3_test lab3_test.cpp ../lab3/src/figures.cpp ../lab3/src/point.cpp ../lab3/src/array.cpp ../lab3/include/figures.hpp ../lab3/include/point.hpp ../lab3/include/array.hpp)

target_link_libraries(lab3_test PRIVATE GTest::GTest)
target_include_directories(lab3_test PRIVATE ../lab3/include)

add_test(lab3_test lab3_test)

#add LAB4
add_executable(lab4_test lab4_test.cpp ../lab4/include/figures.hpp ../lab4/include/point.hpp ../lab4/include/array.hpp)

target_link_libraries(lab4_test PRIVATE GTest::GTest)
target_include_directories(lab4_test PRIVATE ../lab4/include)

add_test(lab4_test lab4_test)