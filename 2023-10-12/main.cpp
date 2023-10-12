#include <iostream>

// file: Date.h
//#ifndef .....
struct Date
{
    int yyyy, mm, dd;
};

std::ostream & operator<<(std::ostream & cout, const Date &);
void init(Date & date, int hhhh, int mm, int dd);
// bool is_equal(const Date &, const Date &);
bool operator==(const Date & d0, const Date & d1);
bool operator!=(const Date & d0, const Date & d1);
Date operator+(const Date & d0, const Date & d1);

// file: Date.cpp
//#include "Date.h"

std::ostream & operator<<(std::ostream & cout, const Date & date)
{
    cout << date.yyyy << '/' << date.mm << '/' << date.dd;
    return cout;
}

void init(Date & date, int yyyy, int mm, int dd)
{
    date.yyyy = yyyy;
    date.mm = mm;
    date.dd = dd;
}

// bool is_equal(const Date & d0, const Date & d1)
// {
//     return (d0.yyyy == d1.yyyy && d0.mm == d1.mm && d0.dd == d1.dd);
// }

// good candidate inline
bool operator==(const Date & d0, const Date & d1)
{
    return (d0.yyyy == d1.yyyy && d0.mm == d1.mm && d0.dd == d1.dd);
}

bool operator!=(const Date & d0, const Date & d1)
{
    return !(d0 == d1);
}

Date operator+(const Date & d0, const Date & d1)
{
    Date ret = {d0.yyyy + d1.yyyy, d0.mm + d1.mm, d0.dd + d1.dd};
    return ret;
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

    Date tomorrow;
    init(tomorrow, 0, 0, 0);
    tomorrow = today;
    std::cout << tomorrow << '\n';

    //std::cout << is_equal(tomorrow, today) << '\n';
    std::cout << (tomorrow == today) << '\n'; 
    std::cout << (tomorrow != today) << '\n'; 
    Date day;
    init(day, 0, 0, 1);
    tomorrow = today + day; // today+day = operator+(today, day)
    std::cout << tomorrow << '\n';

    Date newdate = {1900, 1, 1};
    std::cout << newdate << '\n';

    int * p = new int;
    //std::cin >> (*p);
    delete p;
    int s;
    //std::cin >> s;
    p = new int[s];
    p[0] = 42; // p[i] ==== *(p + i)
    delete[] p;

    Date * q = new Date;
    (*q).yyyy = 5;
    std::cout << (*q) << '\n';
    q->yyyy = 5;
    std::cout << (*q) << '\n';

    int t = 10;
    Date * r = new Date[t];
    for (int i = 0; i < t; ++i)
    {
        r[i].yyyy = i;
    }
    for (int i = 0; i < t; ++i)
    {
        std::cout << r[i] << '\n';
    }
    
    return 0;
}
