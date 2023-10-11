#include <iostream>

// print *start, .., *(end - 1)
void print(int * start, int * end) // or begin and end
{
    for (int * p = start; p < end; ++p)
    {
        std::cout << (*p) << ' ';
    }
    std::cout << '\n';
}

// bubblesort *start, .., *(end - 1)
void bubblesort(int * start, int * end)
{
    for (int * q = end - 2; q >= start; --q)
    {
        for (int * p = start; p <= q; ++p)
        {
            if (*p > *(p + 1))
            {
                int t = *p; *p = *(p + 1); *(p + 1) = t;
            }
        }
    }
}

// binarysearch for target in *start, .., *(end - 1)
int * binarysearch(int * start, int * end, int target)
{
    int * left = start;
    int * right = end - 1;
    while (left <= right)
    {
        int * mid = left + (right - left) / 2;
        if (*mid == target)
        {
            return mid;
        }
        else if (target < *mid)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return NULL;
}

int main()
{
    int n, start, end, target;
    std::cin >> n >> start >> end >> target;
    int * x = new int[n];
    for (int i = 0; i < n; ++i)
    {
        x[i] = rand() % 10;
    }
    print(&x[0], &x[n]);

    bubblesort(&x[start], &x[end]);
    print(&x[0], &x[n]);

    int * p = binarysearch(&x[start], &x[end], target);
    std::cout << p << ' ' << *p << '\n';
    
    return 0;
}
