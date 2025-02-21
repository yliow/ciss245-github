#ifndef DATE_H
#define DATE_H

class Date
{
  public:
    Date(int, int, int);
    void init(int, int, int);
    void print();
    void add_y(int);
    void add_m(int);
    void add_d(int);
    void add_m_d(int, int);

  private:
    int yyyy_, mm_, dd_;
};

#endif
