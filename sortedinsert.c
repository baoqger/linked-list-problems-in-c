#include <stdio.h>
#include <stdlib.h>
#include "linked-list.h"
/*
 * given a list that is sorted in increasing order, and a single node
 * insert the node into the correct sorted position in the list
 *
 * */
void SortedInsert(struct node **headRef, struct node *newNode) {
    if (newNode->data <= (*headRef)->data ) {
        Push(headRef, newNode->data);
        return;
    }
    
    struct node *current = *headRef;
    struct node *prev  = current;
    while(current != NULL && current->data <= newNode->data) {
        prev = current;
        current = current->next;
    }
    Push(&(prev->next), newNode->data);
    
}

int main() {
    struct node *head = NULL;
    Push(&head, 8);
    Push(&head, 5);
    Push(&head, 1);
    ListPrint(head); // {1,5,8}

    struct node *newNode = malloc(sizeof(struct node*));
    newNode->data = 0;
    newNode->next = NULL;
    SortedInsert(&head, newNode);
    ListPrint(head); // {0, 1, 5, 8}

    newNode->data = 3;
    SortedInsert(&head, newNode);
    ListPrint(head); // {0, 1, 3, 5, 8}

    newNode->data = 9;
    
    SortedInsert(&head, newNode);
    ListPrint(head); // {0, 1, 3, 5, 8, 9}

    return 0;

}
