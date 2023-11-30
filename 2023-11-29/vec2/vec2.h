#ifndef VEC2
#define VEC2

class IndexException
{
  public:
    IndexException(int);
  private:
    i_;
};
IndexException::IndexException(int i)
: i_(i)
{}

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
        else throw IndexException(i);
    }

  private:
    T x_, y_;
};

#endif
