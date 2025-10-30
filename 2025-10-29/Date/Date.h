#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date
{
  public:
    Date(int, int, int);
    void init(int, int, int);
    void print() const;
    void add_y(int);
    void add_m(int);
    void add_m_d(int, int);
    void add_date(const Date & date);
    void add_d(int);
    int get_year() const;
    void set_year(int);
    int get_month() const;
    int get_day() const;
    // HOMEWORK: get_month(), set_month(int), ....
  private:
    int yyyy_, mm_, dd_;
};

std::ostream & operator<<(std::ostream &, const Date &);

#endif
