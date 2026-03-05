// Date.cpp

#include <iostream>
#include "Date.h"

Date::Date(int yyyy, int mm, int dd)
    : yyyy_(yyyy), mm_(mm), dd_(dd)
{}


void Date::init(int yyyy, int mm, int dd)
{
    yyyy_ = yyyy;
    mm_ = mm;
    dd_ = dd;
}

void Date::print() const
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

void Date::add_y_m_d(int dy, int dm, int dd)
{
    add_y(dy);
    add_m(dm);
    add_d(dd);
}

