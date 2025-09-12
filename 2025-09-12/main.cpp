#include <iostream>

// int max(int x, int y)
// {
//     return (x >= y ? x : y );
// }

// double max(double x, double y)
// {
//     return (x >= y ? x : y );
// }

// char max(char x, char y)
// {
//     return (x >= y ? x : y );
// }

// int main()
// {
//     std::cout << max(3, 5) << '\n';
//     std::cout << max(4.2, 1.1) << '\n';
//     std::cout << max('a', 'z') << '\n';
    
//     return 0;
// }


int main()
{
    int x = 42;
    int y = 0;
    // long int y = 0;
    // long long int z = 0;
    // long long w = 0;
    std::cout << sizeof(x) << '\n';
    std::cout << sizeof(int) << '\n';
    std::cout << (long long)(&x) << ' ' << x << '\n';
    std::cout << (long long)(&y) << ' ' << y << '\n';

    int z[4] = {2, 3, 5, 7};
    for (int i = 0; i < 4; ++i)
    {
        std::cout << (long long)(&z[i]) << ' ' << z[i] << '\n';
    }

    int * p = &x;
    std::cout << (long long) p << '\n';
    //std::cout << (long) p << '\n';
    
    return 0;
}
