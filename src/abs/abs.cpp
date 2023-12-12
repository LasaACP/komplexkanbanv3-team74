#include "../complex.h"
#include "abs.h"
#include "../pow/pow.h"
#include "../sqrt/sqrt.h"

#include <cmath>

complex abs(const complex c) {
  return complex(sqrt(pow(c.real,2.0)), sqrt(pow(c.imaginary,2.0)));
}
