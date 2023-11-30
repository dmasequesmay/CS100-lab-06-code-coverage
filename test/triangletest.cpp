#include <gtest/gtest.h>
#include "../lib/Triangle.h"
using shapes::Triangle;


//Constructor
TEST(TriangleTests, constructor1) {
    EXPECT_DEATH (Triangle(1,3,4), "First side is not the longest");
}

TEST(TriangleTests, constructor2) {
    EXPECT_NO_THROW (Triangle(3,3,1));
}

TEST(TriangleTests, constructor3) {
    ASSERT_NO_THROW (Triangle(3,3,1));
}

//Perimeter
TEST(TriangleTests, perimeter1) {
    Triangle *aTriangle = new Triangle(3,3,3);
    EXPECT_EQ (aTriangle->getPerimeter(),9);
}

TEST(TriangleTests, perimeter2) {
    Triangle *aTriangle = new Triangle(3,3,3);
    EXPECT_NO_THROW (aTriangle->getPerimeter());
}

TEST(TriangleTests, perimeter3) {
    Triangle *aTriangle = new Triangle(3,3,3);
    ASSERT_NO_THROW (aTriangle->getPerimeter());
}

//Area

TEST(TriangleTests, area1) {
    Triangle *aTriangle = new Triangle(3,3,1);
    EXPECT_NO_THROW (aTriangle->getArea());
}

TEST(TriangleTests, area2) {
    Triangle *aTriangle = new Triangle(6,5,5);
    EXPECT_EQ (aTriangle->getArea(), 12);
}

TEST(TriangleTests, area3) {
    Triangle *aTriangle = new Triangle(3,3,1);
    ASSERT_NO_THROW (aTriangle->getArea());
}

//isIsosceles

TEST(TriangleTests, isIsoceles1) {
    Triangle *aTriangle = new Triangle(3,3,1);
    EXPECT_NO_THROW (aTriangle->isIsosceles());
}

TEST(TriangleTests, isIsoceles2) {
    Triangle *aTriangle = new Triangle(3,3,1);
    ASSERT_NO_THROW (aTriangle->isIsosceles());
}

TEST(TriangleTests, isIsoceles3) {
    Triangle *aTriangle = new Triangle(3,3,1);
    ASSERT_TRUE (aTriangle->isIsosceles() == true);
}

//isEquilateral

TEST(TriangleTests, isEquilateral1) {
    Triangle *aTriangle = new Triangle(3,3,1);
    EXPECT_NO_THROW (aTriangle->isIsosceles());
}

TEST(TriangleTests, isEquilateral2) {
    Triangle *aTriangle = new Triangle(3,3,1);
    ASSERT_NO_THROW (aTriangle->isIsosceles());
}

TEST(TriangleTests, isEquilateral3) {
    Triangle *aTriangle = new Triangle(3,3,3);
    ASSERT_TRUE (aTriangle->isEquilateral() == true);
}

//Kind

TEST(TriangleTests, kind1) {
    Triangle *aTriangle = new Triangle(3,2,2);
    EXPECT_EQ (aTriangle->getKind(), Triangle::Kind::ISOSCELES);
}

TEST(TriangleTests, kind2) {
    Triangle *aTriangle = new Triangle(5,4,3);
    EXPECT_NO_THROW (aTriangle->getKind());
}

TEST(TriangleTests, kind3) {
    Triangle *aTriangle = new Triangle(3,3,3);
    ASSERT_NO_THROW (aTriangle->getKind());
}

TEST(TriangleTests, kind4) {
    Triangle *aTriangle = new Triangle(3,3,3);
    EXPECT_EQ (aTriangle->getKind(), Triangle::Kind::EQUILATERAL);
}