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
    cout << d.yyyy_ << '/' << d.mm_ << '/' << d.dd_;
    return cout;
}
    

int Date::get_year()
{
    return yyyy_;
}
