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

#endif
