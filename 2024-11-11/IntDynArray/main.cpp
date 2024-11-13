#include <iostream>
#include "IntDynArray.h"

int main()
{
    IntDynArray a;
    std::cout << a << '\n';
    for (int i = 0; i < 10; ++i)
    {
        a.push_back(i);
        std::cout << a << '\n';
    }

    return 0;
}
