#include "gtest/gtest.h"
#include "lib.h"

TEST(array_sum, expectNum){
    int sum;
    int mas [10] {
        1, 2, 3, 15, 26,
        -32, 64, 9, -256, 653
    };
    sum = (array_sum(mas, 3));
    EXPECT_EQ(6, sum);
    sum = (array_sum(mas, 5));
    EXPECT_EQ(47, sum);
    sum = (array_sum(mas, 7));
    EXPECT_EQ(79, sum);
    sum = (array_sum(mas, 9));
    EXPECT_EQ(-168, sum);
    sum = (array_sum(mas, 10));
    EXPECT_EQ(485, sum);
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}