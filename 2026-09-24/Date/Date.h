#ifndef DATE_H
#define DATE_H

#include <iostream>

struct Date
{
    int yyyy, mm, dd; // member variables

    // ALTERNATIVE
    // int yyyymmdd;
};

int get_year(const Date &);
int get_month(const Date &);
int get_day(const Date &);

std::ostream & operator<<(std::ostream &, const Date &);

#endif
