#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "linked-list.h"
/*
 * take a non-empty list and removes the front node, and returns the data which was in the node
 * */
int Pop(struct node **headRef) {
    assert(Length(*headRef) > 0);
    struct node *current = *headRef;
    int result = current->data;
    *headRef =  (*headRef)->next;
    free(current);
    return result;
}

int main() {
    struct node *head = NULL;
    BuildOneTwoThree(&head);
    int a = Pop(&head);
    printf("pop value: %d\n", a);
    int b = Pop(&head);
    printf("pop value: %d\n", b);
    int c = Pop(&head);
    printf("pop value: %d\n", c);
    int len = Length(head);
    printf("length = %d\n", len);
}
