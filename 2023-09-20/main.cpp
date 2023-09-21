#include <iostream>
#include "DateTime.h"

int max(int x, int y)
{
    return (x >= y ? x : y);
}

double max(double x, double y)
{
    return (x >= y ? x : y);
}

int main()
{
    // printDateTime(23, 1, 5);
    // printDateTime(23, 1, 5, 9);
    // printDateTime(23, 1, 5, 9, 2);
    // printDateTime(2007, 1, 15, 0, 0, 0);
    // printDateTime(2007, 1, 15, 14, 15, 59);

    std::cout << max(3, 5) << '\n';
    std::cout << max(3.2, 5.6) << '\n';
    
    return 0;
}
