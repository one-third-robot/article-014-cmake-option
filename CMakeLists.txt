cmake_minimum_required(VERSION 3.5)
project(example)

set(CMAKE_CXX_STANDARD 11)

OPTION(BUILD_WITH_OPTION "Build with option" OFF)
IF(BUILD_WITH_OPTION)
    ADD_DEFINITIONS(-D WITH_OPTION)
ENDIF(BUILD_WITH_OPTION)

# ------------------------------
add_executable(
    main
    src/main.cpp
)
