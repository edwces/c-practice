#include <stdio.h>
#include <stdlib.h>

#include "linkedl.h"

int main() {
    /* Create pointers that referenc nothing */
    Node * head = NULL;
    Node * data1 = NULL;
    Node * data2 = NULL;

    /* allocate to the memory for each pointer because otherwise they don't have space to fit data */
    data1 = malloc(sizeof(Node));
    data2 = malloc(sizeof(Node));

    /* asign values */
    data1->value = 12;
    data2->value = 234;

    /* asign links */
    data1->next = data2;
    data2->next = NULL;
    
    /* asign data1 pointer to head */
    head = data1;
    printLinkedL(head);
}