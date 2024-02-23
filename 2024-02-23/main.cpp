#include <iostream>

template < typename T >
void println(T * start, T * end)
{
    // print *start, ..., *(end - 1)
    for (T * p = start; p < end; ++p)
    {
        std::cout << (*p) << ' ';
    }
    std::cout << '\n';
}

template < typename T >
void bubblesort(T x[], int start, int end)
{
    // sort x[start], ..., x[end - 1] using bubblesort
    // for the orig bubblesort from x[0] to x[N - 1], the
    // code is
    /*
      for (int i = N - 2; i >= 0; --i)
      {
          for (int j = 0; j <= i; ++j)
          {
              if (x[j] > x[j + 1])
              {
                  int t = x[j]; x[j] = x[j + 1]; x[j + 1] = t;
              }
          }
      }
     */

    for (int i = end - 2; i >= 0; --i)
    {
        for (int j = start; j <= i; ++j)
        {
            if (x[j] > x[j + 1])
            {
                swap(x[j], x[j + 1]);
            }
            std::cout << i << ' ' << j << ": ";
            println(&x[0], &x[7]);
        }
    }
}

template < typename T > 
void bubblesort(T * start, T * end)
{
    // sort *start, ..., *(end - 1) using bubblesort
    for (T * p = end - 2; p >= start; --p)
    {
        for (T * q = start; q <= p; ++q)
        {
            if (*q > *(q + 1))
            {
                swap(*q, *(q + 1));
            }
            println(start, end);
        }
    }
}

int binarysearch(int x[], int start, int end, int target)
{
    int lower = start;
    int upper = end - 1;
    while (lower <= upper)
    {
        //mid = (lower + upper) / 2; // BAD
        int mid = lower + (upper - lower) / 2;
        if (x[mid] == target)
        {
            return mid;
        }
        else if (target < x[mid])
        {
            upper = mid - 1;
        }
        else
        {
            lower = mid + 1;
        }
    }
    return -1;
}

int * binarysearch(int * start, int * end, int target)
{
    int * lower = start;
    int * upper = end - 1;
    while (lower <= upper)
    {
        //int * mid = (lower + upper) / 2; // BAD
        int * mid = lower + (upper - lower) / 2;
        if (*mid == target)
        {
            return mid;
        }
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

template < typename T >
void println(T x)
{
    std::cout << x << '\n'; 
}

template < typename T >
T addOne(T x)
{
    return x + 1;
}

template < typename T >
void swap(T & a, T & b)
{
    T t = a;
    a = b;
    b = t;
}

template < typename T >
struct Point
{
    T x, y;
};


int main()
{
//    int x[] = {5, 3, 50, -5, 42, -19, 7};
    //bubblesort(x, 2, 6); // only sort 2, 4, 8, 6
    //println(&x[0], &x[7]);
    //bubblesort(&x[0], &x[7]);
    //println(&x[0], &x[7]);

    //  bubblesort(x + 2, x + 6); // only sort 2, 4, 8, 6

    println(1); // call println with T = int
    println(3.14);
    println('c');

    std::cout << addOne(42) << '\n';
    std::cout << addOne(3.14) << '\n';
    std::cout << addOne('c') << '\n';

    Point< double > p;
    Point< float > q;
    
    return 0;
}
