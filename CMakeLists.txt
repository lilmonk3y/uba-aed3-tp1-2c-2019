cmake_minimum_required(VERSION 3.5)
project(tp1_2c_2019)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g -Wall -O2")

add_subdirectory(lib/googletest)
include_directories(lib/googletest/googletest/include)
include_directories(lib/googletest/googlemock/include)



add_executable(run_test test/solutions/KnapSackTest.cpp src/entities/Item.cpp src/entities/Item.h src/solutions/BruteForce.cpp src/solutions/BruteForce.h src/solutions/KnapSack.h src/solutions/KnapSack.cpp src/solutions/BackTracking.h src/solutions/BackTracking.cpp src/solutions/DinamicProgrammingTopDown.cpp src/solutions/DinamicProgrammingTopDown.h src/solutions/DinamicProgrammingBottomUp.cpp src/solutions/DinamicProgrammingBottomUp.h)
target_link_libraries(run_test gtest gtest_main)
set(FILES src/entities/Item.cpp src/entities/Item.h src/solutions/BruteForce.cpp src/solutions/BruteForce.h src/solutions/KnapSack.h src/solutions/KnapSack.cpp src/solutions/BackTracking.h src/solutions/BackTracking.cpp src/solutions/DinamicProgrammingTopDown.cpp src/solutions/DinamicProgrammingTopDown.h src/solutions/DinamicProgrammingBottomUp.cpp src/solutions/DinamicProgrammingBottomUp.h)

add_executable(bruteforce-main src/executables/bruteForce-main.cpp ${FILES})
add_executable(backtracking-main src/executables/backTracking-main.cpp ${FILES})
add_executable(top_down-main src/executables/top_down-main.cpp ${FILES})
add_executable(bottom_up-main src/executables/bottom_up-main.cpp ${FILES})

add_executable(bruteforce-main-time src/executables/bruteForce-main.cpp ${FILES})
add_executable(backtracking-main-time src/executables/backTracking-main.cpp ${FILES})
add_executable(top_down-main-time src/executables/top_down-main.cpp ${FILES})
add_executable(bottom_up-main-time src/executables/bottom_up-main.cpp ${FILES})
