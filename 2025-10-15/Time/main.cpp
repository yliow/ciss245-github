#include <iostream>
#include "Time.h"

struct StopWatch
{
    int id;
    Time time;
};

struct StopWatch2
{
    int id;
    Time * ptime;
}


int main()
{
    Time t0 = Time_get(9, 10, 0);
    Time_print(t0);
    Time_print(&t0);

    Time_add_one_sec(t0);
    std::cout << t0 << '\n';
    const Time SEC = Time_get(0, 0, 1);
    const Time HOUR = Time_get(0, 1, 0);
    //t0 = t0 + SEC; // t0 = operator+(t0, SEC)
    Time t3;
    t3 = (t0 += SEC); // operator+=(t0, one_sec) ??
    //t0 += HOUR;
    //++t0;
    std::cout << t0 << '\n';
    std::cout << t3 << '\n';
    
    Time t1;
    // t1.hh = t0.hh;
    // t1.mm = t0.mm;
    // t1.ss = t0.ss;
    t1 = t0;
    std::cout << "t1:";
    std::cout << t1 << '\n';

    Time t2 = Time_get(9, 11, 1);
    bool b = Time_equals(t0, t2);
    std::cout << b << '\n';
    Time_equals(&t0, &t2);
    std::cout << b << '\n';

    while (!Time_equals(t0, t2))
    {
        Time_print(t0);
        Time_add_one_sec(t0);
    }
    
    while (!(t0 == t2)) // i.e., operator==(t0, t2)
    {
        Time_print(t0);
        Time_add_one_sec(t0);
    }

    while (t0 != t2) // i.e., operator!=(t0, t2)
    {
        //Time_print(t0);
        std::cout << t0; // i.e., operator<<(std::cout, t0)
        t0 += SEC;
    }

    StopWatch swA;
    swA.id = 0;
    swA.time = t0;

    Time * pt = new Time;
    pt->hh = 10;
    delete pt;
    StopWatch * swB = new StopWatch;
    swB->id = 5;
    smB->time = t0;

    StopWatch2 * p = new StopWatch2;
    p->id = 3;
    p->ptime = new Time;
    *(p->ptime) = t0;
    p->ptime->hh = 10;
    
    return 0;
}
