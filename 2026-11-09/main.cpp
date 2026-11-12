#include <iostream>

void swap(int & a, int & b)
{
    int t = a;
    a = b;
    b = t;
}

void println(int x[], int start, int end)
{
    for (int i = start; i < end; ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << '\n';
}

// recursive print
void println(int * start, int * end)
{
    if (start == end)
    {
        std::cout << '\n';
    }
    else
    {
        std::cout << (*start) << ' ';
        println(start + 1, end);
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
                swap(x[j], x[j + 1]);
            }
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
        if (*start > *(start + 1))
        {
            swap(*start, *(start + 1));
        }
        bubblesort_pass(start + 1, end);
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
}


// int * binsrch(int * lower, int * upper, int target)
// {
//     while (lower <= upper)
//     {
//         int * mid = lower + (upper - lower) / 2;
//         if (*mid == target) return mid;
//         else if (*mid > target) upper = mid - 1;
//         else lower = mid + 1;
//     }
//     return NULL;
// }

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
        else if (*mid > target) return binsrch(lower, mid - 1, target);
        else return binsrch(mid + 1, upper, target);
    }
}

int main()
{
    //   int x[] = {5, 3, 1, 6, 2};

    int x[1000000];
    //bubblesort(x, 0, 5);
    //println(x, x + 5);

    bubblesort(x, x + 1000000);
    println(x, x + 5);

    int * p = binsrch(x, x + 5, 6);
    std::cout << (*p) << '\n';
    p = binsrch(x, x + 5, 1000);
    std::cout << p << '\n';
    return 0;
}
