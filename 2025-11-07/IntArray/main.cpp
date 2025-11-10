#include <iostream>
#include "IntArray.h"

int main()
{
    IntArray a; // a has array of 5 integers. a has a.size_ and a.capacity_ = 5
    a[0] = 42; //  a[0] same as a.operator[](0)
    a[1] = -1;
    std::cout << a[0] << '\n';
    a.resize(2); // a.size_ set to 2
    std::cout << a << '\n';
    a.resize(1);
    std::cout << a << '\n';
    a.push_back(44);
    std::cout << a << '\n';
    a.push_back(46);
    std::cout << a << '\n';
    a.push_back(48);
    std::cout << a << '\n';
    a.push_back(50);
    std::cout << a << '\n';
    a.push_back(52);
    std::cout << a << '\n';
    
    // a.push_front(3) -- put 3 at index 0 with orig values shifted to right by 1
    // a.insert(4, 1)i.e., insert value 4 at index 1
    return 0;
}
