#ifndef INTPOINTER_H
#define INTPOINTER_H

class IntPointer
{
  public:
    IntPointer(int);
    //~IntPointer()
    int dereference() const;
    void deallocate();
  private:
    int * p_;
};

#endif
