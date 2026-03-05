#include <iostream>
#include "Date.h"

int main()
{
    Date today(2026, 3, 4);
    today.init(2026, 3, 4);
    today.print(); // in Date strcut print(const Date &)
    today.add_y(1);
    today.print();
    today.add_m(1);
    today.print();
    today.add_d(1);
    today.print();
    today.add_y_m_d(2, 3, 5);
    today.print();

    Date yesterday;
    yesterday.init(2026, 3, 3);
    yesterday.print();
    
    return 0;
}
