#include <iostream>
#include "C.h"

int main()
{
    C a(1, 2);
    std::cout << "a:" << a << '\n';
    C b(3, 4);
    std::cout << "b:" << b << '\n';

    return 0;
}
