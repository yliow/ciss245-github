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
            println(&x[0], &x[7]);
        }
    }
}

void bubblesort(int * start, int * end)
{
    // sort *start, ..., *(end - 1) using bubblesort
}

int main()
{
    int x[] = {5, 3, 2, 4, 8, 6, 7};
    bubblesort(x, 2, 6); // only sort 2, 4, 8, 6
    //println(&x[0], &x[7]);
    //bubblesort(&x[0], &x[7]);
    //println(&x[0], &x[7]);

    return 0;
}
