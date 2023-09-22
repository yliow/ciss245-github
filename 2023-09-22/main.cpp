#include <iostream>

int main()
{
    // int x = 42;
    // std::cout << x << ' ' << (unsigned long long) &x << '\n';

    int x[3] = {2, 3, 5};
    for (int i = 0; i < 3; ++i)
    {
        std::cout << &x[i] << ' ' << x[i] << '\n'; 
    }

    int * p;
    p = &x[0];
    std::cout << p << '\n';

    std::cout << x[0] << ' ' << (*p) << '\n';
    *p = -1;
    std::cout << x[0] << ' ' << (*p) << '\n';
    
    return 0;
}
