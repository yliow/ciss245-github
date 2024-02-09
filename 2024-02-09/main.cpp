#include <iostream>

void f(int & x)
{
    x = 0;
}

int main()
{
    int y = 42;
    f(y);
    std::cout << y << '\n';

    int & z = y;
    z = 99;
    std::cout << y << '\n';
    int * const p = &y;
    *p = 98;
    std::cout << y << '\n';

    int & w = z;
    w = 97;
    std::cout << y << '\n';

    const int & u = y;
    u = 1;
    
    return 0;
}
