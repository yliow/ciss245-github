#include <iostream>
#include "Date.h"

void init(Date & date, int y, int m, int d)
{
    date.yyyy_ = y;
    date.mm_ = m;
    date.dd_ = d;
}

void print(const Date & date)
{
    std::cout << date.yyyy_ << '/'
              << date.mm_ << '/'
              << date.dd_ << '\n';
}

void add_y(Date & date, int dy)
{
    date.yyyy_ += dy;
}

// void add_m(Date &, int)
// {
// }

// void add_d(Date &, int)
// {
// }
