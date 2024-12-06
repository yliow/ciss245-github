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
    if (lower > upper)
    {
        return -1;
    }
    else
    {
        int mid = lower + (upper - lower) / 2;
        if (x[mid] == target) return mid;
        else if (target < x[mid]) return binsrch(x, lower, mid - 1, target);
        else return binsrch(x, mid + 1, upper, target);
    }
}


int * binsrch(int * lower, int * upper, int target)
{
    if (lower > upper)
    {
        return NULL;
    }
    else
    {
        int * mid = lower + (upper - lower) / 2;
        if (*mid == target) return mid;
        else if (target < *mid) return binsrch(lower, mid - 1, target);
        else return binsrch(mid + 1, upper, target);
    }
}

void bubblesort_pass(int * start, int * end)
{
    if (start + 1 >= end)
    {}
    else // recursive case
    {
        // swap 1st 2 values if necessary
        if (*start > *(start + 1))
        {
            int t = *start;
            *start = *(start + 1);
            *(start + 1) = t;
        }
        // recurse
        bubblesort_pass(start + 1, end);
    }
}


// sort *start, *(start + 1), ..., *(end - 1)
void bubblesort(int * start, int * end)
{
    if (start + 1 >= end)
    {
        // base case (i.e. at most 1 value to sort
    }
    else
    {
        // recusive case
        bubblesort_pass(start, end);
        bubblesort(start, end - 1);
    }
}
    
int main()
{
    // int table[1000] = {0};
    // for (int n = 0; n < 50; ++n)
    // {
    //     std::cout << "fib(" << n << ") = " << fib(n, table) << '\n';
    // }

    int x = {5, 3, 1, 2, 4};
    bubblesort(&x[0], &x[5]);
    return 0;
}
