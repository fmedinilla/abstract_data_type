#include <stdio.h>
#include "./simple_list.h"

void simple_list_init(tSimpleList *list) {
    list->n = 0;
}

void simple_list_insert(tSimpleList *list, int pos, int value) {
    if (list->n == SIMPLE_LIST_MAX_SIZE) {
        printf("List is full!\n");
        return;
    }

    for (int i = list->n; i > pos; i--) {
        list->array[i] = list->array[i-1];
    }

    if (simple_list_is_end(*list, pos)) {
        list->array[list->n] = value;
    } else {
        list->array[pos] = value;
    }

    list->n++;
}

void simple_list_delete(tSimpleList *list, int pos) {
    if (list->n == 0) {
        printf("List is empty!\n");
        return;
    }

    for (int i = pos; i < list->n; i++) {
        list->array[i] = list->array[i+1];
    }

    list->n--;
}

void simple_list_get(tSimpleList list, int pos, int *value) {
    *value = list.array[pos];
}

boolean simple_list_is_end(tSimpleList list, int pos) {
    return pos >= list.n;
}

boolean simple_list_is_empty(tSimpleList list) {
    return list.n == 0;
}

boolean simple_list_is_full(tSimpleList list) {
    return list.n == SIMPLE_LIST_MAX_SIZE;
}

int simple_list_length(tSimpleList list) {
    return list.n;
}
