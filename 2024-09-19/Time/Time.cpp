#include <iostream>
#include <iomanip>
#include "Time.h"

void Time_print(const Time & t)
{
    std::cout << std::setw(2) << std::setfill('0') << t.hour
              << ':'
              << std::setw(2) << std::setfill('0') << t.min
              << ':'
              << std::setw(2) << std::setfill('0') << t.sec
              << '\n';
}

void Time_addonesec(Time & t)
{
    ++t.sec;
}
