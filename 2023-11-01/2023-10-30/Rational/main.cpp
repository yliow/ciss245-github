#include <iostream>
#include "Rational.h"

// vec2d
// IntPointer
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
    std::cout << r6.n() << '\n';

    r6 = r4 + r5; // r4 + r5 = r4.operator+(r5)
    // r4 + r5 ..... r4.__add__(r5) python
    std::cout << r6 << '\n';

    r6 = r4 - r5; // r4 - r5 = r4.operator-(r5)
    // r4 - r5 ..... r4.__sub__(r5) python
    std::cout << r6 << '\n';
    
    r4 = r5; // r4.operator=(r5)

    std::cout << (r4 + 1) << '\n';
    // i = j = k;
    return 0;
} // r6.~Rational(), r5.~Rational(), .....
