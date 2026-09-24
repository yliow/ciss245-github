#include <iostream>

int main()
{
    int * p;

    p = new int;
    *p = 42;
    std::cout << (*p) << '\n';
    delete p;

    p = new int[1000];
    p[0] = 42;
    p[1] = 0;
    p[2] = -2;
    for (int i = 0; i < 3; ++i)
    {
        std::cout << p[i] << '\n';
    }
    delete[] p;

    p = new int[1000000];
        
    return 0;
}
