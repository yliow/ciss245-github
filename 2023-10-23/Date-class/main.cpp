#include <iostream>
#include "Date.h"

int main()
{
    Date today;
    // std::cout << today.yyyy
    today.init(2023, 10, 16);
    today.println();
    today.inc_day(1);
    today.println();

    //std::cout << today.yyyy_ << '\n'; // ERROR!!!

    Date nextyear;
    // std::cout << today.yyyy
    nextyear.init(2024, 10, 16);
    nextyear.println();

    return 0;
}
