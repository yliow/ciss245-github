#include <iostream>
#include "IntDynArray.h"

int main()
{
    IntDynArray a(5);
    std::cout << a << '\n';

    for (int i = 0; i < 10; ++i)
    {
        a.push_back(i);
        std::cout << a << ' ' << a.size() << ' ' << a.capacity() << '\n';
    }

    // IntDynArray b(a);
    // std::cout << b << ' ' << b.size() << ' ' << b.capacity() << '\n';

    // a.push_back(1000);
    // a[0] = -9;
    // std::cout << a << ' ' << a.size() << ' ' << a.capacity() << '\n';
    // std::cout << b << ' ' << b.size() << ' ' << b.capacity()<< '\n';
    // b = a;
    // std::cout << a << ' ' << a.size() << ' ' << a.capacity() << '\n';
    // std::cout << b << ' ' << b.size() << ' ' << b.capacity()<< '\n';

    return 0;
} // a.~IntDynArray() called
