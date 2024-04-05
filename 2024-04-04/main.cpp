#include <iostream>

template < typename T >
void swap(T & x, T & y)
{
    T t = x;
    x = y;
    y = t;
    return;
}

int main()
{
    int i = 0, j = 3;
    std::cout << i << ' ' << j << '\n';
    swap(i, j);
    std::cout << i << ' ' << j << '\n';

    double x = 1.1, y = 5.5;
    std::cout << x << ' ' << y << '\n';
    swap(x, y);
    std::cout << x << ' ' << y << '\n';

    return 0;
}
