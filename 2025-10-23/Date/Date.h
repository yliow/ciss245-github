#ifndef DATE_H
#define DATE_H

class Date
{
  public:

    void init(int, int, int);
    void print() /* const */;
    void add_y(int);
    void add_m(int);
    void add_m_d(int, int);
    void add_date(const Date & date);
    void add_d(int);

  private:
    int yyyy_, mm_, dd_;
};

#endif
