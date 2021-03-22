//
// Created by Jan on 22/03/2021.
//

#include "gtest/gtest.h"
#include "main.h"

TEST(sum_test, should_return_sum_of_the_given_int_values) {
    EXPECT_EQ(1, sum(1));
    EXPECT_EQ(6, sum(1, 2, 3));
}