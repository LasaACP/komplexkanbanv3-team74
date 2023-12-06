/*

  Compile with: g++ main.cpp ../src/fac.cpp catch_amalgamated
  Run with ./a.out

*/


//#define CATCH_CONFIG_RUNNER
//#define CATCH_AMALGAMATED_CUSTOM_MAIN
#include <iostream>
#include "../tests/catch_amalgamated.hpp"
#include "../src/fac.h"
#include "complex.h"
#include "conj.h"
#include "real.h"
#include "complex_sqrt.h"
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




// */
#endif  //ifndef CATCH_AMALGAMATED_CUSTOM_MAIN