// Date.cpp

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
    std::cout << yyyy_ << '-' << mm_ << '-' << dd_ << '\n';
}

std::ostream& operator<<(std::ostream & cout, const Date & date)
{
    cout << date.yyyy_;
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

void Date::add_y_m_d(int y, int m, int d)
{
    yyyy_ += y;
    mm_ += m;
    dd_ += d;
}

