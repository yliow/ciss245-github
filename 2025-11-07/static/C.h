#ifndef C_H
#define C_H

class C
{
public:
    C();
    ~C();
    static int get_num_objects();
private:
    int a, b;
    static int num_objects; // <<<<<< NEW
};
#endif
