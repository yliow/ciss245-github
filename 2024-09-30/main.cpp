#include <iostream>

int main()
{
    int * p = NULL;
    p = new int;
    
    if (p == NULL)
    {
        std::cout << "sorry cannot *p ...\n";
    }
    else
    {
        std::cout << "*p = " << (*p) << '\n';
        *p = 42;
    }

    delete p;
    std::cout << (*p) << '\n';
    
    return 0;
}
