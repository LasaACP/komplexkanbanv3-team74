class complex{

  public:
    double real;
    double imaginary;
    complex();
    complex(double r, double i = 0);

  complex operator* (const complex& c);
  bool operator==(const complex& c) const;
};