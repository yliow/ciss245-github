#include <iostream>
#include "Date.h"

int main()
{
    Date today = {2026, 9, 23};
    std::cout << today << '\n';
    std::cout << get_year(today) << '\n';
    
    return 0;
}
