#ifndef INTPOINTER_H
#define INTPOINTER_H

class IntPointer
{
  public:
    IntPointer();
    ~IntPointer(); // destructor
    IntPointer(const IntPointer &);
    //int dereference() const;
    int operator*() const;
    int & operator*();
    IntPointer & operator=(const IntPointer &);
  private:
    int * p_;
};

#endif
