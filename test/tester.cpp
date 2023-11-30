#include <gtest/gtest.h>

#include "../lib/testsubject.h"

//Squre

TEST(MathTest, Square1) {
    ASSERT_EQ(TestSubject::square(2), 4);
    ASSERT_EQ(TestSubject::square(3), 9);
}

TEST(MathTest, Square2) {
    EXPECT_EQ(TestSubject::square(2), 4);
    EXPECT_EQ(TestSubject::square(3), 9);
}

TEST(MathTest, Square3) {
    EXPECT_NO_THROW(TestSubject::square(2));
}

//isEven

TEST(MathTest, isEven1) {
    EXPECT_NO_THROW(TestSubject::isEven(2));
}

TEST(MathTest, isEven2) {
    EXPECT_EQ(TestSubject::isEven(2), true);
}

TEST(MathTest, isEven13) {
    ASSERT_EQ(TestSubject::isEven(3), false);
}