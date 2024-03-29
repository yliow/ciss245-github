#include <iostream>

class IntPointer
{
public:
    IntPointer()
        : p_(new int)
    {}
    IntPointer(const IntPointer & q)
        : p_(new int)
    {
        *p_ = *(q.p_);
    }
    ~IntPointer()
    {
        std::cout << "IntPointer::~IntPointer() called\n";
        delete p_;
    }
    void operator=(const IntPointer & q)
    {
        *p_ = *(q.p_);
    }
    int & dereference()
    {
        return *p_;
    }
    int & operator*() // want this to be a reference because I want this to be a l-value
    {
        return *p_;
    }
    // also want dereference as an int value, as a r-value, int i = *q
    // int operator*()
    // {
    //     return *p_;
    //}
private:
    int * p_;
};

void f()
{
    int * p = new int;
    *p = 42;
    delete p;
    p = new int;
    *p = 4;
    delete p;

    IntPointer q;
    std::cout << q.dereference() << '\n';
    q.dereference() = 42;
    std::cout << q.dereference() << '\n';

    *q = 99; // *it === it.operator*()
    std::cout << (*q) << '\n';

    IntPointer r(q);

    r = q; // r.operator=(q)
    
} // q.~IntPointer()

int main()
{
    f();
    return 0;
}
