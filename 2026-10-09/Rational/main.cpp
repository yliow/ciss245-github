#include <iostream>
#include "Rational.h"

int main()
{
    Rational f0(1, 2);
    std::cout << f0 << '\n';
    std::cout << f0.n() << '\n';
    f0.n() = 5;
    std::cout << f0 << '\n';

    Rational f1(5); // f1 is 5/1
    std::cout << f1 << '\n';

    Rational f2;

    Rational f3(f1);
    std::cout << "f3:" << f3 << '\n';

    f0 += f3; // f0.operator+=(f3)
    // g++ will either
    //      operator+=(f0, f1) ----> non-member function
    //                               operator+=(const Rational &,
    //                                          const Rational &);
    // or
    //      f0.operator+=(f1)  ----> member function (in f0's class)
    //                               operator+=(const Rational &)
    std::cout << f0 << '\n';

    Rational f4 = f0 + f3; // f0.operator+(f3) f0
    // f0 + f3
    // g++ will either use
    //       operator+(f0, f3) -- non member function
    // or    f0.operator+(f3)  -- member function (inside class of f0)
    std::cout << f4 << '\n';
    return 0;


    /*

      int i = 0;
      int j = 1;
      int k = (i += j);

     */
}

