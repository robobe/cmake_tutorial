cmake_minimum_required(VERSION 3.0.0)

project(Calc VERSION 1.0.0)

add_library(my_math
addition.cpp)


add_executable(calc 
main.cpp
)
include_directories(calc includes)
target_link_libraries(calc my_math)
target_compile_features(calc PRIVATE cxx_std_20)