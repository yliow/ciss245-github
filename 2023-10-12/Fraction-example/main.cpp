// main.cpp

#include <iostream>
#include "Fraction.h"

int main()
{
    Fraction f0 = get_Fraction(5, 24);
    std::cout << f0 << '\n';
    Fraction f1 = get_Fraction(5, 1);
    std::cout << f1 << '\n';

    std::cout << (get_Fraction(1, 2) == get_Fraction(2, 4))
              << '\n';
    
    return 0;
}
