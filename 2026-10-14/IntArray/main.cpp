#include <iostream>
#include "IntArray.h"

int main()
{
    IntArray a(5); // a pretends an array of "size" 5
    std::cout << a << '\n'; // print a[0], ..., a[4]
    a[0] = 42;
    std::cout << a[0] << '\n';
    a.resize(3); // not a models an array of size 3
    std::cout << a << '\n';
    a[0] = 2;
    a[1] = 3;
    a[2] = 5;
    IntArray b(3);
    b[0] = 2;
    b[1] = 3;
    b[2] = 5;
    std::cout << (a == b) // same as a.operator==(b)
              << '\n';

    for (int i = 0; i < 10; ++i)
    {
        a.push_back(7);
        std::cout << a << '\n';
    }
    return 0;
}
