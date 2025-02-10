#include <iostream>

void print(int x[], int n = 8)
{
    std::cout << '{';
    for (int i = 0; i < n; ++i)
    {
        std::cout << x[i];
        if (i != n - 1) std::cout << ", ";
    }
    std::cout << "}\n";
}

void print(int x[], int start, int end)
{
    std::cout << '{';
    for (int i = start; i < end; ++i)
    {
        std::cout << x[i];
        if (i < end - 1) std::cout << ", ";
    }
    std::cout << "}\n";
}

void print(int * start, int * end)
{
    std::cout << '{';
    for (int * p = start; p < end; ++p)
    {
        std::cout << (*p);
        if (p < end - 1) std::cout << ", ";
    }
    std::cout << "}\n";
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

int * linsrch(int * start, int * end, int target)
{
    for (int * p = start; p < end; ++p)
    {
        if (*p == target) return p;
    }
    return NULL;
}

int max(int * start, int * end)
{
    int m = *start;
    for (int * p = start + 1; p < end; ++p)
    {
        if (*p > m) m = *p;
    }
    return m;
}

void bubblesort(int x[], int n)
{
    for (int i = n - 2; i >= 0; --i)
    {
        for (int j = 0; j <= i; ++j)
        {
            if (x[j] > x[j + 1])
            {
                int t = x[j];
                x[j] = x[j + 1];
                x[j + 1] = t;
            }
            print(x, n);
        }
    }
    
}

int main()
{
    int x[] = {2, 3, 5, 7, 11, 13, 17, 19};
    //int * y = new int[8];
    //y[0] = 2; /// ....
    print(x);
    print(x, 4);
    print(x, 0, 6);
    print(x, 2, 7);
    print(&x[2], &x[7]);
    std::cout << sum(x + 2, x + 7) << '\n';
    int * p = linsrch(x + 2, x + 7, 13);
    std::cout << p << ' ' << (*p) << '\n';
    std::cout << max(x + 2, x + 7) << '\n';

    std::cout << "\n\n";
    int y[] = {5, 3, 1, 2, 4, 6, 7, 0};
    bubblesort(y, 8);
    
    return 0;
}
