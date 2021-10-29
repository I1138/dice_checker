cmake_minimum_required(VERSION 3.10)

project(DiceCheck VERSION 0.0.0)

add_executable(DiceCheck)

target_sources(DiceCheck PRIVATE ./src/dice_check.cpp)

target_include_directories(DiceCheck PRIVATE ./include/)
