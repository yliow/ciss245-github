#include <iostream>
#include "Fraction.h"

int main()
{
    Fraction f0 = {1, 2};
    Fraction f1 = {2, 3};
    Fraction f2;

    f2 = f0 + f1;
    std::cout << f0 << ' ' << f1 << ' ' << f2 << '\n';
    
    f2 += f0;
    std::cout << f0 << ' ' << f1 << ' ' << f2 << '\n';

    std::cout << (f0 == f0) << ' ' << (f0 == f1) << '\n';

    int x = 42;
    std::cout << x << ' ' << (unsigned long long)(&x) << '\n';

    int y[3];
    for (int i = 0; i < 3; ++i)
    {
        std::cout << i << ' ' << (unsigned long long)(&y[i]) << '\n';
    }
    
    return 0;
}
