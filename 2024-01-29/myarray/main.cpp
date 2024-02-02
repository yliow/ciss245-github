#include <iostream>
#include "myarray.h"

int main()
{
    int x[5] = {};
    int x_size = 0;
    int x_capacity = 5;
    
    myarray_init(x, x_size, x_capacity); // set x_size to 0
    myarray_println(x, x_size, x_capacity); // print {}

    for (int i = 42; i < 50; ++i)
    {
        myarray_pushback(x, x_size, x_capacity, i);
        myarray_println(x, x_size, x_capacity); 
    }
    // myarray_println(x, x_size); // print {42}
    // myarray_pushback(x, x_size, 3);
    // myarray_println(x, x_size); // print {42, 3}
    // myarray_pushback(x, x_size, -1);
    // myarray_println(x, x_size); // print {42, 3, -1}

    return 0;
}
