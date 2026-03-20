// IntPointer.h

#ifndef INTPOINTER_H
#define INTPOINTER_H

class IntPointer
{
  public:
    IntPointer();
    IntPointer(int);
    IntPointer(const IntPointer &);
    ~IntPointer();
    int dereference() const;
    int & dereference();
    int operator*() const;
    int & operator*();
    IntPointer & operator=(const IntPointer &);
  private:
    int * p_;
};

#endif
