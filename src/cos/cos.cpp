#include "cos.h"
#include <cmath>
#include "../complex.h"

complex cos(const complex c){
  double real = cos(c.real) * cosh(c.imaginary);
  double imag = sin(c.real) * sinh(c.imaginary) * -1;
  return complex(real, imag);
}