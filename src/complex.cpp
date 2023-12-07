#include "complex.h"

complex::complex(){real = 0; imaginary = 0;}
complex::complex(double r, double i) {real = r; imaginary = i;}

complex complex::operator* (const complex& c) {
    complex temp;
    double tempReal = (real*c.real) - (imaginary * c.imaginary);
    double tempImaginary = (real*c.imaginary) + (imaginary*c.real);
    temp.real = tempReal;
    temp.imaginary = tempImaginary;
    return temp;
}

bool complex::operator==(const complex& c) const {
  return (real == c.real && imaginary == c.imaginary);
}

bool complex::operator!=(const complex& c) const {
  return !(*this == c);
}

complex complex::operator+= (const complex& c) {
  return c;
}
complex complex::operator-= (const complex& c) {
  return c;
}

complex complex::operator*=(const complex& c) {
  return c;
}
complex complex::operator/=(const complex& c) {
  return c;
}

complex complex::operator/ (const complex& c) {
  return c;
}


complex complex::operator+(const complex& c) {
  return c;
  /* double c = a.real + real;
  double d = a.imaginary + imaginary;
  complex *e = new complex(c, d);
  return *e; */
}

void complex::operator= (const complex& c){
  /* real = a.real;
    imaginary = a.imaginary;
    return *this;
    */
}

complex complex::operator-(const complex& c) {
  return c;
  /* double b = real - a.real;
    double c = imaginary - a.imaginary;
    complex *eg = new complex(b, c);
    return *e; */
}
