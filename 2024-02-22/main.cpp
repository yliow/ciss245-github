#include <iostream>

void println(int * start, int * end)
{
    // print *start, ..., *(end - 1)
    for (int * p = start; p < end; ++p)
    {
        std::cout << (*p) << ' ';
    }
    std::cout << '\n';
}

void bubblesort(int x[], int start, int end)
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
                int t = x[j]; x[j] = x[j + 1]; x[j + 1] = t;
            }
            std::cout << i << ' ' << j << ": ";
            println(&x[0], &x[7]);
        }
    }
}

void bubblesort(int * start, int * end)
{
    // sort *start, ..., *(end - 1) using bubblesort
    for (int * p = end - 2; p >= start; --p)
    {
        for (int * q = start; q <= p; ++q)
        {
            if (*q > *(q + 1))
            {
                int t = *q; *q = *(q + 1); *(q + 1) = t;
            }
            println(start, end);
        }
    }
}

int main()
{
    int x[] = {5, 3, 50, -5, 42, -19, 7};
    //bubblesort(x, 2, 6); // only sort 2, 4, 8, 6
    //println(&x[0], &x[7]);
    //bubblesort(&x[0], &x[7]);
    //println(&x[0], &x[7]);

    bubblesort(x + 2, x + 6); // only sort 2, 4, 8, 6
    
    return 0;
}
