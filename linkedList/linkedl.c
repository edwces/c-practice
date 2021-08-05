#include <stdio.h>
#include <stdlib.h>

#include "linkedl.h"

void insertNode(int value) {
}

void printLinkedL(Node * p) {
    while (p != NULL) {
        printf("%d\n", p->value);
        p = p->next;
    }
}