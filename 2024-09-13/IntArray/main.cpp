#include <iostream>
#include "IntArray.h"

int main()
{
    int x[10];
    int x_len = 0;

    array_print(x, x_len);
    array_init(x, x_len, 42, 5);
    array_print(x, x_len);
    
    return 0;
}
