#include <iostream>
#include "DynIntArray.h"

int main()
{
    DynIntArray a(5); // want array of size 5
    std::cout << "a: " << a << '\n'; // want to see {0, 0, 0, 0, 0}; a points to size 5
    a[1] = 42;

    DynIntArray b(a);
    std::cout << "b: " << b << '\n';
    return 0;
}
