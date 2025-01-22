#include <iostream>

int sum(int [], int, int);

int main()
{
    int x[] = {1, 3, 5, 6, 4, 2, 7, 8, 9};
    std::cout << sum(x, 3, 7) << '\n';

    return 0;
}

int sum(int x[], int start, int end)
{
    int s = 0;
    for (int i = start; i < end; ++i)
    {
        s += x[i];
    }
    return s;
}

