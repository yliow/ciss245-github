#include <iostream>
#include "Rational.h"

int main()
{
    Rational f0;       // f0 model 0
    Rational f1(1, 2); // f1 model 1/2
    Rational f2(2, 3); // f2 model 2/3
    
    std::cout << "f0:" << f0 << '\n';
    std::cout << "f1:" << f1 << '\n';
    std::cout << "f2:" << f2 << '\n';

    return 0;
}