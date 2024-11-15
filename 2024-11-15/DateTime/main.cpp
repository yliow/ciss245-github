#include <iostream>
#include "DateTime.h"

int main()
{
    DateTime dt(2024, 11, 15, 14, 54, 0);
    std::cout << "dt:" << dt << '\n';
    //std::cout << "year of dt:" << dt.yyyy() << '\n';

    return 0;
}
