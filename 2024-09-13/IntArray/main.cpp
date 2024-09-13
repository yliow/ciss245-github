#include <iostream>
#include "IntArray.h"

int main()
{
    int x[10];
    int x_len = 0;

    array_print(x, x_len);
    array_init(x, x_len, 42, 5);
    array_print(x, x_len);
    x[0] = 5;
    x[1] = 3;
    x[2] = 0;
    x[3] = 4;
    x[4] = 1;
    array_print(x, x_len);
    return 0;
}
