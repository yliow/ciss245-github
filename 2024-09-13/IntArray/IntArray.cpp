// IntArray.cpp

#include <iostream>
#include "IntArray.h"

void array_print(int x[], int x_len)
{
    std::cout << '{';
    for (int i = 0; i < x_len; ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << "}\n";
}

void array_init(int x[], int & x_len, int v, int n)
{
    for (int i = 0; i < n; ++i)
    {
        x[i] = v;
    }
    x_len = n;
}
