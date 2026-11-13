#include <iostream>
#include "Date.h"

int main()
{
    Date today(2026, 10, 5);
    Date yesterday = Date(2026, 10, 4);
    Date * lastyear = new Date(2025, 10, 5);
    //today.init(2025, 10, 5);
    //today.print();
    std::cout << today // operator<<(std::cout, today)
              << '\n';  
    //yesterday.init(2025, 10, 4);
    yesterday.print();

    today.add_m_d(1, 5);
    today.print();

    // cloning
    Date copy_of_today(today.year(), today.month(), today.day());
    today.print();
    copy_of_today.print();

    Date copy2_of_today(today);
    today.print();
    copy2_of_today.print();

    Date somedate;
    somedate.print();
    
    // Date ONEDAY;
    // ONEDAY.init(0, 0, 1);
    // today.add_date(ONEDAY);

    std::cout << today.year() << '\n';

    // Date firstday(2026);
    // Date date1;

    Date * pdate = new Date(3000, 1, 1);
    delete pdate;
    
    return 0;
} // today called today.~Date(), etc.
