#ifndef TIME_H
#define TIME_H

struct Time
{
    int hour;
    int min;
    int sec;
};

void Time_print(const Time & t0);
void Time_println(const Time & t0);
void Time_add_one_sec(Time & t);
/* bool Time_eq(const Time & t0, const Time & t1); */
/* bool Time_ne(const Time & t0, const Time & t1); */
bool operator==(const Time &, const Time &);
bool operator!=(const Time &, const Time &);
void operator+=(Time & t0, const Time & t1);
std::ostream & operator<<(std::ostream & cout, const Time & t0);

#endif
