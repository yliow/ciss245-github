#ifndef INTPOINTER_H
#define INTPOINTER_H

#include <iostream>

class IntPointer
{
  public:
    IntPointer(int);
    IntPointer(const IntPointer &);
    ~IntPointer();
    int * get_p() const;
    //int dereference() const;
    int operator*() const;
    int & operator*();
    const IntPointer & operator=(const IntPointer &);
  private:
    int * p_;
};

std::ostream & operator<<(std::ostream &, const IntPointer &);

#endif
