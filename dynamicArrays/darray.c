#include <stdio.h>
#include <stdlib.h>

#include "darray.h"

void initDarray(darray *ar, size_t initialsize) {
    ar->array = malloc(initialsize * sizeof(int));
    ar->used = 0;
    ar->size = initialsize;
}

void addElement(darray *ar, int num) {
    if (ar->size == ar->used) {
        ar->size *= 2;
        ar->array = realloc(ar->array, ar->size * sizeof(int));
    }
    ar->array[ar->used++] = num;
}
void freeArray(darray *ar) {
    free(ar->array);
    ar->array = NULL;
    ar->size = ar->used = 0;
}

int getElement(darray *ar, int index) {
    int element = ar->array[index];
    return element;
}