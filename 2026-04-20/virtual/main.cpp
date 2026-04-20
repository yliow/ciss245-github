#include <iostream>

class P
{
public:
    P()
        : x(0)
    {}
    virtual void f()
    {
        std::cout << "P::f()\n";
    }
    int x;
};

class C: public P
{
public:
    C()
        : y(1)
    {}
    virtual void f()
    {
        std::cout << "C::f()\n";
    }
    int y;
};

int main()
{
    P p;
    p.f(); // clear
    C c;
    // p = c;
    // c = p; WRONG
    c.f(); 
    
    P * p0;
    p0 = &c;
    p0->f();

    return 0;
}
