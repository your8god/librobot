set(MY_TASK "my_task")
project(${MY_TASK} VERSION 2.1.4)

add_executable(${MY_TASK} main.cpp)

set(LIB_PATH ${CMAKE_SOURCE_DIR}/lib)
include_directories(${LIB_PATH})
target_link_libraries(${MY_TASK} PUBLIC ${LIB_NAME})