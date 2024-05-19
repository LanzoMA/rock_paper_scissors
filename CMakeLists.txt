cmake_minimum_required(VERSION 3.29.3)
project(rock_paper_scissors)

set(SOURCE src/main.cpp src/game.cpp)

add_executable(${PROJECT_NAME} ${SOURCE})
include_directories(include)