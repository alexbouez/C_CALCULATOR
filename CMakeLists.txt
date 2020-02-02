cmake_minimum_required(VERSION 3.10)

# Adding directories

# Project target setup
project(Calculator)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)
add_executable(Calculator ${CMAKE_BINARY_DIR}/../src/main.c)

# Tests
enable_testing()
add_subdirectory(tests)
