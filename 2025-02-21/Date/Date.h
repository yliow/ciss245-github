#ifndef DATE_H
#define DATE_H

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
  private:
    int yyyy_, mm_, dd_;
};

#endif
