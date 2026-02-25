#include <iostream>
#include <iomanip>

struct Time
{
    int hh, mm, ss;
};

Time Time_construct(int hh, int mm, int ss)
{
    Time ret = {hh, mm, ss};
    return ret;
}

std::ostream & operator<<(std::ostream & cout, const Time & time)
{
    cout << std::setw(2) << std::setfill('0') << time.hh << ':'
         << std::setw(2) << std::setfill('0') << time.mm << ':'
         << std::setw(2) << std::setfill('0') << time.ss;
    return cout;
}

bool operator==(const Time & t0, const Time & t1)
{
    return (t0.hh == t1.hh && t0.mm == t1.mm && t0.ss == t1.ss);
}

struct Date
{
    int yyyy, mm, dd;
};

Date Date_construct(int yyyy, int mm, int dd)
{
    Date ret = {yyyy, mm, dd};
    return ret;
}

bool operator==(const Date & d0, const Date & d1)
{
    return (d0.yyyy == d1.yyyy && d0.mm == d1.mm && d0.dd == d1.dd);
}

std::ostream & operator<<(std::ostream & cout, const Date & date)
{
    cout << std::setw(2) << std::setfill('0') << date.yyyy << '-'
         << std::setw(2) << std::setfill('0') << date.mm << '-'
         << std::setw(2) << std::setfill('0') << date.dd;
    return cout;
}


struct DateTime
{
    Date date;
    Time time;
};

DateTime DateTime_construct(int yyyy, int mm, int dd,
                            int hh, int mm_, int ss)
{
    Date date = Date_construct(yyyy, mm, dd);
    Time time = Time_construct(hh, mm_, ss);
    DateTime ret;
    ret.date = date;
    ret.time = time;
    return ret;
}

std::ostream & operator<<(std::ostream & cout, const DateTime & datetime)
{
    Date date = datetime.date;
    Time time = datetime.time;
    std::cout << date << ' ' << time;
    return cout;
}

bool operator==(const DateTime & dt0, const DateTime & dt1)
{
    return (dt0.date == dt1.date && dt0.time == dt1.time);
}

bool operator!=(const DateTime & dt0, const DateTime & dt1)
{
    return !(dt0 == dt1);
}

int main()
{
    Date date = Date_construct(2026, 2, 25);
    std::cout << date << '\n';
    Time time = Time_construct(9, 15, 0);
    std::cout << time << '\n';
    DateTime dt = DateTime_construct(2026, 2, 25, 9, 15, 0);
    std::cout << dt << '\n';

    DateTime dt1 = DateTime_construct(2026, 2, 25, 9, 15, 0);
    DateTime dt2 = DateTime_construct(2026, 2, 25, 9, 15, 1);
    std::cout << (dt1 == dt) << '\n';
    std::cout << (dt2 != dt) << '\n';

    int * p = new int; // int value is on the heap. p is the handle
    *p = 42;
    delete p;
    Date * q = new Date; // Date value is on the heap. q is the handle
    std::cout << (*q) <<'\n';
    q->yyyy = 2027;
    std::cout << (*q) << '\n';
    delete q;

    DateTime * r = new DateTime[1000];
    // r[0] ===== *r
    // r[1] ===== *(r + 1)
    return 0;
}
