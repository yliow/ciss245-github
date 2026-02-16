#include <iostream>
#include "Fraction.h"

int main()
{
    Fraction f0 = {1, 2}; // f0 = 1/2
    Fraction f1 = {1, 3}; // f1 = 1/3
    Fraction f5 = (f1 += f0);      // f1 is 1/2 + 1/3 = 5/6
    std::cout << f1 << '\n';

    Fraction f2 = {1, 2};
    Fraction f3 = {1, 3};
    Fraction f4 = f2 + f3;
    std::cout << "f4:" << f4 << '\n';

    std::cout << operator==(f0, f1) << '\n';
    return 0;
}

