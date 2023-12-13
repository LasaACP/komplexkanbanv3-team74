#include "complex.h"
#include <cmath>

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
  double r1 = std::round(real*1000000)/1000000;
  double r2 = std::round(c.real*1000000)/1000000;
  double i1 = std::round(imaginary*1000000)/1000000;
  double i2 = std::round(c.imaginary*1000000)/1000000;
  return ((r1==r2) && (i1==i2));
}

bool complex::operator!=(const complex& c) const {
  return !(*this == c);
}

complex complex::operator+= (const complex& c) {
  real += c.real;
  imaginary += c.imaginary;
  return *this;
}

complex complex::operator-= (const complex& c) {
  real -= c.real;
  imaginary -= c.imaginary;
  return *this;
}

complex complex::operator*=(const complex& c) {
  double tempReal = real;
  double tempImaginary = imaginary;
  real = (tempReal*c.real) - (tempImaginary * c.imaginary);
  imaginary = (tempReal*c.imaginary) + (tempImaginary*c.real);
  return *this;
}
complex complex::operator/=(const complex& c) {
  double tempReal = real;
  double tempImaginary = imaginary;
  real = (tempReal*c.real) + (tempImaginary * c.imaginary);
  tempReal /= pow(c.real, 2) + pow(c.imaginary, 2);
  imaginary = (c.real*tempImaginary) - (c.imaginary*tempReal);
  tempImaginary /= pow(c.real, 2) + pow(c.imaginary, 2);
  return *this;
}

complex complex::operator/ (const complex& c) {
  complex temp;
  double tempReal = (real*c.real) + (imaginary * c.imaginary);
  tempReal /= pow(c.real, 2) + pow(c.imaginary, 2);
  double tempImaginary = (c.real*imaginary) - (c.imaginary*real);
  tempImaginary /= pow(c.real, 2) + pow(c.imaginary, 2);
  temp.real = tempReal;
  temp.imaginary = tempImaginary;
  return temp;
}

complex complex::operator+(const complex& c)const {
  double r = c.real + real;
  double i = c.imaginary + imaginary;
  return complex(r, i);
}

void complex::operator= (const complex& c){
  real = c.real;
  imaginary = c.imaginary;
}

complex complex::operator-(const complex& c) {
  double r = real - c.real;
  double i = imaginary - c.imaginary;
  return complex(r, i);
}
