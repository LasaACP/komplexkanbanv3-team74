#include "../complex.h"
#include "abs.h"
#include "../pow/pow.h"
#include "../sqrt/sqrt.h"

#include <cmath>

double abs(const complex c) {
  return sqrt(c.real*c.real + c.imaginary*c.imaginary);
}
