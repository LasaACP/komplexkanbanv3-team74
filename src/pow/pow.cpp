#include "pow.h"
#include "../complex.h"

complex pow(double b, const complex exp) {
  return exp;
}

complex pow(const complex b, int exp) {
  if (exp == 0) {
    return complex(1,0);
  } else {
    return pow(b, exp - 1) * b;
  }
}

complex pow(const complex b, double exp) {
  return b;
}

complex pow(const complex b, const complex exp) {
  return exp;
}