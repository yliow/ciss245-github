// Date.cpp

#include <iostream>
#include "Date.h"

Date::Date()
{
    std::cout << "Date::Date() ... \n";
}

Date::Date(int yyyy, int mm, int dd)
    : yyyy_(yyyy), mm_(mm), dd_(dd)
{}

void Date::init(int yyyy, int mm, int dd)
{
    yyyy_ = yyyy;
    mm_ = mm;
    dd_ = dd;
}

void Date::println() const
{
    std::cout << yyyy_ << '/' << mm_ << '/' << dd_
              << '\n';
    //yyyy_ = 0; // trigger error
}

void Date::inc_day(int d)
{
    dd_ += d;
}

std::ostream & operator<<(std::ostream & cout, const Date & d)
{
    cout << "in operator<<(std::ostream&, const Date&)\n";
    cout << d.get_year() << '/' << d.get_month()
         << '/' << d.get_day();
    return cout;
}

std::istream & operator>>(std::istream & cin, Date & d)
{
    int yyyy, mm, dd;
    cin >> yyyy >> mm >> dd;
    d.init(yyyy, mm, dd);
    return cin;
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
