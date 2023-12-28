add_executable(lab7 main.cpp include/dragon.hpp include/npc.hpp include/observer.hpp include/elf.hpp include/druid.hpp src/dragon.cpp src/npc.cpp src/elf.cpp src/druid.cpp)

target_include_directories(lab7 PRIVATE include)