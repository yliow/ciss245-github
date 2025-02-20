#include <iostream>
#include "Date.h"

int main()
{
    Date today, yesterday;
    init(today, 2025, 2, 20);
    print(today);
    
    init(yesterday, 2025, 2, 19);
    print(yesterday);

    std::cout << "inc today's yr by 1 ...\n";
    add_y(today, 1);
    print(today);
    
    return 0;
}
