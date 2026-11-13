#ifndef D_H
#define D_H

class D
{
  public:
    D();
    D(int);
    int x() const;
    int & x();
  private:
    int x_;
    static int counter;
};

std::ostream & operator<<(std::ostream &, const D &);

#endif
