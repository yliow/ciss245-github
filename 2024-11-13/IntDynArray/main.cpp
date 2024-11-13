#include <iostream>
#include "IntDynArray.h"

void f()
{
    if (1)
    {
        IntDynArray b(10);
    }
        
    IntDynArray a(5);// 5 means in constructor, initially allocate 5 integers
    std::cout << a << '\n';
    for (int i = 0; i < 10; ++i)
    {
        a.push_back(i);
        std::cout << a << '\n';
    }
}

int main()
{
    f();
    return 0;
}
