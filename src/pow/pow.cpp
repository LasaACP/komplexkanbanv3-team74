#include "pow.h"
#include "../complex.h"
#include "../arg/arg.h"
#include <cmath>
#include <bits/stdc++.h>

complex pow(double b, const complex exp) {
  return complex(cos(exp.imaginary*log(b)), sin(exp.imaginary)*log(b)) * pow(b, exp.real);
}

complex pow(const complex b, int exp) {
  if (exp == 0) {
    return complex(1,0);
  } else {
    return pow(b, exp - 1) * b;
  }
}

complex pow(const complex b, double exp) {
  double r = sqrt(b.real*b.real + b.imaginary*b.imaginary);
  double theta = atan(b.imaginary/b.real);
  return complex(cos(exp*theta), sin(exp*theta)) * pow(r, exp);
}

complex pow(const complex b, const complex exp1) {
  double r = sqrt(b.real*b.real + b.imaginary*b.imaginary);
  return pow(2.718281828459045, (complex(exp1.real, exp1.imaginary) * log(r)) + (complex(0,1) * exp1 * arg(b)));
}