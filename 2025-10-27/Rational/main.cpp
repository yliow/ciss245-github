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
    
    return 0;
}
