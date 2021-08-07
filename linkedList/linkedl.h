#ifndef LINKEDL_H
#define LINKEDL_H

typedef struct Node {
    int value;
    struct Node * next;
} Node;

void insertAtEnd(Node * head, int value);
void printLinkedL(Node * p);

#endif