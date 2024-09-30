#include <iostream>

struct Fraction
{
    int n, d;
};
    
int main()
{
    int * p = NULL;
    p = new int;
    
    if (p == NULL)
    {
        std::cout << "sorry cannot *p ...\n";
    }
    else
    {
        std::cout << "*p = " << (*p) << '\n';
        *p = 42;
    }

    delete p;
    //std::cout << (*p) << '\n';

    Fraction * q = NULL;
    // ......
    // ......
    q = new Fraction;
    // ......
    delete q;
    q = NULL;

    p = new int[1000];
    for (int i = 0; i < 1000; ++i)
    {
        *(p + i) = 42;
        p[i] = 42;
        *(p - i) = 42;
    }
    std::cout << (unsigned long long)(p) << '\n';
    std::cout << (unsigned long long)(p + 1) << '\n';
    std::cout << (unsigned long long)(p + 2) << '\n';

    delete[] p;
    p = NULL;

    if (p == NULL)
    {
        p = new int[1000];
    }

    while (1)
    {
        std::cout << "hi\n":
        p = new int[10000000];
        //delete[] p;
    }
    
    return 0;
}
