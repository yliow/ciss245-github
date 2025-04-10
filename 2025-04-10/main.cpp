#include <iostream>

class IndexOutOfBound
{};

class vec2i
{
public:
    vec2i(int x, int y)
        : x_(x), y_(y)
    {}
    int operator[](int i)
    {
        if (i < 0 || i > 1) throw IndexOutOfBound();
        if (i == 0) return x_;
        else return y_;
    }
private:
    int x_, y_;
};
std::ostream & operator<<(std::ostream & cout, const vec2i & v v)
{
    cout << '<' << v[0] << ", " << v[1] << '>';
    return cout;
}
int main()
{
    vec2i v(1, 2);

    return 0;
}
