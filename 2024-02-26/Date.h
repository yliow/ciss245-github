// Date.h

#ifndef DATE_H
#define DATE_H

class Date
{
  public:
    void init(int, int, int);
    void add_y(int);
    void add_m(int);
    void add_d(int);
    void print();

  private:
    int mm_;
    int dd_;
    int yyyy_;
};


#endif
