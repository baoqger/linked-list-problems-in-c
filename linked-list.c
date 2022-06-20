#include <stdio.h>
#include <stdlib.h>
#include "linked-list.h"

int Length(struct node *head) {
    int count = 0;
    struct node *current = head;
    while(current != NULL){
        count++;
        current = current->next;
    }
    return count;
}

void Push(struct node **headRef, int newData) {
   struct node *newNode = malloc(sizeof(struct node));
   newNode->data = newData;
   newNode->next = *headRef;
   *headRef = newNode;
}

void BuildOneTwoThree(struct node **headRef) {
    Push(headRef, 3);
    Push(headRef, 2);
    Push(headRef, 1);
}

void ListPrint(struct node *head) {
    struct node *current = NULL;
    current = head;
    while(current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
