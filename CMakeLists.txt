cmake_minimum_required(VERSION 3.14)
project(LuhuanCDemo)

set(CMAKE_CXX_STANDARD 17)

add_executable(LuhuanCDemo main.cpp bean/Person.cpp bean/Person.h math/Math.cpp math/Math.h data/Computer.cpp data/Computer.h)