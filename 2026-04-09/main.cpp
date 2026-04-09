#include <iostream>

void print0(int x[], int start, int end)
{
    int n = end - start; // number of values to process
    if (n == 0)
    {}
    else
    {
        std::cout << x[start] << ' ';
        print0(x, start + 1, end);
    }
}

void print1(int x[], int start, int end)
{
    int n = end - start; // number of values to process
    if (n == 0)
    {}
    else
    {
        print1(x, start, end - 1);
        std::cout << x[end - 1] << ' ';
    }
}

void print2(int x[], int start, int end)
{
    int n = end - start;
    if (n == 0)
    {}
    else if (n == 1)
    {
        std::cout << x[start] << ' ';
    }
    else
    {
        int mid = start + (end - start) / 2;
        print2(x, start, mid);
        print2(x, mid, end);
    }
    return;
}

void print3(int * start, int * end)
{
    int n = end - start;
    if (n == 0)
    {}
    else
    {
        print3(start, end - 1);
        std::cout << *(end - 1) << ' ';
    }
}

int main()
{
    int x[] = {5, 3, 1, 2, 4, 6, 8, 7};
    // print0(x, 1, 7); std::cout << '\n';
    // print1(x, 1, 7); std::cout << '\n';
    //print2(x, 1, 7); std::cout << '\n';
    print3(&x[1], &x[7]);
    // linearsrch -- iteration, recrusion
    // count 
    return 0;
}
