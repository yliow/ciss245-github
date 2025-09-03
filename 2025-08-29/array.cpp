#include <iostream>
#include "array.h"

int linearsrch(int x[], int start, int end, int target)
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

void print(int x[], int start, int end)
{
    std::cout << '{';
    for (int i = start; i < end; ++i)
    {
        std::cout << x[i];
        if (i < end - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << '}';
}

void println(int x[], int start, int end)
{
    print(x, start, end);
    std::cout << '\n';
}
