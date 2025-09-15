#include <iostream>

int main()
{
    // double d = 3.14159;
    // std::cout << sizeof(d) << '\n';
    // std::cout << sizeof(double) << '\n';
    // std::cout << (unsigned long long) &d << '\n';
    // double * p = &d;
    // std::cout << (unsigned long long) p << '\n';

    int x = 42;
    int * p = &x;
    std::cout << x << ' ' << &x << ' ' << p << ' ' << *p << '\n';
    return 0;
}
