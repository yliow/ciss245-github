// main.cpp
#include <iostream>
#include "Date.h"

int main()
{
    Date today;
    today.init(2024, 2, 26);
    Date * p = new Date;
    p->init(2024, 2, 26);

    today.print();
    today.add_y(1); today.print();
    today.add_m(2); today.print();
    today.add_d(3); today.print();

    std::cout << today.yyyy_ << '\n';

    return 0;
}
