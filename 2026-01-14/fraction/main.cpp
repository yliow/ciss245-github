#include <iostream>
#include "Fraction.h"

int main()
{
    int a0, b0; // 1st fraction
    int a1, b1; // 2nd fraction
    int a2, b2; // 3rd fraction (for result of operation)
    std::cin >> a0 >> b0 >> a1 >> b1;
    Fraction_add(a0, b0,
                 a1, b1,
                 a2, b2);
    Fraction_println(a2, b2);
    return 0;
}
