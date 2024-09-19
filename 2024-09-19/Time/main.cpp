#include <iostream>
#include "Time.h"

int main()
{
    Time t0;
    t0.hour = 5;
    t0.min = 18;
    t0.sec = 0;

    Time_print(t0);
    std::cout << t0.hour << '\n';

    Time_addonesec(t0);
    Time_print(t0);
    
    return 0;
}

