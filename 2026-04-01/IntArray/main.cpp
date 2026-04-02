#include <iostream>
#include "IntArray.h"

int main()
{
    IntArray a;
    std::cout << a << ' ' << a.size() << ' ' << a.capacity() << '\n';
    
    a.push_back(3);
    std::cout << a << ' ' << a.size() << ' ' << a.capacity() << '\n';

    a.push_back(5);
    std::cout << a << ' ' << a.size() << ' ' << a.capacity() << '\n';

    a[1] = 42;
    
    return 0;
}
