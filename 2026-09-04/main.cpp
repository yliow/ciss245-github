#include <iostream>

void swap(int & a, int & b)
{
    int t = a;
    a = b;
    b = t;
}

void print(int x[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << x[i] << ' ';
    }
}

void bubblesort(int x[], int start, int end)
{
    // sort x[start], ..., x[end - 1]
}

int binarysrch(int x[], int n, int target)
{
    int lower = 0;
    int upper = n - 1;
    while (lower <= upper)
    {
        int mid = (lower + upper) / 2;
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

int binarysrch(int x[],
               int start, int end,
               int target)
{
    // perform binarysrch in x[start], ...
    // x[end - 1] on target
}


void println(int x[], int n)
{
    print(x, n);
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
                swap(x[j], x[j + 1]);
            }
            println(x, n);
        }
    }
}

int main()
{
    int x[] = {5, 3, 1, 2, 4, 6, 9, 8, 7, 0};
    bubblesort(x, 10);
    return 0;
}
