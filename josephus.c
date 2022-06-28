#include <stdio.h>
#include <stdlib.h>
#include "linked-list.h"

int josephus(struct node *head, int n, int k) {
    int len = n;
    int step = 1;
    struct node *current = head;
    struct node *prev = NULL;
    while(len >1) {
        prev = current;
        current = current->next;
        step++; // count the step
        if (step == k) {
            // delete the node
            struct node *tmp = current->next;
            prev->next = current->next;
            printf("delete node: %d\n", current->data);
            free(current);
            current = tmp;
            
            //reset the counter
            step = 1;

            // decrease the length
            len--;
        }
    }
    return current->data;
}


int main() {
    struct node *head = NULL;
    Push(&head, 1);
    struct node *tail = head;
    int n = 9;
    for(int i = 2; i <= n; i++) {
        Push(&tail->next, i);
        tail = tail->next;
        tail->next = head;
    }

    // ListPrint(head);
    
    printf("survivor of j(9,3): %d\n", josephus(head, 9, 3));


    // printf("survivor of j(8,2): %d\n", josephus(head, 8, 2));
    // printf("survivor of j(9,2): %d\n", josephus(head, 9, 2));
    // printf("survivor of j(15,2): %d\n", josephus(head, 15, 2));

    return 0;
}

