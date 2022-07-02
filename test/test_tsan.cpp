#include <gtest/gtest.h>

TEST(TestThreadSanitizer, DataRace)
{
    auto d = new double;

    delete d;
}
