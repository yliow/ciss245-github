#include <iostream>
#include "Rational.h"

int main()
{
    Rational r0(2, 3);
    std::cout << "r0:" << r0 << '\n';

    // std::cout << r0.n();
    // r0.n() = 5;

    Rational r1;
    std::cout << r1 << '\n';

    return 0;
}
