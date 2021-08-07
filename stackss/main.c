#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

int main() {
    /* Create pointers that referenc nothing */
    Node * head = NULL; // same as current

    push(&head, 17);
    push(&head, 233);
    push(&head, 17);
    pop(&head);
    printStack(head);

    return 0;
}

