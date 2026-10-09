#include <iostream>
#include "Rational.h"

int main()
{
    Rational f0(1, 2);
    std::cout << f0 << '\n';
    std::cout << f0.n() << '\n';
    f0.n() = 5;
    std::cout << f0 << '\n';
    return 0;
}
