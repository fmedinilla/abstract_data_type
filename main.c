#include <stdio.h>
#include "./queue.h"

int main(void)
{
    tQueue queue;
    queue_init(&queue);

    queue_enqueue(&queue, 1);
    queue_enqueue(&queue, 2);
    queue_enqueue(&queue, 3);
    queue_enqueue(&queue, 4);

    printf("Queue len: %d\n", queue_length(queue));

    int value;
    while(!queue_is_empty(queue)) {
        queue_head(queue, &value);
        printf("Process %d\n", value);
        queue_dequeue(&queue);
    }

    printf("Queue len: %d\n", queue_length(queue));
    return 0;
}