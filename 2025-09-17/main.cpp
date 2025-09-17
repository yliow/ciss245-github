#include <iostream>

int main()
{
    int x = 42;
    int * p = &x;
    int & r = x;
    std::cout << x << ' ' << *p << ' ' << r << '\n';
    x = -1;
    std::cout << x << ' ' << *p << ' ' << r << '\n';

    *p = 5;
    std::cout << x << ' ' << *p << ' ' << r << '\n';

    r = 999;
    std::cout << x << ' ' << *p << ' ' << r << '\n';

    std::cout << &x << ' ' << p << ' ' << &r << '\n';

    std::cout << *r << '\n';
    
    return 0;
}
