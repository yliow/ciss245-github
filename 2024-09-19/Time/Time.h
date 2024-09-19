#ifndef TIME_H
#define TIME_H

struct Time
{
    int hour;
    int min;
    int sec;
};

void Time_print(const Time & t);
void Time_addonesec(Time & t);

#endif
