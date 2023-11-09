#include <iostream>

int main()
{
    int * p0;
    p0 = new int;
    std::cout << (*p0) << '\n';
    *p0 = 42;
    delete p0;
         
    int s = 5;         
    int * p1 = new int[5];          
    p1[0] = 42;
    p1[1] = -1;
    std::cout << p1[1] << '\n';
    delete [] p1; 
    
    return 0;
}
