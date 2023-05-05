cmake_minimum_required(VERSION 3.24)
project(cs)

set(CMAKE_CXX_STANDARD 23)

file(GLOB CS_SRC
        "*.h"
        "*.cpp"
        )

add_library(cs ${CS_SRC} core/array_view.cpp core/array_view.h core/min.h core/type.cpp core/type.h)
