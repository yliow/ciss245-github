#ifndef vec2
#define vec2

template < typename T >
class vec2
{
  public:
    vec2(T x, T y)
        : x_(x), y_(y)
    {}
    T operator[](int i) const 
    {
        // should probably throw exception when i not 0, 1
        return (i == 0 ? x_ : y_);
    }
    T & operator[](int i) 
    {
        // should probably throw exception when i not 0, 1
        return (i == 0 ? x_ : y_);
    }
    vec2< T > & operator*=(T c)
    {
        x_ *= c;
        y_ *= c;
        return (*this);
    }
    vec2< T > operator*(T c)
    {
        return (vec2< T >(*this) += c);
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

#endif
