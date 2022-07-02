#include <gtest/gtest.h>

TEST(TestUndefinedBehaviorSanitizer, UseUninitialized)
{
    auto d = new double;

    delete d;
}
