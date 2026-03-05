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
    std::cout << yyyy_ << '-'
              << mm_ << '-'
              << dd_ << '\n';
}

void Date::add_y(int dy)
{
    yyyy_ += dy;
}

void Date::add_m(int dm)
{
    mm_ += dm;
}

void Date::add_d(int dd)
{
    dd_ += dd;
}
