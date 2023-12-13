#include "../complex.h"
#include <cmath>
#include "tan.h"

complex tan(const complex c) {
  double real = c.real;
  double imag = c.imaginary;
  double r = (tan(real)-(tan(real)*tanh(imag)*tanh(imag)))/(1+(tan(real)*tan(real)*tanh(imag)*tanh(imag)));
  double i = (tanh(imag)+(tan(real)*tan(real)*tanh(imag)))/(1+(tan(real)*tan(real)*tanh(imag)*tanh(imag)));
  return complex(r, i);
}