#include <iostream>

class P
{
public:
    virtual void f() = 0;
    // {
    //     std::cout << "P::f()\n";
    // }
    int get_x()
    {
        return x_;
    }
//private:
    int x_;
};

class C: public P
{
public:
    void f()
    {
        std::cout << "C::f()\n";
    }
    int get_y()
    {
        return y_;
    }
private:
    int y_;
};

int main()
{
    C c;
    std::cout << c.get_y() << '\n';
    std::cout << c.get_x() << '\n';

    C c0;
    c = c0;
    
    // P p;
    // std::cout << p.get_x() << '\n';

    // p = c;
    // std::cout << p.get_x() << '\n';
    
    // c = p;


    c0.C::f();
    // c0.P::f();
    
    P * p0 = &c0;
    p0->f();

    P q;
    
    return 0;
}
