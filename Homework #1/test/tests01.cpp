#include <gtest/gtest.h>
#include "../include/vowel_counter.h"


TEST(VowelCounterTest, EmptyString) {
    string input = "";
    int expected = 0;
    EXPECT_EQ(return_count_vowel_letters(input), expected);
}

TEST(VowelCounterTest, NoVowels) {
    string input = "bcdfghjklmnpqrstvwxyz";
    int expected = 0;
    EXPECT_EQ(return_count_vowel_letters(input), expected);
}

TEST(VowelCounterTest, OnlyVowels) {
    string input = "aeiou";
    int expected = 5;
    EXPECT_EQ(return_count_vowel_letters(input), expected);
}

TEST(VowelCounterTest, MixedString) {
    string input = "hello world";
    int expected = 3; // e, o, o
    EXPECT_EQ(return_count_vowel_letters(input), expected);
}

TEST(VowelCounterTest, RepeatedVowels) {
    string input = "aaeeiioouu";
    int expected = 10;
    EXPECT_EQ(return_count_vowel_letters(input), expected);
}

TEST(VowelCounterTest, WithSpaces) {
    string input = "this is a test";
    int expected = 4; // i, i, a, e
    EXPECT_EQ(return_count_vowel_letters(input), expected);
}

TEST(VowelCounterTest, SingleVowel) {
    string input = "b";
    int expected = 0;
    EXPECT_EQ(return_count_vowel_letters(input), expected);
    
    input = "a";
    expected = 1;
    EXPECT_EQ(return_count_vowel_letters(input), expected);
}

TEST(VowelCounterTest, LongString) {
    string input = "abcdefghijklmnopqrstuvwxyz";
    int expected = 5; // a, e, i, o, u
    EXPECT_EQ(return_count_vowel_letters(input), expected);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}