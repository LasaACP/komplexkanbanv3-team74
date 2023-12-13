#include "cosh.h"
#include <cmath>
#include "../complex.h"

complex cosh(const complex c){
  double real = cosh(c.real) * cos(c.imaginary);
  double imag = sinh(c.real) * sin(c.imaginary);
  return complex(real, imag);
}