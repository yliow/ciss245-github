#include <iostream>
#include <iomanip>

struct Time
{
    int hour;
    int min;
    int sec;
};

void Time_print(Time t)
{
    std::cout << std::setw(2) << std::setfill('0') << t.hour
              << ':'
              << std::setw(2) << std::setfill('0') << t.min
              << ':'
              << std::setw(2) << std::setfill('0') << t.sec
              << '\n';
    t.hour = -1;
}

int main()
{
    Time t0;
    t0.hour = 5;
    t0.min = 18;
    t0.sec = 0;

    Time_print(t0);
    std::cout << t0.hour << '\n';
    return 0;
}

