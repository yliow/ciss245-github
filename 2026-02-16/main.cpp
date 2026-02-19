#include <iostream>

void f(int & x)
{
    x = 0;
}

void f1(int * p)
{
    *p = 0;
}

void swap(int & x, int & y)
{
    int t = x;
    x = y;
    y = t;
}

void swap1(int * p, int * q)
{
    int t = *p;
    *p = *q;
    *q = t;
}

int linsearch(int * x, int n, int target)
{
    for (int i = 0; i < n; ++i)
    {
        if (x[i] == target) return i;
    }
    return -1;
}


int main()
{
    int x = 42;
    f(x);
    std::cout << x << '\n';

    x = 42;
    f1(&x);
    std::cout << x << '\n';

    int i = 0, j = 1;
    swap(i, j);
    std::cout << i << ' ' << j << '\n';
    
    i = 0;
    j = 1;
    swap1(&i, &j);
    std::cout << i << ' ' << j << '\n';

    int * p = new int;
    *p = 42;
    std::cout << (*p) << '\n';
    delete p;
    //std::cout << (*p) << '\n';

    p = new int[1000]; // heap arrays
    std::cout << p[0] << ' ' << p[1] << '\n';
    std::cout << p[1] << ' ' << *(p + 1) << '\n';
    
    return 0;
}
