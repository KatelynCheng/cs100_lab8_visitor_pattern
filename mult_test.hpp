#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "mult.hpp"
#include "op.hpp"

TEST(MutiTest, MutiEvaluate)
{
    Op *test1 = new Op(8);
    Op *test2 = new Op(8);
    Mult *test = new Mult(test1, test2);
    EXPECT_EQ(test->evaluate() , test1->evaluate() * test2->evaluate());
    EXPECT_EQ(test->stringify(), test1->stringify() + " * " + test2->stringify());
}

#endif //__MULT_TEST_HPP__
