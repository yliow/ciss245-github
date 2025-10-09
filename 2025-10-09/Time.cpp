#include <iostream>
#include "Time.h"

void Time_print(const Time & t0)
{
    std::cout << t0.hh << ':' << t0.mm << ':' << t0.ss << '\n'; 
}

void Time_print(const Time * t0)
{
    std::cout << t0->hh << ':' << t0->mm << ':' << t0->ss << '\n'; 
}

void Time_add_one_sec(Time & t0)
{
    ++t0.ss;
}

void Time_add_one_sec(Time * t0)
{
    ++t0->ss;
}

// bool Time_equals(const Time & t0, const Time & t1);
// bool Time_equals(const Time * t0, const Time * t1);
