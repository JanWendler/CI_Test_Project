//
// Created by Jan on 22/03/2021.
//

#include "gtest/gtest.h"
#include "main.h"


TEST(sum_test, should_return_sum_of_the_given_int_values) {
    EXPECT_EQ(3, sum(1, 2));
    EXPECT_EQ(5, sum(2, 3));
    EXPECT_EQ(-1,sum(1,-2));
}