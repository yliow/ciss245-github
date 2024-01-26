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
        std::cout << x[i] << ", ";
    }
    std::cout << "}\n";
}
