#ifndef C_H
#define C_H

#include <iostream>

class C
{
  public:
    C(int, int);
    int x() const;
    int y() const;
  private:
    int x_;
    int y_;
};

std::ostream & operator<<(std::ostream &, const C &);


#endif
