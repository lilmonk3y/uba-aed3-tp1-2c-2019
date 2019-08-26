cmake_minimum_required(VERSION 3.5)
project(tp1_2c_2019)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g -Wall -O2")

add_subdirectory(lib/googletest)
include_directories(lib/googletest/googletest/include)
include_directories(lib/googletest/googlemock/include)



add_executable(run_test src/entities/Item.cpp src/entities/Item.h src/solutions/BruteForce.cpp src/solutions/BruteForce.h test/solutions/BruteForceTest.cpp src/solutions/KnapSack.h src/solutions/KnapSack.cpp src/solutions/BackTracking.h src/solutions/BackTracking.cpp)
target_link_libraries(run_test gtest gtest_main)

add_executable(bruteforce-main src/executables/bruteForce-main.cpp src/entities/Item.cpp src/entities/Item.h src/solutions/BruteForce.cpp src/solutions/BruteForce.h src/solutions/KnapSack.h src/solutions/KnapSack.cpp)
add_executable(backtracking-main src/executables/backTracking-main.cpp src/entities/Item.cpp src/entities/Item.h src/solutions/BackTracking.cpp src/solutions/BackTracking.h src/solutions/KnapSack.h src/solutions/KnapSack.cpp)
