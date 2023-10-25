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
