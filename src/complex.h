class complex{

  public:
    double real;
    double imaginary;
    complex();
    complex(double r, double i);

  complex operator* (const complex& c);
  bool operator==(const complex& c) const;
  bool operator!=(const complex& c) const;

  complex operator+=(const complex& c);
  complex operator-=(const complex& c);
  complex operator*=(const complex& c);
  complex operator/=(const complex& c);
  complex operator/(const complex& c);
  complex operator+(const complex& c);
  void operator =(const complex& c);
  complex operator-(const complex& c);

};