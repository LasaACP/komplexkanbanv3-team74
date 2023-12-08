#include "norm.h"
#include "../complex.h"
#include <cmath>

double norm(const complex c) {
  return sqrt(c.real * c.real + c.imaginary * c.imaginary);
}