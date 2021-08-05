#ifndef LINKEDL_H
#define LINKEDL_H

typedef struct Node {
    int value;
    struct Node * next;
} Node;

void insertNode(int value);
void printLinkedL(Node * p);

#endif