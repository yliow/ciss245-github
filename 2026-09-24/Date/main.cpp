#include <iostream>
#include "Date.h"

int main()
{
    Date today = {2026, 9, 23};
    std::cout << today << '\n';
    std::cout << get_year(today) << '\n';

    Date yesterday = get_Date(2026, 9, 22);
    std::cout << get_year(yesterday) << '\n'; // also get_month, get_day
    set_year(yesteday, 3000); // also set_month, set_day

    return 0;
}
