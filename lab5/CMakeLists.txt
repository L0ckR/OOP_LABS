add_executable(lab5 main.cpp allocator/allocator.hpp iterators/const_iterator.hpp iterators/iterator.hpp list/list.hpp)

target_include_directories(lab5 PRIVATE list iterators allocator)