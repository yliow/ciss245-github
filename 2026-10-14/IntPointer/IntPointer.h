#ifndef INTPOINTER_H
#define INTPOINTER_H

class IntPointer
{
  public:
    IntPointer(int);
    IntPointer();
    ~IntPointer(); // dtor
    int dereference() const;
    int operator*() const;
    // dereference() //
    void deallocate();
    void allocate();
  private:
    int * p_;
};

#endif
