#include <iostream>
#include "IntArray.h"

int main()
{
    IntArray a; // a has array of 5 integers. a has a.size_ and a.capacity_ = 5    a[0] = 42; //  a[0] same as a.operator[](0)
    std::cout << a[0] << '\n';
    a.resize(2); // a.size_ set to 2
    std::cout << a << '\n';
    a.push_back(42);

    return 0;
}
