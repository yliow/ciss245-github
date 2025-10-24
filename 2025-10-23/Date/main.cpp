#include <iostream>
#include "Date.h"

int main()
{
    Date today;
    today.init(2025, 10, 22);
    today.print();
    today.add_d(1);
    today.print();
    today.add_y(1);
    today.print();
    today.add_m(1);
    today.print();
    //std::cout << today.yyyy_ << '\n';

    Date yesterday;
    yesterday.init(2025, 10, 21);
    yesterday.print();

    today.add_m_d(5, 5);
    today.print();

    Date date0;
    date0.init(3001, 3, 5);
    Date date1;
    date1.init(10, 2, 3);
    date0.add_date(date1);
    date0.print();
    
    return 0;   
}
