#include "inserter.h"
#include "../complex.h"

ostream& operator<<(ostream& out, const complex& c) {
  out << c.real << "+" << c.imaginary << "i";
  return out;
}