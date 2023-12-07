/*

  Compile with: g++ main.cpp ../src/fac.cpp catch_amalgamated
  Run with ./a.out

*/


//#define CATCH_CONFIG_RUNNER
//#define CATCH_AMALGAMATED_CUSTOM_MAIN
#include <iostream>
#include <cmath>
#include "../tests/catch_amalgamated.hpp"
#include "../src/fac.h"
#include "complex.h"
#include "conj.h"
#include "real.h"
#include "sqrt.h"
#include "acos.h"
#include "asin.h"
#include "atan.h"
#include "imag.h"
#include "pow.h"
#include "norm.h"
#include "arg.h"
using namespace std;

#ifdef CATCH_AMALGAMATED_CUSTOM_MAIN

int main( int argc, char* argv[] ) {
  // global setup...

  int result = Catch::Session().run( argc, argv );

  // global clean-up...
    cout << "Hello Catch2 Build with custom main()\n";

  return result;
}

#else    //Not CATCH_AMALGAMATED_CUSTOM_MAIN

TEST_CASE("Quick Catch2 test on Factorial", "[Factorial]")
{

  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Factorial" << endl;
  REQUIRE(Factorial(1) == 1);
  REQUIRE(Factorial(2) == 2);
  REQUIRE(Factorial(3) == 6);
  REQUIRE(Factorial(4) == 24);
  REQUIRE(Factorial(5) == 120);
  //
  
}




TEST_CASE("sqrt test") {
  REQUIRE(complex_sqrt(complex(3,4)).real==2);
  REQUIRE(complex_sqrt(complex(3,4)).imaginary==1);
  
}


TEST_CASE("real test") {
  REQUIRE(real(complex(3,5))==3);
  REQUIRE(real(complex(2,1))==2);
  REQUIRE(real(complex(0,5))==0);
  REQUIRE(real(complex(-3,4))==-3);
}

TEST_CASE("addition assign test") {
  // these tests will create an error until a stub is created so i just commented them out for now - justin w
  /*
  REQUIRE(complex(3,4) += complex(1,2) == complex(4,6));
  REQUIRE(complex(0,10) += complex(3,1) == complex(3,11));
  REQUIRE(complex(-5,-5) += complex(10,0) == complex(5,-5));
  REQUIRE(complex(34,54) += complex(91,49) == complex(125,103));
  */
}


TEST_CASE("multiplication operator") {
  REQUIRE(complex(3,5)*complex(2,1) == complex(1,13));
  REQUIRE(complex(2,-10)*complex(-6,8) == complex(68,76));
  REQUIRE(complex(-9,-6)*complex(3,-4) == complex(-51,18));
  REQUIRE(complex(7,2)*complex(3,-7) == complex(35,-43));
  
}


TEST_CASE("conj test") {
  REQUIRE(conj(complex(3,5))==complex(3,-5));
  REQUIRE(conj(complex(5,-6))==complex(5,6));
  REQUIRE(conj(complex(-2,8))==complex(-2,-8));
}

TEST_CASE("acos test") {
  REQUIRE(complex_acos(complex(-2,2)).real==2.325);
  REQUIRE(complex_acos(complex(-2,2)).imaginary==-1.734);
}

TEST_CASE("asin test") {
  REQUIRE(complex_asin(complex(-2,2)).real==-0.754);
  REQUIRE(complex_asin(complex(-2,2)).imaginary==1.734);
}

TEST_CASE("atan test") {
  REQUIRE(complex_atan(complex(-2,2)).real==-1.311);
  REQUIRE(complex_atan(complex(-2,2)).imaginary==0.239);
}

TEST_CASE("imag test") {
  REQUIRE(imag(complex(1, 2))==2);
  REQUIRE(imag(complex(1, -6))==-6);
  REQUIRE(imag(complex(1, 123))==123);
  REQUIRE(imag(complex(1, -14))==-14);
}

TEST_CASE("pow test") {
  REQUIRE(pow(2.0, complex(3,0))==complex(8,0));
  REQUIRE(pow(complex(1,2), 2)==complex(-3,4));
  REQUIRE(pow(complex(-3,4), 0.5)==complex(1,2));
  REQUIRE(pow(complex(1,2), complex(2,0))==complex(-3,4));
}

TEST_CASE("norm test") {
  REQUIRE(norm(complex(2,3))==sqrt(13));   
  REQUIRE(norm(complex(6,8))==10);
  REQUIRE(norm(complex(7,7))==sqrt(98));   
  REQUIRE(norm(complex(12,16))==20);
}

TEST_CASE("equality and inequality tests") {
  REQUIRE(complex(3,4)==complex(3,4));
  REQUIRE(complex(-10,14)==complex(-10,14));
  REQUIRE(complex(-3,5)!=complex(-3,4));
  REQUIRE(complex(4,-4)!=complex(3,-4));
}

TEST_CASE("arg test") {
  double pi = 4*atan(1);
  REQUIRE(arg(complex(1,1))==pi/4);  
  REQUIRE(arg(complex(1,sqrt(3)))==pi/3);
  REQUIRE(arg(complex(0,1))==pi/2);
  REQUIRE(arg(complex(1,0))==0);
}

// */
#endif  //ifndef CATCH_AMALGAMATED_CUSTOM_MAIN