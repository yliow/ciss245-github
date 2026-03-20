#include <iostream>
#include "IntDynArray.h"

int main()
{
    IntDynArray a(5);
    std::cout << a << '\n';

    for (int i = 0; i < 5; ++i)
    {
        a.push_back(i);
        std::cout << a << ' ' << a.size() << ' ' << a.capacity() << '\n';
    }
    return 0;
}
