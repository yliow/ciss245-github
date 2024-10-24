#include <iostream>
#include "Date.h"

int main()
{
    Date today, yesterday;
    init(today, 2024, 10, 21);
    init(yesterday, 2024, 10, 20);

    print(today);
    print(yesterday);
    
    return 0;
}
    
