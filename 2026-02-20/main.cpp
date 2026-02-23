#include <iostream>

void my_new(int ** pp)
{
    *pp = new int;
}

void my_delete(int * q)
{
    delete q;
}

// void my_delete(int ** q)
// {
//     delete *q;
// }
 
void special_swap(int * p[2])
{
    int * t = p[0];
    p[0] = p[1];
    p[1] = t;
}

int main()
{
    // int * p = new int;
    // *p = 42;
    // std::cout << (*p) << '\n';
    // delete p;

    // int * p;
    // my_new(&p);
    // *p = 42;
    // my_delete(p);
    // my_delete(&p);
    // *p = 1; CRASH

    int x[2] = {0, 1};
    int * p[2];
    for (int i = 0; i < 2; ++i)
    {
        p[i] = &x[i];
    }
    std::cout << "x: ";
    for (int i = 0; i < 2; ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << '\n';
    std::cout << "x through p: ";
    std::cout << '\n';
    for (int i = 0; i < 2; ++i)
    {
        std::cout << *p[i] << ' ';
    }
    std::cout << '\n';
  
    special_swap(p);
    std::cout << "x: ";
    for (int i = 0; i < 2; ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << '\n';
    std::cout << "x through p:";
    for (int i = 0; i < 2; ++i)
    {
        std::cout << *p[i] << ' ';
    }
    std::cout << '\n';
    
    return 0;
}
