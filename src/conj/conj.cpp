#include "conj.h"
#include "../complex.h"

complex conj(const complex c) {
  return complex(c.real, -c.imaginary);
}