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

void print(int x[])
{
    int n = 5;
    for (int i = 0; i < n; ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << '\n';
}

void bubblesort(int x[])
{
    int n = 5;
    for (int i = n - 2; i >= 0; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            if (x[j] > x[j + 1])
            {
                int t = x[j]; x[j] = x[j + 1]; x[j + 1] = t;
            }
        }
    }
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
    bubblesort(x);
    
    return 0;
}
