#ifndef _LIST_H
#define _LIST_H 

struct node {
    int data;
    struct node *next;
};

int Length(struct node *head);
void BuildOneTwoThree(struct node **headRef);
void Push(struct node **headRef, int newData);
void ListPrint(struct node *head);
#endif
