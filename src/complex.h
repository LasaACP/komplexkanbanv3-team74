class complex{

  public:
    double real;
    double imaginary;
    complex();
    complex(double r, double i = 0);

  complex operator* (const complex& c);
  complex operator* (const double& n);
  bool operator==(const complex& c) const;
  bool operator!=(const complex& c) const;

  complex operator+=(const complex& c);
  complex operator-=(const complex& c);
  complex operator*=(const complex& c);
  complex operator/=(const complex& c);
  complex operator/(const complex& c);
  complex operator+(const complex& c) const;
  complex operator+(const double& n);
  void operator =(const complex& c);
  complex operator-(const complex& c);

};