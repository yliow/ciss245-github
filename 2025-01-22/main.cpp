#include <iostream>
#include "mymath.h"

struct Fraction
{
    int n;
    int d;
};

Fraction operator+(const Fraction & x, const Fraction & y)
{
    Fraction ret;
    ret.n = x.n * y.d + x.d * y.n;
    ret.d = x.d * y.d;
    return ret;
}

void print(const Fraction & f)
{
    std::cout << f.n << '/' << f.d << '\n';
}

void operator<<(std::ostream & cout, const Fraction & f)
{
    cout << f.n << '/' << f.d;
}

int main()
{
    std::cout << max(3, 5) << '\n';
    std::cout << max(5, 3) << '\n';
    std::cout << max(3, 3) << '\n';

    std::cout << min(2, 3, 4) << '\n';

    Fraction f = {1, 2}; // model fraction 1/2
    Fraction g = {1, 3};
    Fraction h;
    h = f + g; // same as operator+(f, g)
    //print(h);
    std::cout << h << '\n'; // same as operator<<( std::cout, h )
    
    return 0;
    
}
