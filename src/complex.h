class complex{

  public:
    double real;
    double imaginary;
    complex();
    complex(double r, double i = 0);

  complex operator* (const complex& c);
  bool operator==(const complex& c) const;
  bool operator!=(const complex& c) const;

  complex operator+= (const complex& c);
  complex operator-= (const complex& c);
  complex operator/(const complex& c);
<<<<<<< HEAD
  complex operator+(const complex& c);
  complex operator =(const complex& c);
  complex operator-(const complex& c);
=======

>>>>>>> 68cf00c8c5f0ef386ce0dbac3e0b82e50fda20f2
};