#ifndef INT_H
#define INT_H

class C
{
  public:
    void f() {}
};

class Int
{
  public:
    Int();
    Int(int);
    Int & operator+=(const Int &);
    Int operator+(const Int &) const;
    int get_value() const;
  private:
    int x_;
};

std::ostream & operator<<(std::ostream &, const Int &);

#endif
