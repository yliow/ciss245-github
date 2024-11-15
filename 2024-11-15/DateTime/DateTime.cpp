#include <iostream>
#include "DateTime.h"

DateTime::DateTime(int yyyy, int month, int dd,
                   int hh, int min, int ss)
    : date_(yyyy, month, dd), time_(hh, min, ss)
{}

int DateTime::yyyy() const
{
    return date_.get_year();
}
    
Date DateTime::get_date() const
{
    return date_;
}

Time DateTime::get_time() const
{
    return time_;
}
 
std::ostream & operator<<(std::ostream & cout,
                          const DateTime & dt)
{
    cout << dt.get_date()
         << ' '
         << dt.get_time();
    return cout;
}
