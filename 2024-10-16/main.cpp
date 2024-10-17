#include <iostream>

struct Date
{
    int yyyy, mm, dd;
};

struct Time
{
    int hh, mm, ss;
};

struct DateTime
{
    Date date;
    Time time;
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

template < typename T > // some books write "class" instead of "typename"
T max(T x, T y)
{
    return (x >= y ? x : y);
}

template < typename S, typename T >
void print(S x, T t)
{
    std::cout << s << ' ' << t << '\n';
}

// int max(int x, int y)
// {
//     return (x >= y ? x : y);
// }
// double max(double x, double y)
// {
//     return (x >= y ? x : y);
// }
// char max(char x, char y)
// {
//     return (x >= y ? x : y);
// }

int main()
{
    // Time now;
    // init(now, 14, 37, 0);

    // Time * p;
    // p = new Time;
    // p->hh = 1 ; // DONT (*p).hh = 1;
    // p->mm = 2;
    // p->ss = 3;
    // print(*p);
    // delete p;

    // Time arr[10];
    // arr[3].hh = 4;

    // p = new Time[5];

    // p[2].mm = 42;
        
    // delete[] p;

    // DateTime dt;
    // dt.date.yyyy = 2024;
    
    std::cout << max< int >(5, 3) << '\n';
    std::cout << max< double >(5.5, 3.3) << '\n';
    std::cout << max< char >('a', 'z') << '\n';
    std::cout << max< bool >(true, false) << '\n';
    return 0;
    
}
