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

    Time one_sec = {0, 0, 1};
    
    while (t0 != t1)
    {
        // Time_println(t0);
        std::cout << t0     // same as operator<<(std::cout, t0)
                  << '\n';
        //Time_add_one_sec(t0); // t0 = t0 + 1 sec
        t0 += one_sec; //  operator+=(t0, one_sec)
    }
    return 0;
}
