#include <stdio.h>
#include <assert.h>
#include "linked-list.h"

/*
 * given a list and an index, return the data in the nth node of the list.
 * The nodes are numbered from 0.
 * Assert fails if the index is invalid(outside 0...length-1)
 * /
 */
 int getnth(struct node *head, int index) {
    assert((index >= 0) &&(index <= Length(head) -1));
    struct node *current = head;
    int counter = 0;
    while(current != NULL) {
        if (counter == index) {
            return current->data;
        }
        counter++;
        current = current->next;
    }
    return -1;
}

int main() {
    struct node *list = NULL;
    BuildOneTwoThree(&list);
    printf("element at 0 is %d\n", getnth(list, 0));
    printf("element at 2 is %d\n", getnth(list, 2));
    printf("element at 3 is %d\n", getnth(list, 3));
}
