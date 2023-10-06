#include <iostream>


// void f(int x[])
//     //int * x)
// {
//     asdsAS
//     std::cout << "in f ... " << x[0] << '\n';
//     std::cout << "in f ... " << x << '\n';
//     std::cout << "in f ... " << &x[0] << '\n';
//     std::cout << sizeof(x) << '\n';
// }

void print(int * start, int * end) // or begin and end
// print *start, .., *(end - 1)
{
    for (int * p = start; p < end; ++p)
    {
        std::cout << (*p) << ' ';
    }
    std::cout << '\n';
}

void bubblesort(int * start, int * end)
// sort *start, .., *(end - 1)
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
    // int x[3] = {2, 3, 5};
    // std::cout << x[0] << '\n';
    // std::cout << x << '\n';
    // std::cout << &x[0] << '\n';
    // std::cout << sizeof(x) << '\n';
    // f(x);

    int x[5] = {5, 3, 2, 4, 0};
    print(&x[0], &x[5]);
    bubblesort(&x[1], &x[4]);
    print(&x[1], &x[4]);

    int * p = binarysearch(&x[1], &x[4], 2);
    std::cout << p << ' ' << *p << '\n';
    
    p = binarysearch(&x[1], &x[4], 3);
    std::cout << p << ' ' << *p << '\n';
    
    p = binarysearch(&x[1], &x[4], 4);
    std::cout << p << ' ' << *p << '\n';

    
    return 0;
}
