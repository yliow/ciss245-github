#include <iostream>

template < typename T >
class vec2
{
public:
    vec2(T x, T y)
        : x_(x), y_(y)
    {}
    T operator[](int i) const
    {
        if (i == 0) return x_;
        else if (i == 1) return y_;
        else return -99999;
    }
private:
    T x_, y_;
};

template < typename T >
std::ostream & operator<<(std::ostream & cout, const vec2< T > & v)
{
    cout << '<' << v[0] << ", " << v[1] << '>';
    return cout;
}

int main()
{
    vec2< double > v(1.1, 2.2);
    std::cout << v << '\n';

    vec2< float > u(1.4f, 1.5f);
    std::cout << u << '\n';

    vec2< int > w(1, 2);
    std::cout << w << '\n';

    return 0;
}
