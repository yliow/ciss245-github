#include <iostream>
#include "Rational.h"

int main()
{
    Rational r0(1, 2);
    std::cout << "r0: " << r0 << '\n';
    Rational r1;
    Rational r2(r0);
    std::cout << "r2: " << r2 << '\n'; 
    Rational r3;
    //std::cin >> r3;
    std::cout << "r3: " << r3 << '\n';

    Rational r4(1, 2);
    Rational r5(1, 3);
    Rational r6;
    r6 = (r4 += r5); // same as
              // either r4.operator+=(r5)  (function is in class)
              // or     operator+=(r4, r5) (function not in class)
              // In operator+=, the "this" is pointing to r4.
    
    std::cout << '\n';
    
    return 0;
}