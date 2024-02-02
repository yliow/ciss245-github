// myarray.cpp

#include <iostream>
#include "myarray.h"

void myarray_init(int x[], int & x_size, int x_capacity)
{
    x_size = 0;
}

void myarray_println(int x[], int x_size, int x_capacity)
{
    std::cout << '{';
    for (int i = 0; i < x_size; ++i)
    {
        std::cout << x[i];
        if (i < x_size - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << "}\n";
}

void myarray_pushback(int x[], int & x_size, int x_capacity,
                      int v)
{
    if (x_size < x_capacity) // to prevent buffer overflow
    {
        x[x_size++] = v;
    }
}
