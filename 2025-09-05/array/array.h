#ifndef ARRAY_H 
#define ARRAY_H

void print(int x[], int start, int end);
void println(int x[], int start, int end);
int linearsrch(int x[], int start, int end, int target);
int count(int x[], int start, int end, int target);

void insert(int x[], int index, int v);
// example: if x = {1, 3, 4, 2}
// after calling insert(x, 1, 9999)
// array x becomes {1, 9999, 3, 4, 2}

void insert(int x[], int index, int y[], int y_len);
// example: if x = {1, 3, 4, 2}, y = {9999, 8888, 7777, 6666}
// after calling insert(x, 1, y, 3)
// array x becomes {1, 9999, 8888, 7777, 3, 4, 2}
void bubblesort(int x[], int start, int end);
int binarysrch(int x[], int start, int end, int target);
void push_back(int y[], int & y_len, int y_capacity, int v);

#endif
