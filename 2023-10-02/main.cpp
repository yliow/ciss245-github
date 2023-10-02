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

void push_back(int x[], int & x_len, int v)
{
    x[x_len] = v;
    ++x_len;
}

void push_back(int x[], int * x_len, int v)
{
    x[*x_len] = v;
    ++(*x_len);
}

int main()
{
    int x = 0, y = 1;
    swap(&x, &y);
    std::cout << x << ' ' << y << '\n';

    int a[10];
    int a_len = 0;

    print_array(a, a_len);
    std::cout << '\n';

    a_len = 2;
    print_array(a, a_len);
    std::cout << '\n';

    push_back(a, a_len, 42);
    print_array(a, a_len);
    std::cout << '\n';

    push_back(a, a_len, 99);
    print_array(a, a_len);
    std::cout << '\n';

    push_back(a, &a_len, 9999);
    print_array(a, a_len);
    std::cout << '\n';

    int * p;
    p = new int; // <-- new stuff
    std::cin >> (*p);
    std::cout << (*p) << '\n';
    delete p;
    p = NULL;
    if (p != NULL)
        std::cout << (*p) << '\n';

    p = new int[10000000];
    delete[] p;
    
    return 0;
}
