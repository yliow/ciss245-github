#include <iostream>

int main()
{
    Rational r0(1, 2); // r0 models 1/2
    std::cout << r0 << '\n';
    Rational r1(r0);
    std::cout << r0 << '\n';

    r0 += r1;
    std::cout << r0 << '\n';
    Rational r2 = (r0 + r1);
    std::cout << r2 << '\n';
    
    return 0;
}
