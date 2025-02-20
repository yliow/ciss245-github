#include <iostream>
#include "Date.h"

int main()
{
    Date today, yesterday;
    init(today, 2025, 2, 20);
    print(today);
    
    init(yesterday, 2025, 2, 19);
    print(yesterday);
    
    return 0;
}
