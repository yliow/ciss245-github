#include <iostream>

class P
{
public:
    P()
        : x_(1)
    {
        std::cout << "P::P() called\n";
    }
    P(int x)
        : x_(x)
    {
        std::cout << "P::P(int) called\n";
    }
    int get_x() const
    {
        return x_;
    }
    void set_x(int x)
    {
        x_ = x;
    }
private:
    int x_;
};

class C: public P // <<<< INHERITANCE
{
public:
    C():
        y_(2), P(2)
    {}
    int get_y() const
    {
        return y_;
    }
    void set_y(int y)
    {
        y_ = y;
    }
private:
    int y_;
};

int main()
{
    C c;
    std::cout << "c.x_:" << c.get_x()
              << ", "
              << "c.y_:" << c.get_y()
              << '\n';

    return 0;
}
