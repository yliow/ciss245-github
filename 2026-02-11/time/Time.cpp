#include <iostream>
#include <iomanip>
#include "Time.h"

void Time_print(const Time & t0)
{
    std::cout << std::setw(2) << std::setfill('0') << t0.hour
              << ':'
              << std::setw(2) << std::setfill('0') << t0.min
              << ':'
              << std::setw(2) << std::setfill('0') << t0.sec;
}

void Time_println(const Time & t0)
{
    Time_print(t0);
    std::cout << '\n';
}

void Time_add_one_sec(Time & t)
{
    ++t.sec;
}
