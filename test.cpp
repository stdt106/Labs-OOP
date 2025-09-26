#include <gtest/gtest.h>
#include "functions.h"

TEST(ExtractNumbersTest, BasicTest) {
    std::vector<int> result = extractNumbers("abc123def45");
    std::vector<int> expected = {123, 45};
    EXPECT_EQ(result, expected);
}

TEST(ExtractNumbersTest, SingleNumber) {
    std::vector<int> result = extractNumbers("42");
    std::vector<int> expected = {42};
    EXPECT_EQ(result, expected);
}

TEST(ExtractNumbersTest, MultipleSingleDigits) {
    std::vector<int> result = extractNumbers("a1b2c3");
    std::vector<int> expected = {1, 2, 3};
    EXPECT_EQ(result, expected);
}

TEST(ExtractNumbersTest, NumbersAtEnd) {
    std::vector<int> result = extractNumbers("hello123");
    std::vector<int> expected = {123};
    EXPECT_EQ(result, expected);
}

TEST(ExtractNumbersTest, NumbersAtStart) {
    std::vector<int> result = extractNumbers("456world");
    std::vector<int> expected = {456};
    EXPECT_EQ(result, expected);
}

TEST(ExtractNumbersTest, OnlyLetters) {
    std::vector<int> result = extractNumbers("hello");
    std::vector<int> expected = {};
    EXPECT_EQ(result, expected);
}

TEST(ExtractNumbersTest, EmptyString) {
    std::vector<int> result = extractNumbers("");
    std::vector<int> expected = {};
    EXPECT_EQ(result, expected);
}

TEST(ExtractNumbersTest, NumbersWithSpaces) {
    std::vector<int> result = extractNumbers("12 34 56");
    std::vector<int> expected = {12, 34, 56};
    EXPECT_EQ(result, expected);
}

TEST(ExtractNumbersTest, LargeNumber) {
    std::vector<int> result = extractNumbers("abc999999def");
    std::vector<int> expected = {999999};
    EXPECT_EQ(result, expected);
}

TEST(ExtractNumbersTest, MixedContent) {
    std::vector<int> result = extractNumbers("1a22b333c4444d");
    std::vector<int> expected = {1, 22, 333, 4444};
    EXPECT_EQ(result, expected);
}