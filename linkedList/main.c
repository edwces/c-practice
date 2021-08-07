#include <stdio.h>
#include <stdlib.h>

#include "linkedl.h"

int main() {
    /* Create pointers that referenc nothing */
    Node * head = NULL;
    Node * current = NULL;

    /* allocate to the memory for each pointer because otherwise they don't have space to fit data */
    current = malloc(sizeof(Node));
    /* asign values */
    current->value = 7;
    /* asign links */
    current->next = NULL;
    /* asign data1 pointer to head */
    head = current;
    insertAtEnd(head, 7);
    insertAtEnd(head, 12);
    insertAtEnd(head, 94);
    insertAtEnd(head, 33);
    printLinkedL(head);
}