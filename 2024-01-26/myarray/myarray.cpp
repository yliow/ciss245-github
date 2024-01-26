// myarray.cpp

#include <iostream>
#include "myarray.h"

void myarray_init(int x[], int & x_size)
{
    x_size = 0;
}

void myarray_println(int x[], int x_size)
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

void myarray_pushback(int x[], int & x_size, int v)
{
    x[x_size] = v;
    ++x_size;
}
