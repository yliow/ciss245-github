#include <iostream>
#include "Rational.h"

int main()
{
    Rational r0(1, 2); // r0 models 1/2
    std::cout << r0 << '\n';
    Rational r1(r0);
    std::cout << r1 << '\n';

    r0 += r1 += r1;
    std::cout << r0 << '\n';
    // std::cout << r0 << '\n';
    // Rational r2 = (r0 + r1);
    // std::cout << r2 << '\n';

    // r0 = 3/2 = 12 / 8
    // r1 = 1/2
    Rational r2 = r0 + r1;
    // r0 + r1 = r0.operator+(r1)
    std::cout << "r2: " << r2 << '\n';
    
    return 0;
}
