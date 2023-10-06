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
    for (int i = n - 2; i >= 0; --i)
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
    //bubblesort(x + 1, 3);
    print(x + 1, 3);
    
    return 0;
}
