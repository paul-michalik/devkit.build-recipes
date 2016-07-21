 
cmake_minimum_required(VERSION 3.4 FATAL_ERROR)  
 
set(Sources  
    src/tests-build-recipes-cmake.cpp)  
set(Headers 
    tests-build-recipes-cmake.h)  
add_library(tests-build-recipes-cmake ${Headers} ${Sources})   
 
add_executable(tests-build-recipes-cmake_tests tests/tests-build-recipes-cmake_tests.cpp) 
 
target_link_libraries(tests-build-recipes-cmake_tests tests-build-recipes-cmake 
    ${Boost_FILESYSTEM_LIBRARY} 
    ${Boost_SYSTEM_LIBRARY} 
    ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}) 
 
add_test(NAME tests-build-recipes-cmake_tests COMMAND $<TARGET_FILE:tests-build-recipes-cmake_tests>) 
