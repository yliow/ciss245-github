#include <iostream>
#include "array.h"

void print_arr(int * start, int * end)
{
    for (int * p = start; p < end; ++p)
    {
        std::cout << (*p) << ' ';
    }
    std::cout << '\n';
    return;
}

int * linearsrch(int * start, int * end, int target)
{
    for (int * p = start; p < end; ++p)
    {
        if (*p == target) return p;
    }
    return NULL; // or std::nullptr

    /*

      while (start < end)
      {
          if (*start == target) return start;
          ++start;
      }
      return NULL;
      
     */
}

int count(int * start, int * end, int target)
{
    int count = 0;
    while (start < end)
    {
        if (*start == target) ++count;
        ++start;
    }
    return count;
}

void swap(int * p, int * q)
{
    int t = *p;
    *p = *q;
    *q = t;
}

void bubblesort(int * start, int * end)
{
    for (int * q = end; q >= start; --q)
    {
        for (int * p = start; p < q - 1; ++p)
        {
            if (*p > *(p + 1))
            {
                swap(p, p + 1);
            }
        }
    }
}


int * binsrch(int * start, int * end, int target)
{
    int * lower = start;
    int * upper = end - 1; // WARNING: INSIDE!!!
    while (lower <= upper)
    {
        int * mid = lower + (upper - lower) / 2;
        // mid = (lower + upper) / 2
        if (*mid == target) return mid;
        else if (target < *mid)
        {
            upper = mid - 1;
        }
        else
        {
            lower = mid + 1;
        }
    }
    return NULL;
}
