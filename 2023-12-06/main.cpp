#include <iostream>

class P
{
public:
    P(int x=0)
        : x_(x)
    {}
    int get() const
    {
        return x_;
    }
    virtual void m() const = 0; // pure virtual function/method
    int x_;
};

class C0: public P
{
public:
    C0(int x, int y)
        : P(x), y_(y)
    {}
    int get() const
    {
        return y_;
    }
    virtual void m() const
    {
        std::cout << "C0::m()\n";
    }
    int y_;
};

int main()
{
    // P p(42);
    // C0 c0(43, 1);
    // //std::cout << c0.get() << '\n';

    // //c0 = p;
    // p = c0; // IMPORTANT

    P * q = new C0(44, 2);
    q->m();
    
    return 0;
}
