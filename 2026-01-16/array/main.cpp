#include <iostream>
#include "array.h"

void update(int ca[], int n)
{
    int t[n];
    t[0] = ca[0];
    t[n - 1] = ca[n - 1];
    for (int i = 1; i < n - 1; ++i)
    {
        // if (ca[i - 1] == 0 && ca[i] == 0 && ca[i + 1] == 0)
        // {
        //     t[i] = 0;
        // }
        // else if (ca[i - 1] == 0 && ca[i] == 0 && ca[i + 1] == 1)
        // {
        //     t[i] = 1;
        // }
        int x = ca[i - 1] * 4 + ca[i] * 2 + ca[i - 1] * 1;
        switch (x)
        {
            case 0: t[i] = 0; break;
            case 1: t[i] = 1; break;
            case 10: t[i] = 0; break;
        }
    }
    for (int i = 0; i < n, ++i)
    {
        ca[i] = t[i];
    }
}

int main()
{
    /*
    int x[10];
    int x_size = 3;
    int x_capacity = 10;
    std::cout << "x: ";
    array_println(x, x_size, x_capacity);

    for (int i = 0; i < 8; ++i)
    {
        push_back(x, x_size, x_capacity, i);
        std::cout << "x: ";
        array_println(x, x_size, x_capacity);
    }

    int y[10];
    int y_size = 0;
    int y_capacity = 10;
    std::cout << "y: ";
    array_println(y, y_size, y_capacity);

    array_assign(y, y_size, y_capacity, x, x_size, x_capacity);
    std::cout << "x: ";
    array_println(x, x_size, x_capacity);
    std::cout << "y: ";
    array_println(y, y_size, y_capacity);
    */
    
    const int n = 1001;
    int ca[n] = {0};
    ca[4] = 1;
    std::cout << "ca: ";
    array_print(ca, 8, 8);
    update(ca, n);
    return 0;
}
