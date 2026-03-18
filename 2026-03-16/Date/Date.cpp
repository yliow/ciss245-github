// Date.cpp

#include <iostream>
#include "Date.h"

Date::Date(int yyyy, int mm, int dd)
    : yyyy_(yyyy), mm_(mm), dd_(dd)
{
    std::cout << "Date::Date(int, int, int)\n";
}

Date::Date(const Date & date)
    : yyyy_(date.yyyy_), mm_(date.mm_), dd_(date.dd_)
{
    std::cout << "Date::Date(const Date &)\n";
}

Date::Date()
{
    std::cout << "Date::Date()\n";
}

void Date::add_date(const Date & date)
{
    yyyy_ += date.yyyy_;
    mm_ += date.mm_;
    dd_ += date.dd_;
}

Date & Date::operator+=(const Date & date) const
{
    yyyy_ += date.yyyy_;
    mm_ += date.mm_;
    dd_ += date.dd_;
    return (*this);
}

int Date::year() const
{
    //std::cout << "Date::year() ... this: " << this << '\n';
    return yyyy_;
}

int Date::month() const
{
    return mm_;
}

int Date::day() const
{
    return dd_;
}

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

std::ostream & operator<<(std::ostream & cout, const Date & date)
{
    cout << date.year() << '-' << date.month() << '-' << date.day();
    return cout;
}
