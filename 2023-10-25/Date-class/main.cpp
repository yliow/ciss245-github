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

    std::cout << today;
    // same as operator<<(std::cout, today) 
    
    //std::cout << today.yyyy_ << '\n'; // ERROR!!!

    Date nextyear;
    // std::cout << today.yyyy
    nextyear.init(2024, 10, 16);
    nextyear.println();

    Date lastyear = Date(2022, 10, 16);

    return 0;
}