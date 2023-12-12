#include "acos.h"
#include "../complex.h"
#include "../pow.cpp"
#include "pow.h"
#include <cmath>
#include <iostream>

complex acos(const complex c) {
  complex i = complex(0, 1);

  return -i * log(c + i * sqrt(1.0 - pow(c,2)));
}