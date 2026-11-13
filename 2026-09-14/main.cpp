#include <iostream>

int main()
{
    int x = 123;
    std::cout << "val of x:" << x << '\n'
              << "addr of x:" << (long long) &x << '\n';

    int y = -1;
    std::cout << "val of y:" << y << '\n'
              << "addr of y:" << (long long) &y << '\n';
    
    return 0;
}
