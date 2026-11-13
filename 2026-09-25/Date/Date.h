#ifndef DATE_H
#define DATE_H

#include <iostream>

struct Date
{
    int yyyy, mm, dd; // member variables

    // ALTERNATIVE
    // int yyyymmdd;
};

Date get_Date(int year, int month, int day);
int get_year(const Date &);
void set_year(Date &, int year);
int get_month(const Date &);
void set_month(Date &, int month);
int get_day(const Date &);

std::ostream & operator<<(std::ostream &, const Date &);

#endif
