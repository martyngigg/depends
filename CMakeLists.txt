cmake_minimum_required(VERSION 3.15 FATAL_ERROR)
project(depends LANGUAGES C CXX)

# CXX configuration
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(CMAKE_CXX_VISIBILITY_PRESET hidden)
set(CMAKE_VISIBILITY_INLINES_HIDDEN 1)

# Framework libraries
add_subdirectory(framework)
