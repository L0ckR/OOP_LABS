#include <gtest/gtest.h>

#include <strToNum.hpp>

TEST(FirstLabTests, EmptyTest) {
    ASSERT_TRUE(digitsFromStr("") == "");
    ASSERT_TRUE(digitsFromStr(" ") == "");
    ASSERT_TRUE(digitsFromStr("  ") == "");
    ASSERT_TRUE(digitsFromStr("   ") == "");
}

TEST(FirstLabTests, OneNumberTest) {
    ASSERT_TRUE(digitsFromStr("1") == "1");
    ASSERT_TRUE(digitsFromStr("129012901291") == "129012901291");
    ASSERT_TRUE(digitsFromStr("33333333333333333333333") == "33333333333333333333333");
    ASSERT_TRUE(digitsFromStr("776232331323") == "776232331323");
}


TEST(FirstLabTests, OnlyNumbersTest) {
    ASSERT_TRUE(digitsFromStr("8 7 78 768 72 ") == "877876872");
    ASSERT_TRUE(digitsFromStr("6 2 2 22  5 5 5 ") == "62222555");
    ASSERT_TRUE(digitsFromStr("453421 32323  12312 1 313") == "45342132323123121313");
    ASSERT_TRUE(digitsFromStr("3131 313 1 313 133 1") == "313131313131331");
}

TEST(FirstLabTests, ComplexTest) {
    ASSERT_TRUE(digitsFromStr("s efwf wq3 3 ftw 32 rr e3 ") == "33323");
    ASSERT_TRUE(digitsFromStr(" t2 r2r 23 r23 r  ") == "222323");
    ASSERT_TRUE(digitsFromStr("ojfnwjnfowfn7827rgruhrbe378ey2y") == "78273782");
    ASSERT_TRUE(digitsFromStr("eeeeeeeeehbhberybeuygudhwud") == "");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}