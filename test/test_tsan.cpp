#include <gtest/gtest.h>

#include <future>

TEST(TestThreadSanitizer, DataRace)
{
    int val = 0;
    auto task = std::async([&val] {
        int i(0);
        while (i++ < 1'000)
        {
            ++val;
        }
    });

    EXPECT_LE(val, 1'000);
    task.get();
}
