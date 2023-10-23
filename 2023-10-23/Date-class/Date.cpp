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

void Date::inc_day(int d)
{
    dd_ += d;
}
