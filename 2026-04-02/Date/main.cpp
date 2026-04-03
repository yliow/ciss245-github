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

    // Date dates[10];
    // // initialize dates[0] -- default constructor Date()
    // // initialize dates[1]
    // for (int i = 0; i < 10; ++i)
    // {
    //     dates[i].set_day(5); // double initializateion of dd_
    // }

    // want to initialize ARRAY of objects ONCE
    Date * pdate = new Date[10];
    Date * pdate2 = new Date;
    Date * pdate3 = new Date(2026, 4, 2);
    Date ** pdate4 = new Date*[10];
    *pdate4[0] = new Date(2025, 1, 2);
    return 0;
}
