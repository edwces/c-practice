#include <stdio.h>
#include <stdlib.h>

#include "linkedl.h"


void insertAtEnd(Node * head, int val) {
    Node * current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    Node * new = NULL;
    new = malloc(sizeof(Node));
    current->next = new;
    new->value = val;
    new->next = NULL;
}

void printLinkedL(Node * p) {
    while (p != NULL) {
        printf("%d\n", p->value);
        p = p->next;
    }
}