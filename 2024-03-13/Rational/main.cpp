#include <iostream>
#include "Rational.h"

int main()
{
    Rational r0(1, 2);
    std::cout << "r0: " << r0 << '\n';
    r0.set_n(100);
    std::cout << r0.n() << '\n';
    r0.n() = 2;
    std::cout << "r0: " << r0 << '\n';
    
    Rational r1(2, 3);
    std::cout << "r1: " << r1 << '\n';
    r1 += r0; // r1.operator+=(r0)
    std::cout << "r1: " << r1 << '\n';
    
    std::cout << r1 << '\n';
    r1 = r1 + r0; // r1 + r0 ==== r1.operator+(r0)

    r0 = Rational(1, 2);
    r1 = Rational(1, 3);
    std::cout << "r0:" << r0 << '\n';
    std::cout << "r1:" << r1 << '\n';
    Rational r2 = (r1 += r0);
    std::cout << "r1:" << r1 << '\n';
    std::cout << "r2:" << r2 << '\n';

    r0 = Rational(1, 2);
    r1 = Rational(1, 3);
    ((r1 += r0) += r0);
    std::cout << "r1:" << r1 << '\n';

    int i = 1;
    int j = 2;
    i += j;
    std::cout << "i:" << i << '\n';
    i = 1;
    (i += j) += j;
    std::cout << "i:" << i << '\n';
    i = 1;
    ((i += j) += j) += j;
    std::cout << "i:" << i << '\n';
    
    return 0;
}
