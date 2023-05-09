cmake_minimum_required(VERSION 3.24)
project(link_list)

set(CMAKE_CXX_STANDARD 17)

add_executable(link_list main.cpp LinkList.cpp LinkList.h Node.h testSearch.cpp testSearch.h Stack.cpp Stack.h Queue.cpp Queue.h functions.cpp functions.h)
