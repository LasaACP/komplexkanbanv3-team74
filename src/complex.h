class complex{

  private:
    double real;
    double imaginary;

  public:
    complex();
    complex(double r, double i = 0);

  complex operator* (const complex& c);

};