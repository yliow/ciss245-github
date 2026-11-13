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
    c = a; // i.e. c.operator=(a)
    std::cout << '\n';
    std::cout << a << '\n';
    std::cout << c << '\n';
    //a = a;

    std::cout << "testing pushback ...\n";
    for (int i = 0; i < 3; ++i)
    {
        a.push_back(1000); // try push_front
        std::cout << a << '\n';
    }
    // j = ++i;
    // k = (i += j);
    // int i = 0, j = 1, k = 2;
    // i = (j = (k = l));
    // std::cout << i << ' ' << j << ' ' << k << '\n';

    
    
    return 0;
}
