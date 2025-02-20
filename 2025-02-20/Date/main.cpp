#include <iostream>
#include "Date.h"

int main()
{
    Date today, yesterday;
    today.init(2025, 2, 20);
    today.print();
    
    yesterday.init(2025, 2, 19);
    yesterday.print();

    std::cout << "inc today's yr by 1 ...\n";
    today.add_y(1);
    today.print();
    std::cout << today.yyyy_ << '\n';

    std::cout << "inc yesterday's m and d by 2 and 3 ...\n";
    yesterday.add_m(2);
    yesterday.add_d(3);
    yesterday.print();
    
    return 0;
}
