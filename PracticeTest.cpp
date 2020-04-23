/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("ba");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_mid_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("anna");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_mid_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("anne");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_complex_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("repaper");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_complex_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("roterary");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_empty_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, decending_random_order)
{
    // Expected order 5 3 1
    int a = 1;
    int b = 5;
    int c = 3;
    Practice obj;
    obj.sortDescending(a, b, c);
    ASSERT_TRUE(a == 5 && b == 3 && c == 1);
}

TEST(PracticeTest, decending_opposite_order)
{
    // Expected order 332 321 141
    int a = 141;
    int b = 321;
    int c = 332;
    Practice obj;
    obj.sortDescending(a, b, c);
    ASSERT_TRUE(a == 332 && b == 321 && c == 141);
}

TEST(PracticeTest, decending_in_order)
{
    // Expected order 12 6 2
    int a = 12;
    int b = 6;
    int c = 2;
    Practice obj;
    obj.sortDescending(a, b, c);
    ASSERT_TRUE(a == 12 && b == 6 && c == 2);
}

TEST(PracticeTest, decending_negative_numbers)
{
    // Expected order -2 -23 -42
    int a = -23;
    int b = -42;
    int c = -2;
    Practice obj;
    obj.sortDescending(a, b, c);
    ASSERT_TRUE(a == -2 && b == -23 && c == -42);
}

TEST(PracticeTest, decending_negative_and_nonnegative)
{
    // Expected order 23 -23 -42
    int a = -23;
    int b = 23;
    int c = -42;
    Practice obj;
    obj.sortDescending(a, b, c);
    ASSERT_TRUE(a == 23 && b == -23 && c == -42);
}

TEST(PracticeTest, decending_numbers_with_tie)
{
    // Expected order 5 5 2 
    int a = 2;
    int b = 5;
    int c = 5;
    Practice obj;
    obj.sortDescending(a, b, c);
    ASSERT_TRUE(a == 5 && b == 5 && c == 2);
}

TEST(PracticeTest, decending_numbers_all_tied)
{
    // Expected order 34 34 34
    int a = 34;
    int b = 34;
    int c = 34;
    Practice obj;
    obj.sortDescending(a, b, c);
    ASSERT_TRUE(a == 34 && b == 34 && c == 34);
}
