cmake_minimum_required(VERSION 3.11)

enable_testing()

add_executable(test_hello)

set(SOURCES
    src/test_hello.cpp
)

target_sources(test_hello PRIVATE ${SOURCES} )
target_link_libraries(test_hello PRIVATE
    helloLib
    GTest::Main
)

add_test(test_hello $<TARGET_FILE::test_hello>)
