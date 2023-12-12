#include "acos.h"
#include "../complex.h"
#include "../pow/pow.h"
#include "../sqrt/sqrt.h"
#include "../log/log.h"

#include <cmath>
#include <iostream>

complex acos( const complex c) {
  complex i = complex(0, -1);
  complex z=complex(0,1.0);
  const complex x = i * sqrt(z - pow(c,2));
  return i * log(c + x);
}