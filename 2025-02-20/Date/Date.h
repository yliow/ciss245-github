#ifndef DATE_H
#define DATE_H

struct Date
{
    int yyyy_, mm_, dd_;

    void init(int, int, int);
    void print();
    void add_y(int);
    void add_m(int);
    void add_d(int);
};

#endif
