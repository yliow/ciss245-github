#include <iostream>
#include "array.h"

void array_println(int x[], int xlen)
{
    for (int i = 0; i < xlen; ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << '\n';
}

void array_append(int x[], int * pxlen, int xcapacity, int newval)
{
    if (*pxlen < xcapacity)
    {
        x[*pxlen] = newval;
        ++(*pxlen);
    }
}
