cmake_minimum_required(VERSION 3.23)
project(PizzaProject)

set(CMAKE_CXX_STANDARD 14)

add_executable(PizzaProject main.cpp Restaurant.hpp Time.hpp Order.hpp Driver.hpp)
