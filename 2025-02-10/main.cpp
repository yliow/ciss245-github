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

int main()
{
    int x[] = {2, 3, 5, 7, 11, 13, 17, 19};
    //int * y = new int[8];
    //y[0] = 2; /// ....

    print(x);
    print(x, 4);
    print(x, 0, 6);
    print(x, 2, 7);
    return 0;
}
