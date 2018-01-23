cmake_minimum_required(VERSION 3.6)
project(interview)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Arrays_Strings/IsUnique.cpp Arrays_Strings/urlify.cpp Arrays_Strings/perm.cpp  Arrays_Strings/oneway.cpp StacksQueues/stack.cpp StacksQueues/stack.h)
add_executable(interview ${SOURCE_FILES})