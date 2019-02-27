cmake_minimum_required(VERSION 3.11)

set(GTEST_VERSION 1.9.0)
find_package(gtest ${GTEST_VERSION} EXACT REQUIRED)

set_target_properties(GTest::GTest PROPERTIES INTERFACE_COMPILE_FEATURES cxx_std_11)
set_target_properties(GTest::Main PROPERTIES IMPORTED_GLOBAL TRUE)
