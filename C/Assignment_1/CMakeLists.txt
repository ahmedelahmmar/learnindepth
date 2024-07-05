cmake_minimum_required(VERSION 3.29)
project(Assignment_1)

file(GLOB_RECURSE SRC_FILES ${PROJECT_SOURCE_DIR}/src/*.c)
file(GLOB_RECURSE ENTRY_FILE ${PROJECT_SOURCE_DIR}/main.c)

set(CMAKE_BINARY_DIR ${PROJECT_SOURCE_DIR}/build)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(run ${ENTRY_FILE} ${SRC_FILES})