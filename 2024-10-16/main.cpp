#include <iostream>

struct Time
{
    int hh, mm, ss;
};

void init(Time & t, int hh, int mm, int ss)
{
    t.hh = hh;
    t.mm = mm;
    t.ss = ss;
}

void print(const Time & t)
{
    std::cout << t.hh << ':' << t.mm << ':' << t.ss << '\n';
}

int main()
{
    Time now;
    init(now, 14, 37, 0);

    Time * p;
    p = new Time;
    (*p).hh = 1;
    (*p).mm = 2;
    (*p).ss = 3;
    
    return 0;
}
