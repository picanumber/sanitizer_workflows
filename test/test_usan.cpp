#include <gtest/gtest.h>

TEST(TestUndefinedBehaviorSanitizer, FloatDivedByZero)
{
    float nom = 12.;
    float denom = 0;

    auto k = nom / denom;
    (void)k;

    EXPECT_EQ(nom, 12);
}
