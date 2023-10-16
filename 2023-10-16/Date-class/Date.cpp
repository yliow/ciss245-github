// Date.cpp

#include <iostream>
#include "Date.h"

void Date::init(int yyyy, int mm, int dd)
{
    yyyy_ = yyyy;
    mm_ = mm;
    dd_ = dd;
}

void Date::println()
{
    std::cout << yyyy_ << '/' << mm_ << '/' << dd_
              << '\n';
}

void inc_day(Date & date, int d)
{
    date.dd += d;
}
