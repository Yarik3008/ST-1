// Copyright 2025 UNN-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    if (value <= 1) {
    return false;
  }
    if (value <= 3) {
    return true;
  }
    if (value % 2 == 0 || value % 3 == 0) {
    return false;
  }
    for (uint64_t i = 5; i * i <= value; i += 6) {
        if (value % i == 0 || value % (i + 2) == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
    if (n == 0) {
    return 0;
  }
    if (n == 1) {
    return 2;
  }
  uint64_t count = 1;
  uint64_t num = 3;
    while (count < n) {
        if (checkPrime(num)) {
      count++;
    }
        if (count == n) {
      return num;
    }
    num += 2;
  }
  return num;
}

uint64_t nextPrime(uint64_t value) {
  uint64_t next = value + 1;
    while (true) {
        if (checkPrime(next)) {
      return next;
    }
    next++;
  }
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
    for (uint64_t i = 2; i < hbound; ++i) {
        if (checkPrime(i)) {
      sum += i;
    }
  }
  return sum;
}
