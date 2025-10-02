#include <iostream>

void f()
{
    int * p = new int[5];
    // for (int i = 0; i < 5; ++i)
    // {
    //     *(p + i) = 42;
    // }
    // q = p, q = p + 1, q = p + 2, q = p + 3, q = p + 4
    
    for (int * q = p; q < p + 5; q = q + 1)
    {
        (*q) = 42;
    }
}

int main()
{
    // int x[5];
    // std::cout << &x[0] << ' '
    //           << &x[1] << ' '
    //           << (&x[0] + 1) << '\n';
        
    // std::cout << (unsigned long long) &x[0] << ' ' 
    //          << (unsigned long long) &x[1] << '\n';
    f();

    return 0;
}
