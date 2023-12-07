#include "conj.h"
#include "complex.h"

complex conj(complex c) {
  return complex(c.real, -c.imaginary);
}