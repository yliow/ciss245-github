#include <iostream>

class P
{
public:
    virtual void f() = 0;
};

class C: public P
{
public:
    void f() { std::cout << "C::f()\n"; }
};


int main()
{
    // C c0, c1;
    // c0 = c1; // OK
    // P p0, p1;
    // p0 = p1; // OK
    // p0 = c0; // OK
    // c0 = p0; // WRONG!!!
    
    P * p = new C;
    p->f();
    
    return 0;
}
