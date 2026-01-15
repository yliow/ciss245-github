#include <iostream>
#include "array.h"

int main()
{
    int x[10];
    int x_size = 0;
    int x_capacity = 10;

    array_bubblesort(x, x_size, x_capacity);
    array_println(x, x_size, x_capacity);
}
