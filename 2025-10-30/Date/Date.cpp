#include <iostream>
#include "Date.h"

// Date::Date()
//     : yyyy_(1970), mm_(1), dd_(1)
// {}

Date::Date(const Date & date) // copy constructor
    : yyyy_(date.yyyy_), mm_(date.mm_), dd_(date.dd_)
{}

Date::Date(int yyyy, int mm, int dd)
    : yyyy_(yyyy), mm_(mm), dd_(dd)
{
    // yyyy_ = yyyy;
    // mm_ = mm;
    // dd_ = dd;
}

//Date::Date(char s[])
//{}

Date::~Date()
{
    std::cout << "Date::~Date() ...\n";
}

void Date::init(int yyyy, int mm, int dd)
{
    yyyy_ = yyyy;
    mm_ = mm;
    dd_ = dd;
}

std::ostream & operator<<(std::ostream & cout, const Date & date)
{
    cout << date.get_year() << '-' << date.get_month() << '-'
         << date.get_day();
    return cout;
}

int Date::get_year() const
{
    return yyyy_;
}

void Date::set_year(int yyyy)
{
    yyyy_ = yyyy;
}

int Date::get_month() const
{
    return mm_;
}

int Date::get_day() const
{
    return dd_;
}

void Date::print() const
{
    std::cout << yyyy_ << '-'
              << mm_ << '-'
              << dd_ << '\n';
    //yyyy_ = 99999999; <<<<< DANGEROUS
}

void Date::add_y(int i)
{
    yyyy_ += i;
}

void Date::add_m(int i)
{
    mm_ += i;
    if (mm_ >= 13)
    {
        yyyy_ += mm_ / 12;
        mm_ = 1;
    }
}

void Date::add_d(int i)
{
    dd_ += i;
}

void Date::add_m_d(int dm, int dd)
{
    add_m(dm);
    //mm_ += dm;

    add_d(dd);
    //dd_ += dd;
}


void Date::add_date(const Date & date)
{
    yyyy_ += date.yyyy_;
    mm_ += date.mm_;
    dd_ += date.dd_;
}
