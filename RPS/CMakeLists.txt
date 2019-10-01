cmake_minimum_required(VERSION 3.15)
project(RPS)

set(CMAKE_CXX_STANDARD 14)

add_executable(RPS main.cpp AI.cpp AI.h Choice.cpp Choice.h DataBase.cpp DataBase.h Player.cpp Player.h PlayCenter.cpp PlayCenter.h)