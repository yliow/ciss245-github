#ifndef INTPOINTER_H
#define INTPOINTER_H

class IntPointer
{
  public:
    IntPointer(int);
    IntPointer(const IntPointer &);
    ~IntPointer();
    
    int dereference() const;
    int & dereference();
    int operator*() const;
    int & operator*();

    void deallocate();
    
    void operator=(const IntPointer &);
  private:
    int * p_;
};

#endif
