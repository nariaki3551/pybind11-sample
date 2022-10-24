cmake_minimum_required(VERSION 3.4...3.18)
project(sequence_cpp)

add_subdirectory(third_party/pybind11)
pybind11_add_module(sequence_cpp sequence/init.cpp)

target_include_directories(sequence_cpp PRIVATE ./sequence)

# EXAMPLE_VERSION_INFO is defined by setup.py and passed into the C++ code as a
# define (VERSION_INFO) here.
target_compile_definitions(sequence_cpp
                           PRIVATE VERSION_INFO=${EXAMPLE_VERSION_INFO})
