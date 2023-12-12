#include <iostream>
#include <cmath>
#include "sqrt.h"
#include "../complex.h"
#include "../pow/pow.h"

complex sqrt(complex c) {
     complex resulted=pow(c,0.5);
    return resulted;
  }
/*complex sqrt(const complex c) {
  return c;
}*/