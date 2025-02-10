#include <iostream>

int main()
{
    int * p;
    int s = 10;
    p = new int[s];
    // for (int i = 0; i < 10; ++i)
    // {
    //     //std::cout << (p + i) << ' ' << *(p + i) << '\n';
    //     std::cout << (p + i) << ' ' << p[i] << '\n';
    // }

    for (int * q = p; q < p + s; ++q)
    {
        std::cout << q << ' ' << *q << '\n';
    }

    int x[10] = {3, 5, 2};
    std::cout << x << '\n';
    for (int i = 0; i < 10; ++i)
    {
        std::cout << i << ' ' << x[i] << '\n';
    }
    for (int * q = x; q < x + 10; ++q)
    {
        std::cout << q << ' ' << *q << '\n';
    }
    
    return 0;
}
