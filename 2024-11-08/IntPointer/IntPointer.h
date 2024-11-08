#ifndef INTPOINTER_H
#define INTPOINTER_H

class IntPointer
{
  public:
    IntPointer(int);
    int dereference() const;
  private:
    int * p_;
};

#endif
