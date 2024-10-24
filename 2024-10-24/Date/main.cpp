#include <iostream>
#include "Date.h"

int main()
{
    Date date0; // has yyyy_, mm_, dd_
    date0.init(2024, 10, 24); // <--- WRONG
    date0.print();

    std::cout << date0 << '\n';
    
    date0.add_y(1);
    date0.add_m(2);
    date0.add_d(-3);
    date0.add_y_m_d(1, -2, 3);

    Date date1;
    date1.init(1970, 2, 2);

    return 0;
}
