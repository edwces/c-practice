#ifndef STACK_H
#define STACK_H

typedef struct Node {
    int value;
    struct Node * next;
} Node;

void push(Node ** head, int val);
int pop(Node ** head);
void printStack(Node * head);

#endif