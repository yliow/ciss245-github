#include <iostream>

int * linearsearch(int * start, int * end, int target)
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

int sum(int * start, int * end)
{
    int s = 0;
    for (int * p = start; p < end; ++p)
    {
        s += (*p);
    }
    return s;
}

int main()
{
    int x[5] = {3, 1, 2, 4, 6};

    int * p = linearsearch(x, x + 4, 2);
    std::cout << p << ' ' << (*p) << '\n';

    std::cout << sum(x + 1, x + 4) << '\n';
    return 0;
}
