#include <iostream>
#include "Rational.h"

int main()
{
    Rational r0(1, 2);
    //r0.print();
    std::cout << r0 << '\n';

    r0.set_n(9999);
    std::cout << r0 << '\n';
    std::cout << r0.get_n() << '\n';

    std::cout << r0.n() << '\n';
    r0.n() = 54321;
    std::cout << r0 << '\n';

    std::cin >> r0; // operator>>(std::cin , r0)
    std::cout << r0 << '\n';

    Rational r1(1, 2);
    Rational r2(1, 3);
    /*
    r1 += r2; // same as
              // 1. operator+=(r1, r2)
              // 2. r1.operator+=(r2)
              // r0 = (r1 += r2) 
    std::cout << r1 << '\n';
    */
    //Rational r3 = (r1 += r2);
    //std::cout << r3 << '\n';

    Rational r3(0, 1);
    r3 = r1 + r2;
    // r1 + r2:
    // same as
    // 1. operator+(r1, r2)
    // 2. r1.operator+(r2)
    std::cout << r3 << '\n';
    return 0;
}
