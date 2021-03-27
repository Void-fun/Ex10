// Copyright 2021 asma

#include <gtest/gtest.h>
#include <string>
#include "postfix.h"
TEST(PostfixTest, test1) {
    std::string inf = "2 * 2";
    std::string postf = infix2prefix(inf);
    std::string expected = "2 2 *";
    EXPECT_EQ(expected, postf);
}
TEST(PostfixTest, test2) {
    std::string inf = "1 + 4 - 8 / (9 - 4 * 2)";
    std::string postf = infix2prefix(inf);
    std::string expected = "1 4  +8  9 4  2 *- /-";
    EXPECT_EQ(expected, postf);
}

TEST(PostfixTest, test3) {
    std::string inf = "1 + 2 - (3 / 4) + (5 * 6) / (7 - 8)";
    std::string postf = infix2prefix(inf);
    std::string expected = "12+34/-56*78-/+";
}

