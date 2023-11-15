#include <iostream>
#include "DynIntArray.h"
#include <vector>

int main()
{
    DynIntArray a(5); // want array of size 5
    std::cout << "a: " << a << '\n'; // want to see {0, 0, 0, 0, 0}; a points to size 5
    a[1] = 42;
    std::cout << "a: " << a << '\n';
    
    DynIntArray b(a);
    std::cout << "b: " << b << '\n';

    b = a;
    b.push_back(100);
    std::cout << "b: " << b << ' ' << b.capacity() << '\n';
    b.push_back(101);
    std::cout << "b: " << b << ' ' << b.capacity() << '\n';
    b.push_back(102);
    std::cout << "b: " << b << ' ' << b.capacity() << '\n';
    b.push_back(103);
    std::cout << "b: " << b << ' ' << b.capacity() << '\n';
    b.push_back(104);
    std::cout << "b: " << b << ' ' << b.capacity() << '\n';
    b.push_back(105);
    std::cout << "b: " << b << ' ' << b.capacity() << '\n';
    b.push_back(106);
    std::cout << "b: " << b << ' ' << b.capacity() << '\n';
    return 0;
}
