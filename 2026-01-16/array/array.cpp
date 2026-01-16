#include <iostream>
#include "array.h"

void array_print(int x[], int x_size, int x_capacity)
{
    std::cout << '{';
    for (int i = 0; i < x_size; ++i)
    {
        std::cout << x[i];
        if (i < x_size - 1) std::cout << ", ";
    }
    std::cout << '}';
}

void array_println(int x[], int x_size, int x_capacity)
{
    array_print(x, x_size, x_capacity);
    std::cout << '\n';
}

void push_back(int x[], int & x_size, int x_capacity, int e)
{
    if (x_size < x_capacity)
    {
        x[x_size] = e;
        ++x_size;
    }
}

void array_assign(int y[], int & y_size, int y_capacity,
                  int x[], int x_size, int x_capacity)
{
    for (int i = 0; i < x_size; ++i)
    {
        y[i] = x[i];
    }
    y_size = x_size;
}
