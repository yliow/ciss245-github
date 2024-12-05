#include <iostream>

int fib(int n, int table[])
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        if (table[n] == 0)
        {
            table[n] = fib(n - 1) + fib(n - 2);
        }
        return table[n];
    }
}

int sum0(int x[], int n)
{
    int s = 0;
    for (int i = 0; i < n; ++i)
    {
        s += x[i];
    }
    return s;
}

int sum1(int x[], int n)
{
    if (n == 0)
    {
        // base case
        return 0;
    }
    else
    {
        // recursive case
        return sum1(x, n - 1) + x[n - 1];
    }
}

int prod(int x[], int n)
{
    if (n == 0) return 1;
    else return prod(x, n - 1) * x[n - 1];
}

int binsrch(int x[], int lower, int upper, int target)
{
    int mid = lower + (upper - lower) / 2;
    if (x[mid] == target) return mid;
    else if (target < x[mid]) return binsrch(x, lower, mid - 1, target);
    else return binsrch(x, mid + 1, upper, target);
}


int main()
{
    // int table[1000] = {0};
    // for (int n = 0; n < 50; ++n)
    // {
    //     std::cout << "fib(" << n << ") = " << fib(n, table) << '\n';
    // }

    int x = {5, 3, 1, 2, 4};
    
    return 0;
}
