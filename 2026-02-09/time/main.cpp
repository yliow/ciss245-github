#include <iostream>
#include <iomanip>

struct Time
{
    int hour;
    int min;
    int sec;
};

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


int main()
{
    Time t0;
    t0.hour = 5;
    t0.min = 18;
    t0.sec = 0;
    Time_println(t0);
    
    return 0;
}
