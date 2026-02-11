#include <iostream>
#include "Fraction.h"

int main()
{
    Fraction f0 = {1, 2};
    Fraction f1 = {1, 3};
    f1 += f0;
    std::cout << f1 << '\n';
    return 0;
}
