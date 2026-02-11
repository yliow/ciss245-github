#include <iostream>
#include "Time.h"

int main()
{
    Time t0 = {5, 18, 0};
    Time_println(t0);
    Time_add_one_sec(t0);
    Time_println(t0);
    
    return 0;
}
