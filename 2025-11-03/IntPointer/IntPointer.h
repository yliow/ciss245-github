#ifndef INTPOINTER_H
#define INTPOINTER_H

class IntPointer // example of smart pointers
{
  public:
    IntPointer(int);
    IntPointer();
    IntPointer(const IntPointer &);
    ~IntPointer();
    //int dereference() const;
    int operator*() const;
    int & operator*();
    void deallocate();
    IntPointer & operator=(const IntPointer &);
  private:
    int * p_;
};
#endif

