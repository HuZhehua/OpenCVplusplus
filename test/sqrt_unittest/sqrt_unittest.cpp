#include "sqrt.hpp"
#include "gtest/gtest.h"

TEST(SqrtTest, Zero)
{
	EXPECT_EQ(0, mysqrt(0));
}

TEST(SqrtTest, Positive)
{
	EXPECT_EQ(10, mysqrt(100));
	EXPECT_EQ(100, mysqrt(10000));
	EXPECT_EQ(99, mysqrt(9810));
}

TEST(SqrtTest, Negative)
{
	int i = -1;
	EXPECT_EQ(0, mysqrt(i));
}