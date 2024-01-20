#include <stdio.h>
#include "./simple_list.h"

int main(void)
{
    tSimpleList list;
    simple_list_init(&list);

    simple_list_insert(&list, 0, 1);
    simple_list_insert(&list, 1, 2);
    simple_list_insert(&list, 2, 3);
    simple_list_insert(&list, 3, 4);
    simple_list_insert(&list, 7, 5);

    simple_list_delete(&list, 1);
    simple_list_delete(&list, 1);

    int pos = 0;
    int value;
    while (!simple_list_is_end(list, pos)) {
        simple_list_get(list, pos, &value);
        printf("Value at %d: %d\n", pos, value);
        pos++;
    }

    printf("List len: %d\n", simple_list_length(list));
    return 0;
}