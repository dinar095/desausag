cmake_minimum_required(VERSION 3.17)
project(desausag C)

set(CMAKE_C_STANDARD 99)
add_definitions(-D BUFFER_SIZE=1)

add_executable(desausag main.c get_next_line_utils.c get_next_line.h)
add_executable(main main.c)

find_library(TEST_LIBRARY ft ./)
target_link_libraries(main LINK_PUBLIC ${TEST_LIBRARY})
add_executable(smo smo.c)