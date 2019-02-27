#include <sstream>

#include <gtest/gtest.h>

#include "hello.h"

TEST(hello, notEmptyOutput) {
    std::stringstream ss;

    hello::hello(ss);

    ASSERT_FALSE(ss.str().empty());
}