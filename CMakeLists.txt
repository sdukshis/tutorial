cmake_minimum_required(VERSION 3.11)

project(hello CXX)

option(BUILD_TESTS "Build unittests" ON)

add_library(helloLib)
target_link_libraries(helloLib PUBLIC helloObj)
set_target_properties(helloLib PROPERTIES OUTPUT_NAME hello)

add_executable(hello)

set(SOURCES
    src/main.cpp
)

target_sources(hello PRIVATE ${SOURCES})
target_link_libraries(hello helloLib)

add_subdirectory(lib)
add_subdirectory(external)

if(BUILD_TESTS)
    add_subdirectory(tests)
endif()

include(GNUInstallDirs)
install(TARGETS hello helloLib helloObj
    EXPORT hello-targets
    RUNTIME DESTINATION bin
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    INCLUDES DESTINATION include/hello
    PUBLIC_HEADER DESTINATION include/hello
)
install(EXPORT hello-targets DESTINATION lib/hello)
