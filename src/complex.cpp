class complex {

private:
  double real;
  double imaginary;

public:
  complex() {
    real = 0;
    imaginary = 0;
  }
  complex(double r, double i = 0) {
    real = r;
    imaginary = i;
  }

  complex operator*(const complex &c) {}

  complex operator+(complex a) {
    double c = a.real + real;
    double d = a.imaginary + imaginary;
    complex *e = new complex(c, d);
    return *e;
  
  complex operator-(complex a) {
    double b = real - a.real;
    double c = imaginary - a.imaginary;
    complex *eg = new complex(b, c);
    return *e;
  }

  complex operator==(complex a) {
    return (a.real == real && a.imaginary == imaginary);
  }

  complex operator =(complex a){
    real = a.real;
    imaginary = a.imaginary;
    return *this;
  }
  
};
=======
#include "complex.h"

complex::complex(){real = 0; imaginary = 0;}
complex::complex(double r, double i = 0) {real = r; imaginary = i;}

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
complex complex::operator/ (const complex& c) {
  return c;
}
