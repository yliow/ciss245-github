// Date.cpp
#include <iostream>
#include "Date.h"

//Date::Date(const Date & date)
//    : yyyy_(date.yyyy_), mm_(date.mm_), dd_(date.dd_)
//{}

Date::Date()
    : yyyy_(1970), mm_(1), dd_(1)
{}

Date::Date(int y, int m, int d)
    : yyyy_(y), mm_(m), dd_(d)
{
    //std::cout << "Date::Date with " << y << ' ' << m << ' '
    //          << d << '\n';
}

void Date::init(int y, int m, int d)
{
    yyyy_ = y;
    mm_ = m;
    dd_ = d;
}

void Date::print() const
{
    std::cout << yyyy_ << '-' << mm_ << '-' << dd_ << '\n';
}

int Date::get_year() const
{
    return yyyy_;
}

int Date::get_month() const
{
    return mm_;
}

int Date::get_day() const
{
    return dd_;
}

std::ostream& operator<<(std::ostream & cout, const Date & date)
{
    cout << date.get_year() << '-'
         << date.get_month() << '-'
         << date.get_day();
    return cout;
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

