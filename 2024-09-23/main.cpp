#include <iostream>

// void swap(int x, int y)
// {
//     int t = x;
//     x = y;
//     y = t;
// }

// void swap(int & x, int & y)
// {
//     int t = x;
//     x = y;
//     y = t;
// }

void swap(int * p, int * q)
{
    int t = *p;
    *p = * q;
    *q = t;
}

int main()
{
    // int x = 42;
    // std::cout << x << ' ' << (unsigned long long) &x << '\n';

    // int y = 0;
    // std::cout << y << ' ' << (unsigned long long) &y << '\n';

    // double z[3] = {0.1, 0.2, 0.3};
    // for (int i = 0; i < 3; ++i)
    // {
    //     std::cout << i << ' ' << z[i] << ' '
    //               << (unsigned long long) &z[i] << '\n';
    // }
    
    // int * p = &x;
    // std::cout << x << ' ' << &x << ' ' << p << ' ' << *p << '\n';
    // x = 43;
    // std::cout << x << ' ' << &x << ' ' << p << ' ' << *p << '\n';
    // *p = 44;
    // std::cout << x << ' ' << &x << ' ' << p << ' ' << *p << '\n';

    // int x = 0, y = 1;
    // swap(x, y);
    // std::cout << x << ' ' << y << '\n';

    int x = 0, y = 1;
    swap(&x, &y);
    std::cout << x << ' ' << y << '\n';
    
    return 0;
}
