#include <iostream>
#include "Rational.h"

int main()
{
    Rational r0(1, 2); // r0 models 1/2
    std::cout << r0 << '\n';
    Rational r1(r0);
    std::cout << r1 << '\n';

    r0 += r1 += r1;
    std::cout << r0 << '\n';
    // std::cout << r0 << '\n';
    // Rational r2 = (r0 + r1);
    // std::cout << r2 << '\n';

    // r0 = 3/2 = 12 / 8
    // r1 = 1/2
    Rational r2 = r0 + r1;
    // r0 + r1 = r0.operator+(r1)
    std::cout << "r2: " << r2 << '\n';

    std::cout << r2.get_n() << '\n';
    (r2.set_n(1000)).set_d(8000);
    std::cout << r2 << '\n';

    std::cout << r2.n() << '\n';
    r2.n() = 42;

    Rational r3(1, 2);
    Rational r4(10, 20);
    std::cout << (r3 == r4) //  same as r3.operator==(r4)
                             //          OR
                             //          operator==(r3, r4)
               << '\n';
    r3.n() = 0;
    std::cout << (r3 == r4) //  same as r3.operator==(r4)
                             //          OR
                             //          operator==(r3, r4)
               << '\n';

    Rational r5(5);
    std::cout << r5 << '\n';

    Rational r6;
    std::cout << r6 << '\n';

    Rational r7 = r5 + 1; // r5.operator+(1)
                          // if fails tries to typecast
                         // tries r5.operator+(Rational(1))
    std::cout << r7 << '\n';
    r7 = 1 + r5;
    std::cout << r7 << '\n';

    Rational * p = new Rational; // default constrcutro
    Rational * p1 = new Rational(5);
    Rational * p2 = new Rational(5, 2);

    std::cout << p->n() << '\n';
    delete p;
    delete p1;
    delete p2;
    return 0;
}
