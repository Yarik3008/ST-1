// Copyright 2025 UNN-CS
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(st1, sumPrime1) {
    uint64_t res = sumPrime(2000000);
    uint64_t expected = 142913828922;
    EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime2) {
    uint64_t res = sumPrime(10);
    uint64_t expected = 17;
    EXPECT_EQ(expected, res);
}

TEST(CheckPrimeTest, SmallPrimes) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(5));
    EXPECT_TRUE(checkPrime(7));
    EXPECT_TRUE(checkPrime(11));
}

TEST(CheckPrimeTest, NonPrimes) {
    EXPECT_FALSE(checkPrime(1));
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(6));
    EXPECT_FALSE(checkPrime(8));
    EXPECT_FALSE(checkPrime(9));
    EXPECT_FALSE(checkPrime(10));
}

TEST(CheckPrimeTest, LargePrime) {
    EXPECT_TRUE(checkPrime(999983));
}

TEST(NPrimeTest, FirstPrimes) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
    EXPECT_EQ(nPrime(4), 7);
    EXPECT_EQ(nPrime(5), 11);
}

TEST(NPrimeTest, LargerPrime) {
    EXPECT_EQ(nPrime(10001), 104743);
}

TEST(NextPrimeTest, Basic) {
    EXPECT_EQ(nextPrime(2), 3);
    EXPECT_EQ(nextPrime(3), 5);
    EXPECT_EQ(nextPrime(5), 7);
    EXPECT_EQ(nextPrime(11), 13);
}


TEST(NextPrimeTest, LargerNumber) {
    EXPECT_EQ(nextPrime(1000000), 1000003);
}

TEST(SumPrimeTest, Zero) {
    EXPECT_EQ(sumPrime(0), 0);
}


TEST(SumPrimeTest, One) {
    EXPECT_EQ(sumPrime(1), 0);
}

TEST(SumPrimeTest, SmallRange) {
    EXPECT_EQ(sumPrime(10), 17);
}
