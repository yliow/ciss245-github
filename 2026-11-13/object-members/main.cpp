#include <iostream>

class vec2i
{
public:
    vec2i()
        : x_(0), y_(0)
    {}
    vec2i(int x, int y)
        : x_(x), y_(y)
    {}
    vec2i operator+(const vec2i & v) const
    {
        return vec2i(x_ + v.x_, y_ + v.y_);
    }
    int x_, y_;
};

class Man
{
public:
    Man(int id, int x=0, int y=0)
        : id_(id) /*, p_(x, y) */
    {}
    void walk(int x, int y)
    {
        p_ = p_ + vec2i(x, y);
    }
    int id_;
    vec2i p_; // object composition
};

std::ostream & operator<<(std::ostream & cout, const Man & man)
{
    cout << "<Man id:" << man.id_
         << ", x:" << man.p_.x_
         << ", y:" << man.p_.y_
         << ">";
    return cout;
}

int main()
{
    Man jdoe(0, 2, 3);
    std::cout << jdoe << '\n';
    jdoe.walk(10, 1);
    std::cout << jdoe << '\n';

    return 0;
}
