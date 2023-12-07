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