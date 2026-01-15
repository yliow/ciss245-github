#include <iostream>
#include "array.h"

int main()
{
    int x[10];
    int x_size = 3;
    int x_capacity = 10;
    array_println(x, x_size, x_capacity);

    for (int i = 0; i < 8; ++i)
    {
        push_back(x, x_size, x_capacity, i);
        array_println(x, x_size, x_capacity);
    }
    
    return 0;
}
