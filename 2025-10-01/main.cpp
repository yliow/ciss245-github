#include <iostream>

int main()
{
    int y = 3;
    if (y > 0)
    {
        int x = 42;
        // .....
        // .....
        int * p;
        p = new int;
        std::cout << x << ' ' << p
                  << ' ' << (*p) << '\n';
        delete p;
        // ... after 2 hrs
        p = new int;
        *p = 3;
        std::cout << (*p) << '\n';
        
                  
    }
    
    
}
