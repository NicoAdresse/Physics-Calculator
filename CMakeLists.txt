# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)
project(PhysicsCalculator)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

file(GLOB_RECURSE SOURCES "src/*.cpp" "impl/*.cpp")

add_executable(app ${SOURCES})

set_target_properties(app PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/build")