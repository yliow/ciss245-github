#include <iostream>
#include "Date.h"

std::ostream & operator<<(std::ostream & cout, const Date & date)
{
    cout << date.yyyy << '-' << date.mm << '-' << date.dd;
    return cout;
}

int get_year(const Date & date)
{
    return date.yyyy;
}
