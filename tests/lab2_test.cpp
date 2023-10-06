#include <gtest/gtest.h>
#include "Eleven.hpp"



TEST(TestConstructors, CopyConstructorTest) {
    Eleven num1("A15");
    Eleven num2(num1);
    ASSERT_TRUE(num1 == num2);
}

TEST(TestConstructors, AssignmentTest) {
    Eleven num1({'1', 'A', '4', '7'});
    Eleven num2 = num1;
    ASSERT_TRUE(num1 == num2);
}

TEST(TestConstructors, InitListConstructorTest) {
    Eleven num1("12A4");
    Eleven num2({'1', '2', 'A', '4'});
    ASSERT_TRUE(num1 == num2);
}


TEST(TestBoolOps, EqualTest) {
    Eleven num1("AA34");
    Eleven num2({'A', '3', '3', '4'});
    ASSERT_FALSE(num1 == num2);
}

TEST(TestBoolOps, UnequalTest1) {
    Eleven num1("AA34");
    Eleven num2({'2', '4', '6', '4'});
    ASSERT_TRUE(num1 != num2);
}

TEST(TestBoolOps, UnequalTest2) {
    Eleven num1("7324");
    Eleven num2({'7', '3', '2', '4'});
    ASSERT_FALSE(num1 != num2);
}

TEST(TestBoolOps, LessTest) {
    Eleven num1("74");
    Eleven num2({'1', 'A', '2'});
    ASSERT_TRUE(num1 < num2);
}

TEST(TestBoolOps, LessEqualTest) {
    Eleven num1("12A54");
    Eleven num2({'3', '5'});
    ASSERT_FALSE(num1 <= num2);
}

TEST(TestBoolOps, MoreTest) {
    Eleven num1("543");
    Eleven num2({'A'});
    ASSERT_TRUE(num1 > num2);
}

TEST(TestBoolOps, MoreEqualTest) {
    Eleven num1("A73");
    Eleven num2({'A','7', '3'});
    ASSERT_TRUE(num1 >= num2);
}

TEST(TestArithmeticOps, AddittionTest) {
    Eleven num1("5A");
    Eleven num2({'1', '6'});
    ASSERT_TRUE((num1 + num2) == Eleven("75"));
}

TEST(TestArithmeticOps, SubstractionTest1) {
    Eleven num1("76");
    Eleven num2({'7'});
    ASSERT_TRUE((num1 - num2) == Eleven("6A"));
}

TEST(TestArithmeticOps, SubstractionTest2) {
    Eleven num1("A31");
    Eleven num2({'7'});
    ASSERT_TRUE((num1 - num2) == Eleven("A25"));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}