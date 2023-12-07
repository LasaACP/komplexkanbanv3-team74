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
    complex *e = new complex(b, c);
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