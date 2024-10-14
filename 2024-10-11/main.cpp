#include <iostream>

int main()
{
    int * p;
    p = new int[10];

    // for (int i = 0; i < 10; ++i)
    // {
    //     p[i] = rand() % 20;
    // }

    for (int * q = p; q < p + 10; ++q)
    {
        *q = rand() % 20;
    }

    for (int * q = p; q < p + 10; ++q)
    {
        std::cout << (*q) << ' ';
    }
    std::cout << '\n';

    int max;
    max = *p;
    for (int * q = p + 1; q < p + 10; ++q)
    {
        if (*q > max)
        {
            max = *q;
        }
        std::cout << (*q) << ' ' << "max:" << max << '\n';
    
    }
    std::cout << "max:" << max << '\n';
    
    return 0;
}
