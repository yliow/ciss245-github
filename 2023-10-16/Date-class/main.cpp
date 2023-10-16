#include <iostream>
#include "Date.h"

int main()
{
    Date today;
    // std::cout << today.yyyy
    today.init(2023, 10, 16);
    today.println;
    return 0;
}
