// myarray.h
#ifndef MYARRAY_H
#define MYARRAY_H

void myarray_init(int x[], int & x_size, int x_capacity);
void myarray_println(int x[], int x_size, int x_capacity);
void myarray_pushback(int x[], int & x_size, int x_capacity,
                      int v);

#endif
