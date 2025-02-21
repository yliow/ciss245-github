#include <iostream>
#include "Date.h"

void Date::init(int y, int m, int d)
{
    yyyy_ = y;
    mm_ = m;
    dd_ = d;
}

void Date::print()
{
    std::cout << yyyy_ << '/'
              << mm_ << '/'
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

void Date::add_m_d(int dm, int dd)
{
    add_m(dm);
    add_d(dd);
}
