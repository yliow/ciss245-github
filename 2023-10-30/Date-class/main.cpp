#include <iostream>
#include "Date.h"

int main()
{
    Date today(2023, 10, 16); // call constructor
    // std::cout << today.yyyy
    //today.init(2023, 10, 16);
    today.println();
    today.inc_day(1);
    today.println();

    std::cout << today << '\n';
    // same as
    // (std::cout << today) << '\n';
    // same as
    // (operator<<(std::cout, today) << '\n';
    // operator<<((operator<<(std::cout, today), '\n')
    //            ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
    //            MUST std::cout
    
    //std::cout << today.yyyy_ << '\n'; // ERROR!!!

    Date nextyear;
    // std::cout << today.yyyy
    nextyear.init(2024, 10, 16);
    nextyear.println();

    Date lastyear = Date(2022, 10, 16);

    //std::cin >> lastyear; // same as operator>>(std::cin, lastyear) 
    std::cout << lastyear << '\n';

    Date dates[10]; // array of Dates ... default constructor
    // Date::Date() is used to inialize all objects in array.

    std::cout << lastyear.get_year() << '\n';
   
    return 0;
}
