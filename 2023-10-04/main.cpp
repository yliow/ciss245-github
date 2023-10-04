#include <iostream>
// create int_array library
void print(int x[], int x_len, int x_capacity)
{
    std::cout << '{';
    for (int i = 0; i < x_len; ++i)
    {
        std::cout << x[i];
        if (i < x_len - 1) std::cout << ", ";
    }
    std::cout << "}\n";
}

void insert(int x[], int & x_len, int x_capacity, int index, int value)
{
    if (x_len == x_capacity)
    {
        std::cout << "overflow error ...  insert aborted\n";  
    }
    else
    {
        for (int i = x_len - 1; i >= index; --i)
        {
            x[i + 1] = x[i];
        }
        x[index] = value;
        ++x_len;
    }
}

void insert(int x[], int * x_len, int x_capacity, int index, int value)
{
    if (*x_len == x_capacity)
    {
        std::cout << "overflow error ...  insert aborted\n";  
    }
    else
    {
        for (int i = *x_len - 1; i >= index; --i)
        {
            x[i + 1] = x[i];
        }
        x[index] = value;
        ++(*x_len);
    }
}

void f()
{
    int * p = new int[1000];
    for (int i = 0; i < 1000; ++i)
    {
        *(p + i) = 42;
        p[i] = 42; // same as *(p + i)
    }
    delete [] p;
}

int main()
{
    // int x[] = {5, 2, -1, 42, 99, 99, 99, 99};
    // int x_len = 4;
    // int x_capacity = 8;
    // print(x, x_len, x_capacity);

    // for (int value = 99; value < 105; ++value)
    // {
    //     insert(x, &x_len, x_capacity, 1, value);
    //     print(x, x_len, x_capacity);
    // }

    int x = 42;
    int * p = &x;
    std::cout << p << '\n';
    while (1)
    {
        f();
    }


    double y[] = {1.1, 2.2, 3.3};
    double * q = &y[0];
    for (int i = 0; i < 3; ++i)
    {
        std::cout << (*(q + i)) << '\n'
        std::cout << q[i] << '\n'
    }
    return 0;
}
