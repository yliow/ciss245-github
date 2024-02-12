#include <iostream>

struct Time
{
    int hh;
    int mm;
    int ss;
};

void print(const Time & t)
{
    std::cout << t.hh << ':' << t.mm << ':' << t.ss;
}

void inc_ss(Time & t)
{
    std::cout << &t << '\n';
    ++t.ss;
}

void inc_ss(Time * t)
{
    std::cout << &t << '\n';
    //++t.ss;
    //(*t).ss += 1;
    t->ss += 1;
}

// todo
void operator+=(Time & t, int dss)
{
    t.ss += dss;
}

void operator++(Time & t)
{
    t.ss += 1;
}

// std::cin is from std::istream
std::ostream & operator<<(std::ostream & cout, const Time & t)
{
    cout << t.hh << ':' << t.mm << ':' << t.ss;
    return cout;
}

int main()
{
    Time now;
    now.hh = 14;
    now.mm = 46;
    now.ss = 0;
    print(now);
    std::cout << &now << '\n';
    inc_ss(now);
    inc_ss(&now);
    print(now);
    for (int i = 0; i < 10; ++i)
    {
        now += 1;
        std::cout << now << '\n'; // operator<<(std::cout, now)
    }

    std::cout << "test ++\n";
    ++now;
    std::cout << now << '\n';

    //Time onehour; onehour.hh = 1; onehour.mm = 0;  onehour.ss = 0;
    //now += onehour; // operator+=(Time &, const Time &);
    
    return 0;
}
