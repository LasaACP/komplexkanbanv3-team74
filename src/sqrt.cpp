#include "sqrt.h"
#include <iostream>
#include <cmath>
#include "../src/complex.cpp"


complex sqrt(complex c) {
  complex resulted=pow(c,0.5);
  return resulted;
}
//test