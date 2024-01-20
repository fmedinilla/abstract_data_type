#ifndef SIMPLE_LIST_HEADER
#define SIMPLE_LIST_HEADER

#define SIMPLE_LIST_MAX_SIZE 10

typedef int boolean;

typedef struct {
    int array[SIMPLE_LIST_MAX_SIZE];
    int n;
} tSimpleList;

void simple_list_init(tSimpleList *list);
void simple_list_insert(tSimpleList *list, int pos, int value);
void simple_list_delete(tSimpleList *list, int pos);
void simple_list_get(tSimpleList list, int pos, int *value);
boolean simple_list_is_end(tSimpleList list, int pos);
boolean simple_list_is_empty(tSimpleList list);
boolean simple_list_is_full(tSimpleList list);
int simple_list_length(tSimpleList list);

#endif