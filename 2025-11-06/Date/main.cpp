#include <iostream>
#include "Date.h"

int main()
{
    Date today(2025, 10, 22);
    //today.init(2025, 10, 22);
    today.print();
    today.add_d(1);
    today.print();
    today.add_y(1);
    today.print();
    today.add_m(1);
    today.set_year(9999);
    today.print();
    //std::cout << today.yyyy_ << '\n';
    std::cout << today.get_year() << '\n';
    std::cout << today // <<<< same as operator<<(std::cout, today)
              << '\n';
    
    Date yesterday = Date(2025, 10, 21);
    //yesterday.init(2025, 10, 21);
    yesterday.print();

    today.add_m_d(5, 5);
    today.print();

    Date date0(3001, 3, 5);
    //date0.init(3001, 3, 5);
    Date date1(10, 2, 3);
    //date1.init(10, 2, 3);
    date0.add_date(date1);
    date0.print();

    Date * p = new Date(123, 234, 345);
    std::cout << p << '\n';
    std::cout << (*p) << '\n';
    std::cout << p->get_year() << '\n';
    delete p;

    //Date nextyear("2026-10-30")

    Date dates[10];
    Date tomorrow;

    Date date2(today);
    Date date3 = today;
    
    return 0;   
}
