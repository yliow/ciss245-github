#ifndef C_H
#define C_H

class C
{
  public:
    C(int x)
        : x_(x)
    {
        ++num_objects_;
    }
    ~C()
    {
        --num_objects_;
    }
    int x_;
    static int get_num_objects()
    {
        // static member functions are not invoked by objects.
        // so NO this pointer!
        return num_objects_;
    }
  private:
    static int num_objects_;
};

#endif
