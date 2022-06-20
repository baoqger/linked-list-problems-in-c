#include <stdio.h>
#include "linked-list.h"

int main() {
    struct node *head = NULL;
    int len;

    BuildOneTwoThree(&head);
    ListPrint(head);
    Push(&head, 13);
    ListPrint(head);
    Push(&(head->next), 42);
    ListPrint(head);
    len = Length(head);
    printf("length = %d\n", len);
    return 0;
}
