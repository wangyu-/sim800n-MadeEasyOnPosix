cmake_minimum_required(VERSION 3.15)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 11)
#set(CMAKE_CXX_FLAGS "-O2 -g3 -fsanitize=address -I/opt/homebrew/include")
set(CMAKE_CXX_FLAGS "-O2 -g3 -pthread -Wno-deprecated-declarations")
find_package(SDL2 REQUIRED)

include_directories(${SDL2_INCLUDE_DIRS})
include_directories("verilator/include/")
include_directories("obj_dir/")

file(GLOB SRC1 "*.cpp")
file(GLOB SRC2 "obj_dir/*.cpp")

add_executable(a.out ${SRC1} ${SRC2} verilator/include/verilated.cpp)
target_link_libraries(a.out ${SDL2_LIBRARIES})
if(WIN32)
  target_link_libraries(a.out wsock32 ws2_32)
endif()
