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

