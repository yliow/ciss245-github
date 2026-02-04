#include <iostream>

void swap(int & x, int & y)
{
    int t = x;
    x = y;
    y = t;
}

int main()
{
    // int x = 0, y = 1;
    // std::cout << x << ' ' << y << '\n';
    // swap(x, y);
    // std::cout << x << ' ' << y << '\n';

    int i = 0;
    int & ri = i;
    std::cout << i << ' ' << ri << '\n';
    i = 42;
    std::cout << i << ' ' << ri << '\n';
    int & ri2 = i;
    std::cout << i << ' ' << ri << ' ' << ri2 << '\n';
    ri = -1;
    std::cout << i << ' ' << ri << ' ' << ri2 << '\n';
    i = -2;
    std::cout << i << ' ' << ri << ' ' << ri2 << '\n';

    int &a = i, &b = i, &c = i;

    int x = 99;
    int & rx = x;
    int & rrx = rx;
    std::cout << x << ' ' << rx << ' ' << rrx << '\n';
    rrx = -99;
    std::cout << x << ' ' << rx << ' ' << rrx << '\n';

    int y = 1000;
    int & ry = y;
    ///ry = y; // WRONG!!!!!
    ry = x;

    int aa = 0;
    // double & raa = aa; WRONG
    
    return 0;
}
