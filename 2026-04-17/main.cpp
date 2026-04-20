#include <iostream>
#include <vector>

class R
{
public:
    int w_;
};

#include "Q.h"

class P: public R
{
public:
    P()
        : x_(1), y_(2)
    {}
    void g()
    {}
    void f()
    {
        std::cout << "P::f()\n";
    }
//private:
    int x_;
    int y_;
};

class C: public P, public Q
{
public:
    C()
        : x_(0)
    {
        y_ = 99;
    }
    void f()
    {
        std::cout << "C::f()\n";
    }
    int x_;
};
    
int main()
{
    C c;
    // c.x_ = 0;
    // c.y_ = 1;
    std::cout << c.x_ << '\n';
    c.C::f();
    c.P::f();
    c.g();
    c.z_ = 55;
    c.w_ = 99;
    std::vector< int > v;
    
    return 0;
}
