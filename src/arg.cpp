#include "arg.h"
#include "complex.h"
#include <cmath>

double arg(const complex c) {
  return atan(c.imaginary / c.real);
}