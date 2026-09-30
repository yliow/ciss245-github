#include <iostream>
#include "Date.h"

std::ostream & operator<<(std::ostream & cout, const Date & date)
{
    cout << date.yyyy << '-' << date.mm << '-' << date.dd;
    return cout;
}

Date get_Date(int year, int month, int day)
{
    Date ret = {year, month, day};
    return ret;
}

int get_year(const Date & date)
{
    return date.yyyy;
}

void set_year(Date & date, int year)
{
    date.yyyy = year;
}

int get_month(const Date & date)
{
    return date.mm;
}

void set_month(Date & date, int month)
{
    date.mm = month;
}
