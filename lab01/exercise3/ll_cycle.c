#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* TODO: Implement ll_has_cycle */
    node* ptr1, * ptr2;
    ptr1 = ptr2 = head;
    do
    {
        if (ptr1 == NULL)return 0;
        ptr1 = ptr1->next;
        if (ptr1 == NULL)return 0;
        ptr1 = ptr1->next;
        if (ptr1 == NULL)return 0;
        ptr2 = ptr2->next;
    } while (ptr1 != ptr2);
    return 1;
}
