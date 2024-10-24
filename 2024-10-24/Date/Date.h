// Date.h

#ifndef DATE_H
#define DATE_H

class Date
{
  public:
    void init(int, int, int);
    void print();
    void add_y(int);
    void add_m(int);
    void add_d(int);
    void add_y_m_d(int, int, int);
  private:
    int yyyy_;
    int mm_;
    int dd_;
};

#endif
