#include <iostream>
#include "Time.h"

Time::Time(int hh, int mm, int ss)
    : hh_(hh), mm_(mm), ss_(ss)
{}

int Time::hh() const
{
    return hh_;
}

int Time::mm() const
{
    return mm_;
}

int Time::ss() const
{
    return ss_;
}

std::ostream & operator<<(std::ostream & cout, const Time & time)
{
    cout << time.hh() << ':' << time.mm() << ':' << time.ss();

    // Only if this non-member function is friend of Time:
    //cout << time.hh_ << ':' << time.mm_ << ':' << time.ss_;
    return cout;
}
