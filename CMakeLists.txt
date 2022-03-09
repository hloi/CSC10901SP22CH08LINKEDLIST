cmake_minimum_required(VERSION 3.19)
project(CSC10901SP22CH08LINKEDLIST)

set(CMAKE_CXX_STANDARD 14)

set(CXXTEST_INCLUDE_DIR c:/cxxtest-4.4)

set(CXXTEST_PYTHON_TESTGEN_EXECUTABLE c:/cxxtest-4.4/bin/cxxtestgen)

find_package(CxxTest REQUIRED)

if(CXXTEST_FOUND)
    include_directories(${CXXTEST_INCLUDE_DIR})
    enable_testing()

    CXXTEST_ADD_TEST(unittest
            runner.cpp  # THIS IS GENERATED BUT YOU NEED TO ADD IT HERE
            ${CMAKE_CURRENT_SOURCE_DIR}/IntNode.cpp  # add source files
            ${CMAKE_CURRENT_SOURCE_DIR}/LinkedList.cpp  # YOUR TEST DESCRIPTION FILE
            ${CMAKE_CURRENT_SOURCE_DIR}/newCxxTest.h  # YOUR TEST DESCRIPTION FILE
            )

endif()

add_executable(CSC10901SP22CH08LINKEDLIST main.cpp IntNode.cpp IntNode.h LinkedList.cpp LinkedList.h)