#include <stdio.h>
#include "linked-list.h"
/*
 * Given a list and an int, return the number of times that int occurs in the list
 * */
int Count(struct node *head, int searchFor) {
    int counter = 0;
    struct node *current = NULL;
    current = head;
    while(current != NULL) {
        if (current->data == searchFor) {
           counter++; 
        }
        current = current->next;
    }
    return counter;
}

int main() {
    int i;
    struct node *list = NULL;
    BuildOneTwoThree(&list);
    i = Count(list, 1);
    printf("i = %d\n", i);
}
