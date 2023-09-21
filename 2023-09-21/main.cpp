#include <iostream>


int main()
{
    // int x = 123;
    // unsigned long long int addr_of_x = (unsigned long long int)(&x);
    // std::cout << x << ' '
    //           << addr_of_x << ' '
    //           << &x << '\n';

    // std::cout << sizeof(x) << '\n';

    int x;
    int y;
    std::cout << (unsigned long long int) &x << ' '
              << (unsigned long long int) &y << '\n';

    int z[3];
    std::cout << (unsigned long long int) &z[0] << '\n';
    std::cout << (unsigned long long int) &z[1] << '\n';
    std::cout << (unsigned long long int) &z[2] << '\n';
    
    return 0;
}
