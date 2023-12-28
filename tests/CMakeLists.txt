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

#add LAB5
add_executable(lab5_test lab5_test.cpp ../lab5/list/list.hpp ../lab5/allocator/allocator.hpp ../lab5/iterators/iterator.hpp ../lab5/iterators/const_iterator.hpp)

target_link_libraries(lab5_test PRIVATE GTest::GTest)
target_include_directories(lab5_test PRIVATE ../lab5/iterators ../lab5/list ../lab5/allocator)

add_test(lab5_test lab5_test)

#add LAB6
add_executable(lab6_test lab6_test.cpp ../lab6/include/dragon.hpp ../lab6/include/factory.hpp ../lab6/include/npc.hpp ../lab6/include/observer.hpp ../lab6/include/elf.hpp ../lab6/include/druid.hpp ../lab6/include/visitor.hpp ../lab6/src/dragon.cpp ../lab6/src/factory.cpp ../lab6/src/npc.cpp ../lab6/src/observer.cpp ../lab6/src/elf.cpp ../lab6/src/druid.cpp ../lab6/src/visitor.cpp)

target_link_libraries(lab6_test PRIVATE GTest::GTest)
target_include_directories(lab6_test PRIVATE ../lab6/include)

add_test(lab6_test lab6_test)