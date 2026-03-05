#include <iostream>
#include "Date.h"

int main()
{
    Date today;
    today.init(2026, 3, 4);
    today.print();
    today.add_y(1);
    today.print();
    today.add_m(1);
    today.print();
    today.add_d(1);
    today.print();

    Date yesterday;
    yesterday.init(2026, 3, 3);
    yesterday.print();
    
    return 0;
}
