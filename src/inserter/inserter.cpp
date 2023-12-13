#include "inserter.h"
#include "../complex.h"

ostream& operator<<(ostream& out, const complex& c) {
  if (c.imaginary >= 0) {
    out << c.real << "+" << c.imaginary << "i";
  } else if (c.imaginary < 0) {
    out << c.real << "-" << -c.imaginary << "i";
  return out;
  }
}