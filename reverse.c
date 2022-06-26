#include <stdio.h>
#include <stdlib.h>
#include "linked-list.h"

void Reverse(struct node **headRef) {
    struct node *prev = NULL;
    struct node *next = NULL;
    struct node *current = *headRef;
    while(current != NULL) {
        // cache the next pointer
        next = current->next;

        // reverse current ponits to prev
        current->next = prev;

        // update
        prev = current;
        current = next;
    } 
    *headRef = prev;
}

int main() {
    struct node *head = NULL;
    BuildOneTwoThree(&head);
    ListPrint(head);
    Reverse(&head);
    ListPrint(head);
}

