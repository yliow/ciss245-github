// Date.h

#ifndef DATE_H
#define DATE_H

struct Date
{
    int yyyy_;
    int mm_;
    int dd_;
};

void init(Date &, int, int, int);
void print(const Date &);
void println(const Date &);
void add_y(Date &, int);
void add_m(Date &, int);
void add_d(Date &, int);

#endif
