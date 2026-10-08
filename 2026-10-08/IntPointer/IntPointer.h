#ifndef INTPOINTER_H
#define INTPOINTER_H

class IntPointer
{
  public:
    IntPointer(int);
    int dereference() const;
    // dereference() //
    void deallocate();
    void allocate();
  private:
    int * p_;
};

#endif
