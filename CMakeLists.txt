cmake_minimum_required(VERSION 3.6)
project(interview)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp StacksQueues/SetOfStacks.h StacksQueues/MyQueue.h)
add_executable(interview ${SOURCE_FILES})