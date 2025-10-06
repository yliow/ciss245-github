#include <iostream>

void f0(int x[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << '\n';
}

void f1(int x[], int start, int end)
{
    for (int i = start; i < end; ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << '\n';

}

void f2(int * p, int start, int end)
{
    for (int i = start; i < end; ++i)
    {
        //std::cout << *(p + i) << ' ';
        std::cout << p[i] << ' ';
    }
    std::cout << '\n';
}

int main()
{
    int x[3] = {2, 3, 5};
    f0(x, 3);
    f0(x, 2);
    f1(x, 0, 3);
    f1(x, 1, 3);
    f2(&x[0], 1, 3);
    f3(&x[0], &x[3]); // CORRECT VERSION
        
    return 0;
}
