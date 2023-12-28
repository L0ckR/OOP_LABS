add_executable(lab6 main.cpp include/dragon.hpp include/factory.hpp include/npc.hpp include/observer.hpp include/elf.hpp include/druid.hpp include/visitor.hpp src/dragon.cpp src/factory.cpp src/npc.cpp src/observer.cpp src/elf.cpp src/druid.cpp src/visitor.cpp)

target_include_directories(lab6 PRIVATE include)