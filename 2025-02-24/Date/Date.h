#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date
{
  public:
    Date();
    Date(int, int, int);
    //void init(int, int, int);
    void print() const;
    void add_y(int); // Date::add_y
    void add_m(int);
    void add_d(int);
    void add_m_d(int, int);
    bool equal(const Date &) const;
    bool operator==(const Date &) const;
    int get_year();
    int get_month();
    int get_day();
private:
    int yyyy_, mm_, dd_;
};

std::ostream & operator<<(std::ostream &, const Date &);

#endif
