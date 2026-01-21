#include <iostream>
#include "array.h"

void array_print(int x[], int x_size, int x_capacity)
{
    //std::cout << '{';
    std::cout << '|';
    for (int i = 0; i < x_size; ++i)
    {
        std::cout << (x[i] == 1 ? 'X' : ' ');
        //if (i < x_size - 1) std::cout << ", ";
    }
    std::cout << '|';
    //std::cout << '}';
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

void swap(int & x, int & y)
{
    int t = x;
    x = y;
    y = t;
}

void bubblesort(int x[], int x_size, int x_capacity)
{
    for (int i = x_size - 2; i >= 0; --i)
    {
        for (int j = 0; j <= i; ++j)
        {
            if (x[j] > x[j + 1])
            {
                swap(x[j], x[j + 1]);
            }
        }
    }
}

int binarysrch(int x[], int x_size, int x_capacity, int target)
{
    int lower = 0;
    int upper = x_size - 1;
    while (lower <= upper)
    {
        int mid = lower + (upper - lower) / 2;
        if (x[mid] == target) return mid;
        else if (target < x[mid]) upper = mid - 1;
        else lower = mid + 1;
    }
    return -1;
}
