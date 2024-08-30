#include <iostream>

// void f(int x)
// {
//     std::cout << "f's x:" << x << '\n';
//     x = 42;
//     std::cout << "f's x:" << x << '\n';
// }

// void f(int & x)
// {
//     std::cout << "f's x:" << x << '\n';
//     x = 42;
//     std::cout << "f's x:" << x << '\n';
// }

// void inc(int x)
// {
//     ++x;
// }

// void inc(int & x)
// {
//     ++x;
// }

// void swap(int x, int y)
// {
//     int t = x;
//     x = y;
//     y = t;
// }

void swap(int & x, int & y)
{
    int t = x;
    x = y;
    y = t;
}

int main()
{
    int x = 0;
    
    // std::cout << "main's x:" << x << '\n';
    // f(x);
    // std::cout << "main's x:" << x << '\n';

    // inc(x);
    // std::cout << "x:" << x << '\n';

    int y = 1;
    std::cout << "x, y: " << x << ' ' << y << '\n';
    swap(x, y);
    std::cout << "x, y: " << x << ' ' << y << '\n';
    
    return 0;
}
