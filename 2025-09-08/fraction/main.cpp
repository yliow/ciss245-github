#include <iostream>
#include <cmath>
#include "fraction.h"


int main()
{
    int n0, d0; // models fraction n0/d0
    int n1, d1; // models fraction n1/d1
    std::cin >> n0 >> d0 >> n1 >> d1;

    int n2, d2;
    add_fraction(n0, d0, n1, d1, n2, d2);

    print_fraction(n0, d0);
    std::cout << " + ";
    print_fraction(n1, d1);
    std::cout << " = ";
    print_fraction(n2, d2);
    std::cout << '\n';
    return 0;
}

