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
