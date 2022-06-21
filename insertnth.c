#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "linked-list.h"

/*
 * A more general version of Push()
 * Given a list, an index 'n' in the range 0..length,
 * and a data element, add a new node to the list so that it has the given index
 * */

void InsertNth(struct node **headRef, int index, int data) {
    assert(index >= 0 && index <= Length(*headRef));
    // handle empty list case
    if(*headRef == NULL) {
        Push(headRef, data);
        return;
    }

    struct node *newNode = malloc(sizeof(struct node*));
    newNode->data = data;

    int counter = 0;
    struct node *current = *headRef;
    struct node *prev = *headRef;
    
    while(prev != NULL || current != NULL) {
        if(counter == index) {
            newNode->next = current;
            if (counter == 0) {
                *headRef = newNode;
            } else {
                prev->next = newNode;
            }
            break;
        }
        counter++;
        prev = current;
        current = current->next;
    }
    return;
}

// the following implementation is calling Push() function
void InsertNthByPush(struct node **headRef, int index, int data) {
    // position 0 is a special case
    if (index == 0) {
        Push(headRef, data);
    } else {
        struct node *current = *headRef;
        int i;
        for(i = 0; i<index -1; i++) {
            assert(current != NULL);
            current = current->next;
        }
        assert(current != NULL);
        Push(&(current->next), data);
    }
}

int main() {
    struct node *head = NULL;
    Push(&head, 1);
    ListPrint(head); // {1}
    
    InsertNthByPush(&head, 0, 2);
    // InsertNth(&head, 0, 2);

    ListPrint(head); // {2, 1}

    InsertNthByPush(&head, 1, 3);
    // InsertNth(&head, 1, 3);
    ListPrint(head); // {2, 3,1}
    
    InsertNthByPush(&head, 3, 5);
    // InsertNth(&head, 3, 5); 

    ListPrint(head); // {2, 3, 1, 5} 
    return 0;
}
