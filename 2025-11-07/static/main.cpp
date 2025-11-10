#include <iostream>
#include "C.h"

void f()
{
    int i = 0;
    static int j = 0;
    std::cout << i << ' ' << j << '\n';
    ++i;
    ++j;
}

int main()
{
    std::cout << "number of objects alive:" << C::get_num_objects() << '\n';

    C obj0;
    std::cout << "number of objects alive:" << C::get_num_objects() << '\n';

    int x = 0;

    if (x == 0)
    {
        C obj1;
        std::cout << "number of objects alive:" << C::get_num_objects() << '\n';
    }
    
    std::cout << "number of objects alive:" << C::get_num_objects() << '\n';

    f();
    f();
    f();
    return 0;
}
