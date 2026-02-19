#include <iostream>

int sum(int * x, int n)
{
    int s = 0;
    for (int i = 0; i < n; ++i)
    {
        s += x[i];
    }
    return s;
}

int sum(int * x, int start, int end)
{
    int s = 0;
    for (int i = start; i < end; ++i)
    {
        s += x[i];
        //s += *(x + i);
    }
    return s;
}

int sum(int * start, int * end)
{
    int s = 0;
    for (int * p = start; p < end; ++p)
    {
        s += *p;
    }
    return s;
}

int linsrch(int x[], int n, int target)
{
    for (int i = 0; i < n; ++i)
    {
        if (target == x[i])
        {
            return i;
        }
    }
    return -1;
}

int * linsrch(int * start, int * end, int target)
{
    for (int * p = start; p < end; ++p)
    {
        if (*p == target)
        {
            return p;
        }
    }
    return NULL;
}

void println(int x[], int n)
{}

void println(int x[], int start, int end)
{}

void println(int * start, int * end)
{
    for (int * p = start; p < end; ++p)
    {
        std::cout << (*p) << ' ';
    }
    std::cout << '\n';
}


void bubblesort(int x[], int n)
{
    for (int i = n - 2; i >= 0; --i)
    {
        for (int j = 0; j <= i; ++j)
        {
            if (x[j] > x[j + 1])
            {
                int t = x[i];
                x[i] = x[i + 1];
                x[j + 1] = t;
            }
        }
    }
}

void bubblesort(int x[], int start, int end)
{
    for (int i = end - 2; i >= start; --i)
    {
        for (int j = start; j <= i; ++j)
        {
            if (x[j] > x[j + 1])
            {
                int t = x[i];
                x[i] = x[i + 1];
                x[j + 1] = t;
            }
        }
    }
}

void bubblesort(int * start, int * end)
{
    for (int * i = end - 2; i >= start; --i)
    {
        for (int * j = start; j <= i; ++j)
        {
            if (*j > *(j + 1))
            {
                int t = *j;
                *j = *(j + 1);
                *(j + 1) = t;
            }
        }
    }
}

int main()
{
    int x[] = {2, 3, 5, 7, 11};
    // int * p = &x[0];
    // std::cout << x[0] << ' ' << (*p) << ' ' << p[0] << '\n';
    // std::cout << x << ' ' << &x << '\n';
    // std::cout << (x + 1) << ' ' << &x[0] + 1 << '\n';

    std::cout << sum(x, 4) << '\n';
    std::cout << sum(&x[1], &x[4]) << '\n';
    std::cout << sum(x + 1, x + 4) << '\n';

    int a[2] = {2, 1};
    println(a, a + 2);
    int * p[2] = {&a[0], &a[1]};
    for (int i = 0; i < 2; ++i)
    {
        std::cout << *p[i] << ' ';
    }
    std::cout << '\n';
        
    p[0] = &a[1];
    p[1] = &a[0];
    println(a, a + 2);
    for (int i = 0; i < 2; ++i)
    {
        std::cout << *p[i] << ' ';
    }

    int c[] = {5, 3, 1, 2, 4, 8, 7, 6};
    bubblesort(c, c + 8);
    println(c, c + 8);
    
    return 0;
}
