#include <stdio.h>
#include "./queue.h"

void queue_init(tQueue *queue) {
    queue->n = 0;
}

void queue_enqueue(tQueue *queue, int value) {
    if (queue->n == QUEUE_MAX_SIZE) {
        printf("Queue is full!\n");
        return;
    }

    queue->array[queue->n] = value;
    queue->n++;
}

void queue_dequeue(tQueue *queue) {
    if (queue->n == 0) {
        printf("Queue is empty!\n");
        return;
    }

    for(int i = 0; i < queue->n; i++) {
        queue->array[i] = queue->array[i+1];
    }

    queue->n--;
}

void queue_head(tQueue queue, int *value) {
    *value = queue.array[0];
}

boolean queue_is_empty(tQueue queue) {
    return queue.n == 0;
}

boolean queue_is_full(tQueue queue) {
    return queue.n == QUEUE_MAX_SIZE;
}

int queue_length(tQueue queue) {
    return queue.n;
}
