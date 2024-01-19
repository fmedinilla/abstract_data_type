#ifndef STACK_FILE
#define STACK_FILE

#define MAX_STACK_SIZE 10

typedef int boolean;

typedef struct {
    int array[MAX_STACK_SIZE];
    int n;
} tStack;

void stack_init(tStack *stack);
void stack_push(tStack *stack, int value);
void stack_pop(tStack *stack);
void stack_top(tStack stack, int *top);
boolean stack_is_empty(tStack stack);
boolean stack_is_full(tStack stack);
int stack_height(tStack stack);
#endif