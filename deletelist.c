#include <stdio.h>
#include <stdlib.h>
#include "linked-list.h"

void DeleteList(struct node **head) {
    struct node *current = *head;
    while(current !=NULL) {
        struct node *tmp = current->next;
        free(current);
        current = tmp;
    }
    *head = current; // current is NULL finally 
}

int main() {
    struct node *list = NULL;
    BuildOneTwoThree(&list);
    DeleteList(&list);
}
