#include <iostream>
#include "Date.h"

int main()
{
    Date random;
    Date today(2025, 2, 20); // calls Date::Date(int,int,int)    
    Date yesterday = Date(2025, 2, 19);
    Date * nextyear = new Date(2026, 2, 20);

    //Date clone_today(today.get_year(), today.get_month(),
    //                 today.get_day());
    Date clone_today(today);
    std::cout << "today:" << today << '\n';
    std::cout << "clone_today:" << clone_today << '\n';
    
    // Date lastmonth(); <<<< DONT DO THIS!!!
    //today.init(2025, 2, 20);
    //today.print();
    // prefer
    std::cout << today << '\n';
    // basically same as
    // operator<<(std::cout, today) << '\n';
    
    //yesterday.init(2025, 2, 19);
    //yesterday.print();
    std::cout << yesterday << '\n';
    
    std::cout << "inc today's yr by 1 ...\n";
    today.add_y(1);
    //today.print();
    std::cout << today << '\n';
    //std::cout << today.yyyy_ << '\n';

    std::cout << "inc yesterday's m and d by 2 and 3 ...\n";
    yesterday.add_m(2);
    yesterday.add_d(3);
    //yesterday.print();
    std::cout << yesterday << '\n';
    
    today.add_m_d(5, 6);
    //today.print();
    std::cout << today << '\n';
    
    if (today.equal(yesterday))
    {
        std::cout << "equal\n";
    }
    else
    {
        std::cout << "not equal\n";
    }
    if (today == yesterday) // today.operator==(yesterday)
    {
        std::cout << "equal\n";
    }
    else
    {
        std::cout << "not equal\n";
    }

    std::cout << &yesterday << '\n';
    Date nextmonth(2026, 2, 24);
    nextmonth = yesterday = today;
    // same as
    // yesterday.operator=(today);
    std::cout << yesterday << '\n';
    std::cout << nextmonth << '\n';

    // int i, j, k;
    // i = j = k = 42;
    // std::cout << i << ' ' << j << ' ' << k << '\n';

    (today.set_year(3000)).set_month(12);
    //today.set_month(12);
    std::cout << today << '\n';

    //std::cout << today.get_year() << '\n';
    //today.set_year(4000);

    std::cout << today.year() << '\n';
    today.year() = 5000;


    Date * p = new Date(5000, 1, 1);
    std::cout << p << ' ' << (*p) << '\n';
    p->set_year(6000); // don't: (*p).set_year(6000)
    std::cout << p << ' ' << (*p) << '\n';

    //
    Date date[10]; // every date object goes through the
                   // defaut constructor
    for (int i = 0; i < 10; ++i)
    {
        std::cout << i << ": " << date[i] << '\n';
    }
    for (int i = 0; i < 10; ++i)
    {
        date[i].set_year(2025);
        date[i].set_month(3);
        date[i].set_day(17);
    }
    for (int i = 0; i < 10; ++i)
    {
        std::cout << i << ": " << date[i] << '\n';
    }

    Date * date0[10];
    for (int i = 0; i < 10; ++i)
    {
        date0[i] = new Date(2025, 3, 17);
    }
    for (int i = 0; i < 10; ++i)
    {
        std::cout << i << ": " << (*date0[i]) << '\n';
    }

    // control size and control constructor
    Date ** p;
    std::cin >> s;
    p = new Date*[s];
    for (int i = 0; i < s; ++i)
    {
        p[i] = new Date(2025, 3, 17);
    }
    // use the dates in the heap

    for (int i = 0; i < s; ++i)
    {
        delete p[i];
    }
    delete[] p;
    

    // 2d array of dates where control
    // number of rows
    // number of cols
    // the constructor call
    int nrows = 5;
    int ncols = 8;
    Date *** q;
    q = new Date**[nrows];
    for (int r = 0; r < nrows; ++r)
    {
        q[r] = new Date*[ncols];
    }
    for (int c = 0; c < ncols; ++c)
    {
        q[r][c] = new Date(2025, 3, 17);
    }
   
    return 0;
}
