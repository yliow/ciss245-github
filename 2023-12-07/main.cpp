#include <iostream>
#include <vector>

class Constant
{
public:
    virtual void print() const = 0;
};

class Int: public Constant
{
public:
    Int(int v)
        : v_(v)
    {}
    void print() const
    {
        std::cout << v_;
    }
    int v_;
};

class Double: public Constant
{
public:
    Double(double v)
        : v_(v)
    {}
    void print() const
    {
        std::cout << v_;
    }
    double v_;
};

int main()
{
    // want to iterate over {42, 3.14} and print the value
    // Int x(42);
    // x.print();
    // std::cout << '\n';

    // Double y(3.14);
    // y.print();
    // std::cout << '\n';

    Constant * p0 =  new Int(42);
    p0->print(); std::cout << '\n';

    Constant * p1 =  new Double(3.14);
    p1->print(); std::cout << '\n';

    return 0;
}
