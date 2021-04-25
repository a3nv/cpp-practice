cmake_minimum_required(VERSION 3.19)
project(cpp_practice)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
#include_directories(src)
#include_directories(src/com)
#include_directories(src/com/competetive)
#include_directories(src/com/competetive/practice)
#include_directories(src/com/competetive/practice/leetcode)
#include_directories(src/com/competetive/practice/leetcode/solutions)
#include_directories(src/com/competetive/practice/leetcode/solutions/medium)

add_executable(cpp_practice
        src/com/competetive/practice/leetcode/solutions/medium/M384ShuffleAnArray.cpp)
