#include <iostream>
#include "Time.h"

int main()
{
    Time t0 = {9, 10, 0};
    Time_print(t0);
    Time_print(&t0);

    Time_add_one_sec(t0);
    Time_print(t0);
    Time_add_one_sec(&t0);
    Time_print(t0);

    // Time t1 = {9, 10, 1};
    // bool b = Time_equals(t0, t1);
    // std::cout << b << '\n';

    // while (!Time_equals(t0, t1))
    // {
    //     Time_print(t0);
    //     Time_add_one_secone(t0);
    // }

    // while (t0 == t1) // <<< same as operator==(t0, t2)

    return 0;
}
