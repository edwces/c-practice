#include <stdlib.h>

#ifndef DARRAY_H
#define DARRAY_H

typedef struct {
    int *array;
    size_t size;
    size_t used;
} darray;

void initDarray(darray *ar, size_t Initialsize);
void addElement(darray *ar, int num);
void freeArray(darray *ar);
int getElement(darray *ar, int index);

#endif