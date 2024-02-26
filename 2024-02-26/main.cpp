// main.cpp
#include <iostream>
#include "Date.h"

int main()
{
    Date today;
    init(today, 2024, 2, 26);
    Date * p = new Date;
    init(*p, 2024, 2, 26);

    println(today);
    add_y(today, 1); println(today);
    add_m(today, 2); println(today);
    add_d(today, 3); println(today);

    return 0;
}
