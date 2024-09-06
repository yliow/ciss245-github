// Array.cpp

#include <iostream>
#include "Array.h"

int max(int x[], int start, int end)
{
    int m = x[start];
    for (int i = start + 1; i < end; ++i)
    {
        if (x[i] > m)
        {
            m = x[i];
        }
    }
    return m;
}

int linearsearch(int x[], int start, int end, int target)
{
    for (int i = start; i < end; ++i)
    {
        if (x[i] == target)
        {
            return i;
        }
    }
    return -1;
}

void print_array(int x[], int start, int end)
{
    for (int i = start; i < end; ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << '\n';
}
