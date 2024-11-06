#include <iostream>
#include "IntArray.h"

int main()
{
    IntArray a; // IntArray objects have a max capacity of 5 integers
    std::cout << "a:" << a << '\n';
    a.push_back(2);
    std::cout << "a:" << a << '\n';
    a.push_back(5);
    std::cout << "a:" << a << '\n';
    a.push_back(7);
    std::cout << "a:" << a << '\n';
    
    return 0;
}
