#include <iostream>
#include "IntArray.h"

int main()
{
    IntArray a;
    std::cout << a << '\n';

    IntArray b(5);
    std::cout << b << '\n';

    std::cout << b[2] << '\n';
    b[2] = 42;
    std::cout << b << '\n';
    
    std::cout << b[100] << '\n';

    b.resize(3);
    std::cout << b << '\n';

    b.push_back(42);
    std::cout << b << '\n';
    
    return 0;
}
