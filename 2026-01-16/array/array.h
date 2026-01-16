#ifndef ARRAY_H
#define ARRAY_H

void array_print(int [], int, int);
void array_println(int [], int, int);
void push_back(int [], int &, int, int);
// DIY push_front
void array_assign(int y[], int & y_size, int y_capacity,
                  int x[], int x_size, int x_capacity);
void bubblesort(int x[], int x_size, int x_capacity);
int binarysrch(int x[], int x_size, int x_capacity, int target);

#endif
