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

    Rational f3(f2);
    std::cout << "f3:" << f3 << '\n';

    f3 = (f1 += f2);
    std::cout << "f1:" << f1 << '\n';
    std::cout << "f3:" << f3 << '\n';

    std::cout << "&f1:" << &f1 << '\n';
    f1.m();

    std::cout << "f1:" << f1 << '\n';
    std::cout << "f2:" << f2 << '\n';
    f3 = f1 + f2; // f1.operator+(f2)
    std::cout << "f3:" << f3 << '\n';

    std::cin >> f0 >> f1 >> f2;
    std::cout << f0 << '\n';
    std::cout << f1 << '\n';
    std::cout << f2 << '\n';
    
    return 0;
}
