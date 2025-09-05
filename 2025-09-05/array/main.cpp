#include <iostream>
#include <cmath>
#include "array.h"

bool isprime(int n);
void add_fraction(int n0, int d0,
                  int n1, int d1,
                  int & n2, int & d2);

// int main()
// {
//     int n0, d0; // models fraction n0/d0
//     int n1, d1; // models fraction n1/d1
//     std::cin >> n0 >> d0 >> n1 >> d1;

//     int n2, d2;
//     add_fraction(n0, d0, n1, d1, n2, d2);

//     std::cout << n0 << '/' << d0
//               << " + "
//               << n1 << '/' << d1
//               << " = "
//               << n2 << '/' << d2
//               << '\n';
    
//     return 0;
    // double x;
    // std::cin >> x;
    // for (int n = 2; n <= x; ++n)
    // {
    //     if (isprime(n))
    //     {
    //         std::cout << n << ' ';
    //     }
    // }
    // std::cout << '\n';

    // return 0;
//}

int main()
{
    // int n0, d0; // models fraction n0/d0
    // int n1, d1; // models fraction n1/d1
    // std::cin >> n0 >> d0 >> n1 >> d1;

    // int n2, d2;
    // add_fraction(n0, d0, n1, d1, n2, d2);

    // std::cout << n0 << '/' << d0
    //           << " + "
    //           << n1 << '/' << d1
    //           << " = "
    //           << n2 << '/' << d2
    //           << '\n';
    
    // return 0;
    // double x;
    // std::cin >> x;
    // for (int n = 2; n <= x; ++n)
    // {
    //     if (isprime(n))
    //     {
    //         std::cout << n << ' ';
    //     }
    // }
    // std::cout << '\n';

    // return 0;

    int x[] = {5, 3, 1, 2, 4, 0};
    print(x, 0, 6);
    println(x, 2, 5);

    bubblesort(x, 1, 5);
    println(x, 0, 6);

    std::cout << "testing push_back ...\n";
    int y[10];
    int y_len = 0;
    for (int i = 10; i < 15; ++i)
    {
        std::cout << '\n';
        std::cout << "top ...\n";
        println(y, 0, y_len);
        push_back(y, y_len, i);
        println(y, 0, y_len);
        std::cout << "bottom ...\n";
    }
    
    
    return 0;
}


int min(int x, int y)
{
    return (x <= y ? x : y);
}


int GCD(int m, int n)
{
    // now compute GCD of m,n. store it in g.
    int g = 1;
    for (int i = min(m, n); i >= 1; --i)
    {
        if (m % i == 0 && n % i == 0)
        {
            g = i;
            break;
        }
    }
    return g;
}

void add_fraction(int n0, int d0,
                  int n1, int d1,
                  int & n2, int & d2)
{
    // compute n2/d2 as n0/d0 + n1/d1.
    n2 = n0 *d1 + d0 * n1;
    d2 = d0 * d1;

    // simplify the fraction n2/d2
    int g = GCD(n2, d2);
    n2 /= g;
    d2 /= g;
}


bool isprime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    else
    {
        for (int d = 2; d <= sqrt(n); ++d)
        {
            if (n % d == 0)
            {
                return false;
            }
        }
        return true;
    }
}
