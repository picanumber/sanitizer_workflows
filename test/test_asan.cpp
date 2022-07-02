#include <gtest/gtest.h>

TEST(TestAddressSanitizer, MemoryLeak)
{
    auto d = new double;

    delete d;
}
