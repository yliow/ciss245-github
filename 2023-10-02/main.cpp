#include <iostream>

// pass by value ... does not work
// void swap(int x, int y)
// {
//     int t = x
//     x = y;
//     y = t;
// }

void swap(int & x, int & y)
{
    int t = x;
    x = y;
    y = t;
}

void swap(int * x, int * y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

void print_array(int x[], int x_len)
{
    std::cout << '{';
    for (int i = 0; i < x_len; ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << '}';
}
int main()
{
    int x = 0, y = 1;
    swap(&x, &y);
    std::cout << x << ' ' << y << '\n';

    int x[10];
    int x_len = 0;

    print_array(x, x_len);
        
    return 0;
}
