cmake_minimum_required(VERSION 3.10)

# Adding directories

# Project target setup
project(Calculator)

# Set files
## Source
set(SOURCE_DIR ${CMAKE_BINARY_DIR}/../src)
set(SOURCE_FILES ${SOURCE_DIR}/main.c)
## Lexer
link_directories(${SOURCE_DIR}/lexer)
add_subdirectory(${SOURCE_DIR}/lexer)

# Tests
enable_testing()
add_subdirectory(tests)

# Compilation
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} lexer)
