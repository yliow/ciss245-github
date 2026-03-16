#include <iostream>
#include "Date.h"

int main()
{
    Date today(2026, 3, 4);
    //today.init(2026, 3, 4);
    //today.print(); // in Date strcut print(const Date &)
    std::cout << today // <---- same as operator<<(std::cout, today)
              << '\n';
    today.add_y(1);
    //today.print();
    std::cout << "today: " << today << "\n";
    today.add_m(1);
    std::cout << "today: " << today << "\n";
    //today.print();
    today.add_d(1);
    std::cout << "today: " << today << "\n";
    //today.print();
    today.add_y_m_d(2, 3, 5);
    std::cout << "today: " << today << "\n";
    //today.print();
    Date inc_date(2, 3, 5);
    //today.add_date(inc_date);
    (today += inc_date) // same as today.operator+=(inc_date)
        += inc_date; // today.operator+=(inc_date)
    std::cout << "today: " << today << "\n";

    // std::cout << today.year() << '\n';
    // std::cout << &today << '\n';

    return 0;

    Date copy_of_today(today.year(), today.month(), today.day());
    copy_of_today.print();

    Date copy2_of_today(today);
    copy_of_today.print();
    
    return 0;
    
    Date today2 = Date(2020, 2, 2);
    
    Date yesterday;
    yesterday.init(2026, 3, 3);
    yesterday.print();
    
    return 0;
}
