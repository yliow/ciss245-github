// Date.cpp

#include <iostream>
#include "Date.h"

void Date::init(int yyyy, int mm, int dd)
{
    yyyy_ = yyyy;
    mm_ = mm;
    dd_ = dd;
}

void Date::print()
{
    std::cout << yyyy_ << '-' << mm_ << '-' << dd_ << '\n';
}

void Date::add_y(int y)
{
    yyyy_ += y;
}

void Date::add_m(int m)
{
    mm_ += m;
}

void Date::add_d(int d)
{
    dd_ += d;
}
