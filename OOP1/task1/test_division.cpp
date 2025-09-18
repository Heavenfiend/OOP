#include "gtest/gtest.h"
#include "func.h"
#include <string>

std::string CaptureOutput(void (*func)(int, int), int n, int m) {
    ::testing::internal::CaptureStdout();
    func(n, m);
    return ::testing::internal::GetCapturedStdout();
}

TEST(DivisionTest, BasicCases) {
    EXPECT_EQ(CaptureOutput(division, 2, 3), "Amount of breaks: 5\n");
    EXPECT_EQ(CaptureOutput(division, 1, 1), "Amount of breaks: 0\n");
    EXPECT_EQ(CaptureOutput(division, 3, 3), "Amount of breaks: 8\n");
}

TEST(DivisionTest, ZeroCases) {
    EXPECT_EQ(CaptureOutput(division, 0, 5), "0\n");
    EXPECT_EQ(CaptureOutput(division, 5, 0), "0\n");
}

TEST(DivisionTest, NegativeCases) {
    EXPECT_EQ(CaptureOutput(division, -2, 3), "0\n");
    EXPECT_EQ(CaptureOutput(division, 2, -3), "0\n");
    EXPECT_EQ(CaptureOutput(division, -2, -3), "0\n");
}