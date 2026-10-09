#include <iostream>
#include "Rational.h"

int main()
{
    Rational f0(1, 2);
    std::cout << f0 << '\n';
    std::cout << f0.n() << '\n';
    f0.n() = 5;
    std::cout << f0 << '\n';

    Rational f1(5); // f1 is 5/1
    std::cout << f1 << '\n';
    return 0;
}
