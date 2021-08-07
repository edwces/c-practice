#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

void push(Node ** head, int val) {
    Node * new = NULL;

    new = malloc(sizeof(Node)); // allocate new memory
    new->value = val; 
    new->next = *head; // assign link to the current head memory adress
    *head = new; // change head to current node 
}

int pop(Node ** head) {
    Node * tmp = NULL;
    
    tmp = *head; // tmp is old head pointer, we assign value 
    *head = tmp->next;  // change head pointer to next new head, assign new adress
    tmp->next = NULL; // stop connection
    free(tmp); // dealocate old head
}

void printStack(Node * head) {
    Node * current = head;
    while (current != NULL) {
        printf("%d\n", current->value);
        current = current->next;
    }
}