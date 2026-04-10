#include <iostream>

void print0(int x[], int start, int end)
{
    int n = end - start; // number of values to process
    if (n == 0)
    {}
    else
    {
        std::cout << x[start] << ' ';
        print0(x, start + 1, end);
    }
}

void print1(int x[], int start, int end)
{
    int n = end - start; // number of values to process
    if (n == 0)
    {}
    else
    {
        print1(x, start, end - 1);
        std::cout << x[end - 1] << ' ';
    }
}

void print2(int x[], int start, int end)
{
    int n = end - start;
    if (n == 0)
    {}
    else if (n == 1)
    {
        std::cout << x[start] << ' ';
    }
    else
    {
        int mid = start + (end - start) / 2;
        print2(x, start, mid);
        print2(x, mid, end);
    }
    return;
}

void print3(int * start, int * end)
{
    int n = end - start;
    if (n == 0)
    {}
    else
    {
        print3(start, end - 1);
        std::cout << *(end - 1) << ' ';
    }
}

void println3(int * start, int * end)
{
    print3(start, end);
    std::cout << '\n';
}

void swap(int & a, int & b)
{
    int t = a; a = b; b = t;
}

void bubblesort(int x[], int n)
{
    for (int i = n - 2; i >= 0; --i)
    {
        for (int j = 0; j <= i; ++j)
        {
            if (x[j] > x[j + 1])
                swap(x[j], x[j + 1]);
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
                swap(x[j], x[j + 1]);
        }
    }
}

void bubblesort_pass(int * start, int * end)
{
    int n = end - start;
    if (n <= 1)
    {}
    else
    {
        bubblesort_pass(start, end - 1);
        // for me, i have to handle *(end - 2), *(end - 1)
        if (*(end - 2) > *(end - 1))
        {
            swap(*(end - 2), *(end - 1));
        }
    }
}

void bubblesort(int * start, int * end)
{
    int n = end - start;
    if (n <= 1)
    {}
    else
    {
        bubblesort_pass(start, end);
        bubblesort(start, end - 1);
    }
    return;
}

int main()
{
    int x[] = {5, 3, 1, 2, 4, 6, 8, 7};
    // print0(x, 1, 7); std::cout << '\n';
    // print1(x, 1, 7); std::cout << '\n';
    //print2(x, 1, 7); std::cout << '\n';
    println3(&x[1], &x[7]);
    // linearsrch -- iteration, recrusion
    // count
    //bubblesort_pass(&x[0], &x[8]);
    bubblesort(&x[0], &x[8]);
    println3(&x[0], &x[8]);
    
    return 0;
}
