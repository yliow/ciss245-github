#include <iostream>
#include "IntDynArray.h"

int main()
{
    IntDynArray a(5);// 5 means in constructor, initially allocate 5 integers
    std::cout << a << '\n';
    for (int i = 0; i < 10; ++i)
    {
        a.push_back(i);
        std::cout << a << '\n';
    }

    return 0;
}
