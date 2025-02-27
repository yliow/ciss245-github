#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date
{
  public:
    Date();             // default constructor of Date
    Date(const Date &); // copy constructor of Date
    Date(int, int, int);
    //void init(int, int, int);
    void print() const;
    void add_y(int); // Date::add_y
    void add_m(int);
    void add_d(int);
    void add_m_d(int, int);
    bool equal(const Date &) const;
    bool operator==(const Date &) const;
    int get_year() const;
    Date & set_year(int);
    int get_month() const;
    Date & set_month(int);
    int get_day() const;
    const Date & operator=(const Date &);
private:
    int yyyy_, mm_, dd_;
};

std::ostream & operator<<(std::ostream &, const Date &);

#endif
