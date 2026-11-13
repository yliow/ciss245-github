#include <iostream>
#include "IntDynArray.h"

int main()
{
    IntDynArray a(5);
    // want a to expand beyond capacity
    std::cout << a << '\n';

    a[0] = 42;
    std::cout << a << '\n';

    a.resize(3);
    std::cout << a << '\n';
    a[1] = 8;
    a[2] = 7;
    std::cout << a << '\n';

    a.resize(4);
    std::cout << a << '\n';
    a.resize(5);
    std::cout << a << '\n';
    a.resize(6);
    std::cout << a << '\n';

    IntDynArray b(a);
    std::cout << a << '\n';
    std::cout << b << '\n';

    IntDynArray c(3);
    c = a;
    
    return 0;
}
