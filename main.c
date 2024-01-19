#include <stdio.h>
#include "./stack.h"

int main(void)
{
    tStack stack;
    stack_init(&stack);

    stack_push(&stack, 1);
    stack_push(&stack, 3);
    stack_push(&stack, 5);
    stack_push(&stack, 7);

    stack_pop(&stack);
    
    printf("Stack size: %d\n", stack_height(stack));

    int top;
    printf("Stack elements:\n");
    while (!stack_is_empty(stack)) {
        stack_top(stack, &top);
        printf("%d ", top);
        stack_pop(&stack);
    }
    printf("\n");

    return 0;
}