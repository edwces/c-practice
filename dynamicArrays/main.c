#include <stdio.h>
#include <stdlib.h>
#include "darray.h"

int main(void) {
    darray myar;
    initDarray(&myar, 4);
    for(int i = 0; i < 10; i++) {
        addElement(&myar, i*2);
        printf("size of array is %zu\n", myar.size);
    }
    int indexedElement = getElement(&myar, 6);
    printf("Indexed element is %d\n", indexedElement);

    return 0;
}