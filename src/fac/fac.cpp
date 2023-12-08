#include "fac.h"
#include "../complex.h"

/* Simple test to try catch2 */
unsigned int fac( unsigned int number ) {
    return number <= 1 ? number : Factorial(number-1)*number;
}
