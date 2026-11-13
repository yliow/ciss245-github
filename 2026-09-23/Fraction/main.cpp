#include <iostream>
#include "Fraction.h"

int main()
{
    Fraction f0 = {1, 2};
    std::cout << f0    // operator<<(std::cout, f)
                       // << '\n'  
              << '\n';
    Fraction f1 = {1, 3};
    std::cout << f1 // becomes operator<<(std::cout,
                    //                    f1)
              << '\n';
    Fraction sum = f0 + f1;
    std::cout << sum << '\n';

    return 0;
}
