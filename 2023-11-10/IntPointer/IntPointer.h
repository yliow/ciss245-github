#ifndef INTPOINTER_H
#define INTPOINTER_H

#include <iostream>

class IntPointer
{
  public:
    IntPointer(int);
    ~IntPointer();
    int * get_p() const;
  private:
    int * p_;
};

std::ostream & operator<<(std::ostream &, const IntPointer &);

#endif
