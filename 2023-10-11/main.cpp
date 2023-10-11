#include <iostream>

// file: Date.h
//#ifndef .....
struct Date
{
    int yyyy, mm, dd;
};

std::ostream & operator<<(std::ostream & cout, const Date &);
void init(Date & date, int hhhh, int mm, int dd);

// file: Date.cpp
//#include "Date.h"

std::ostream & operator<<(std::ostream & cout, const Date & date)
{
    cout << date.yyyy << '/' << date.mm << '/' << date.dd << '\n';
    return cout;
}

void init(Date & date, int yyyy, int mm, int dd)
{
    date.yyyy = yyyy;
    date.mm = mm;
    date.dd = dd;
}


int main()
{
    Date today;
    // today.yyyy = 2023;
    // today.mm = 10;
    // today.dd = 11;
    init(today, 2023, 10, 11);

    //std::cout << today.yyyy << '/' << today.mm << '/' << today.dd << '\n';
    std::cout << today << '\n';
    
    return 0;
}
