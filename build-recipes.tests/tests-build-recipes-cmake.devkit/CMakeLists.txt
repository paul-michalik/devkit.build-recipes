 
cmake_minimum_required(VERSION 3.4 FATAL_ERROR)  
 
project(tests-build-recipes-cmake)  
 
include("build-recipes-cmake/boost.cmake") 
#include("build-recipes-cmake/gtest.cmake") 
# add another build recipes as required 
 
include_directories(${CMAKE_CURRENT_SOURCE_DIR}) 
 
add_subdirectory(tests-build-recipes-cmake) 
