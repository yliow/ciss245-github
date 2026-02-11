#include <iostream>
#include "Time.h"

int main()
{
    Time t0 = {5, 18, 0};
    Time_println(t0);
    Time_add_one_sec(t0);
    Time_println(t0);

    Time t1 = {5, 18, 5};
    Time t2 = {5, 18, 1};
    // std::cout << Time_eq(t0, t1) << '\n';
    // std::cout << Time_ne(t0, t1) << '\n';

    // while (Time_ne(t0, t1))
    // {
    //     Time_println(t0);
    //     Time_add_one_sec(t0);
    // }

    // t0 != t1   same as   operator!=(t0, t1)
    
    while (t0 != t1)
    {
        Time_println(t0);
        Time_add_one_sec(t0);
    }
    return 0;
}
