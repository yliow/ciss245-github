#include <iostream>

void push_back(int x[], int * x_len, int newvalue)
{
    x[*x_len] = newvalue;
    ++(*x_len);
}

int main()
{
    int x = 42;
    int y = 123;

    int * p = &x;
    int * q = &y;

    std::cout << (*p) << '\n';

    p = q;
    std::cout << (*p) << '\n';

    double * r = p;

    int x[] = {5, 3, 1, 2, 4, 6};
    int x_len = 3;
    push_back(x, &x_len, 42);

    return 0;
}
