#ifndef C_H
#define C_H

#include <iostream>

class C
{
  public:
    C();

  friend std::ostream & operator<<(std::ostream &, const C &);

  private:
    int x_;
};

std::ostream & operator<<(std::ostream &, const C &);

#endif
