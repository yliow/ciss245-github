// IntArray.cpp

#include <iostream>
#include "IntArray.h"

void array_print(int x[], int x_len)
{
    std::cout << '{';
    for (int i = 0; i < x_len; ++i)
    {
        std::cout << x[i];
        if (i < x_len - 1)
        {
            std::cout << ", ";
        }
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


void arraY_bubblesort(int x[], int n)
{
    for (int i = n - 2; i >= 0; --i)
    {
        for (int j = 0; j <= i; ++j)
        {
            if (x[j] > x[j + 1])
            {
                int t = x[j];
                x[j] = x[j + 1];
                x[j + 1] = t;
            }
        }
    }
}

