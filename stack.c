#include <stdio.h>
#include "./stack.h"

void stack_init(tStack *stack) {
    stack->n = 0;
}

void stack_push(tStack *stack, int value) {
    if (stack->n == MAX_STACK_SIZE) {
        printf("Stack is full!\n");
        return;
    }

    stack->array[stack->n] = value;
    stack->n++;
}

void stack_pop(tStack *stack) {
    if (stack->n == 0) {
        printf("Stack is empty!\n");
        return;
    }

    stack->n--;
}

void stack_top(tStack stack, int *top) {
    *top = stack.array[stack.n-1];
}

boolean stack_is_empty(tStack stack) {
    return stack.n == 0;
}

boolean stack_is_full(tStack stack) {
    return stack.n == MAX_STACK_SIZE;
}

int stack_height(tStack stack) {
    return stack.n;
}