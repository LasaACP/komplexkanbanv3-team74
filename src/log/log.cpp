#include "log.h"
#include "../abs/abs.h"
#include "../arg/arg.h"
#include "../complex.h"
#include <cmath>

complex log(const complex c) {
  double x = abs(c);
  double y = arg(c);
  return complex(log(x), y);
}