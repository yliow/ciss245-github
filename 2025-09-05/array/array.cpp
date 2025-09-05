#include <iostream>
#include "array.h"

// notation: x[2],x[3],x[4] ... x[2..4]
// bubblesort of x[0 .. n - 1]
//
// for i = n - 2, n - 3, ..., 0:
//     for j = 0, ..., i
//         if x[j] > x[j + 1]:
//             swap x[j] and x[j + 1]
void bubblesort(int x[], int start, int end)
{
    for (int i = end - 2; i >= start; --i)
    {
        for (int j= start; j <= i; ++j)
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

/*
  lower = 0
  upper = n - 1
  while (lower <= upper)
  {
      mid = lower + (upper - lower) / 2
      if (x[mid] == target)
         return mid
      else if (target < x[mid]):
         upper = mid - 1
      else
         lower = mid + 1
  }
  return -1;
 */
int binarysrch(int x[], int start, int end, int target)
{
    int lower = start;
    int upper = end - 1;
    while (lower <= upper)
    {
        int mid = lower + (upper - lower) / 2;
        if (x[mid] == target)
            return mid;
        else if (target < x[mid])
            upper = mid - 1;
        else
            lower = mid + 1;
    }
    return -1;
}

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

// return is error code. 0 = no error. 1 = overflow error.
int push_back(int y[], int & y_size, int y_capacity, int v)
{
    if (y_size < y_capacity)
    {
        y[y_size] = v;
        ++y_size;
        return 0;
    }
    else
    {
        return 1;
    }
}
