#include <iostream>

int main()
{
    int x = 42;
    int * p = &x;

    std::cout << x << ' ' << &x << ' ' << p << ' ' << *p << '\n';

    x = -1;
    std::cout << x << ' ' << &x << ' ' << p << ' ' << *p << '\n';

    *p = 999;
    std::cout << x << ' ' << &x << ' ' << p << ' ' << *p << '\n';

    return 0;
}
