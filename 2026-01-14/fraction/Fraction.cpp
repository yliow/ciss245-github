// file: Fraction.cpp

#include <iostream>
#include "Fraction.h"

void Fraction_add(int a0, int b0,
                  int a1, int b1,
                  int & a2, int & b2)
{
    a2 = a0 * b1 + a1 * b0;
    b2 = b0 * b1;
}

void Fraction_println(int a2, int b2)
{
    std::cout << a2 << '/' << b2 << '\n';
}
