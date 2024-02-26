// Date.cpp

#include <iostream>
#include "Date.h"

void init(Date & date, int yyyy, int mm, int dd)
{
    date.yyyy_ = yyyy;
    date.mm_ = mm;
    date.dd_ = dd;
}

void print(const Date & date)
{
    std::cout << date.yyyy_ << '-' << date.mm_ << '-' << date.dd_;
}
void println(const Date & date)
{
    print(date);
    std::cout << '\n';
}
