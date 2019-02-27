cmake_minimum_required(VERSION 3.11)

add_library(helloObj OBJECT)

set(SOURCES
    src/hello.cpp
)

set(HEADERS
    "${CMAKE_CURRENT_SOURCE_DIR}/include/hello.h"
)

target_sources(helloObj PRIVATE ${SOURCES})
set_target_properties(helloObj PROPERTIES PUBLIC_HEADER ${HEADERS})
target_include_directories(helloObj PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)
