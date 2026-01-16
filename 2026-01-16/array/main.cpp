#include <iostream>
#include "array.h"

int main()
{
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
    
    return 0;
}
