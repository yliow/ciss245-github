// main.cpp
#include <iostream>
#include "Date.h"

int main()
{
    Date today; // today is an object of type Date
    today.init(2024, 2, 26);
    Date * p = new Date;
    p->init(2024, 2, 26);

    today.print();
    today.add_y(1); today.print();
    today.add_m(2); today.print();
    today.add_d(3); today.print();
    today.print();
    today.add_m_d(5, 6);
    today.print();
    today.add_y_m_d(10, 3, 2);
    today.print();
    Date delta;
    delta.init(7, 8, 9);
    today.add_date(delta);
    today.print();
    
    // ERROR: Date::yyyy_ is private !!!
    //std::cout << today.yyyy_ << '\n';

    return 0;
}
