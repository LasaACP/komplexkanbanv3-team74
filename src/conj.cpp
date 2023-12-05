#include "conj.h"

complex complex::conj(const complex c) {
  return complex(c.real, -c.imaginary);
}