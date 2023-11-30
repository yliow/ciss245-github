#include <iostream>

/*
  max({1, 3, 2}, 3)  <-----> ??       max ({1, 3}, 2)
  3                                   3

  max({1, 3, 7}, 3)  <-----> ??       max ({1, 3}, 2)
  7                                   3

  max of {1, 3, 7} is max of {1, 3} and 7

  max 

 */

int max(int x[], int n)
{
    if (n == 0)
    {
        return -1;
    }
    else
    {
        int m = max(x, n - 1);
        if (m > x[n]) return m;
        else return x[n];
    }
}

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

// memoization technique
int table[1000];
int fib2(int n)
{
    if (n == 0 || n == 1) return 1;
    else
    {
        // if fib(n) is in table, use table.
        // if not, compute it and store in table.
        if (table[n] == 0)
        {
            table[n] = fib(n - 1) + fib(n - 2);
        }
        return table[n];
    }
}

void println(int x[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << '\n';
    return;
}

void bubblesort_pass(int x[], int j, int i)
{
    if (j >= i) // base case
    {}
    else // recursive case
    {
        if (x[j] > x[j + 1])
        {
            int t = x[j];
            x[j] = x[j + 1];
            x[j + 1] = t;
        }
        bubblesort_pass(x, j + 1, i);
    }
}

int main()
{
    // int x[] = {3, 5, 2, 6, 7};
    // int m = max(x, 5);
    // std::cout << "m:" << m << '\n';

    // recursive case for fibo
    // for (int n = 0; n < 50; ++n)
    // {
    //     std::cout << n << " ... " << fib(n) << '\n';
    // }

    // recursive with table lookup (memorization) for fibo
    // for (int i = 0; i < 1000; ++i)
    // {
    //     table[i] = 0; // to indicate not yet computed
    // }
    // for (int n = 0; n < 50; ++n)
    // {
    //     std::cout << n << " ... " << fib2(n) << '\n';
    // }

    int x[] = {5, 3, 1, 6, 4, 2};
    bubblesort_pass(x, 4);
    return 0;
}
