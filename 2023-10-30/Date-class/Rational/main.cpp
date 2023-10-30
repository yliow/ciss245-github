#include <iostream>
#include "Rational.h"

int main()
{
    Rational r0(1, 2);
    std::cout << "r0: " << r0 << '\n';
    Rational r1;
    Rational r2(r0);

    Rational r3;
    std::cin >> r3;
    std::cout << "r3: " << r3 << '\n';
    return 0;
}
