#include <iostream>

class P
{
public:
    P(int x)
        :x_(x)
    {}
    int get_x() const
    {
        return x_;
    }
private:
    int x_;
};

class C0: public P
{
public:
    C0(int x, int y)
        : P(x), y_(y)
    {}
    int get_y() const
    {
        return y_;
    }
private:
    int y_;
};

std::ostream & operator<<(std::ostream & cout, const C0 & c0)
{
    cout << "<C0 x:" << c0.get_x() << " y:" << c0.get_y() << '>';
    return cout;
}

class C1: public P
{
public:
    C1(int x, double z)
        : P(x), z_(z)
    {}
    double get_z() const
    {
        return z_;
    }
private:
    double z_;
};

std::ostream & operator<<(std::ostream & cout, const C1 & c1)
{
    cout << "<C1 x:" << c1.get_x() << " z:" << c1.get_z() << '>';
    return cout;
}

int main()
{
    C0 c0(1, 2);
    C1 c1(3, 4.4);
    std::cout << "c0: " << c0 << '\n';
    std::cout << "c1: " << c1 << '\n';
    
    return 0;
}
