#ifndef INTPOINTER_H
#define INTPOINTER_H

class IntPointer
{
  public:
    IntPointer();
    int dereference() const;
    int operator*() const;
  private:
    int * p_;
};

#endif
