#ifndef QUEUE_HEADER
#define QUEUE_HEADER

#define QUEUE_MAX_SIZE 10

typedef int boolean;

typedef struct {
    int array[QUEUE_MAX_SIZE];
    int n;
} tQueue;

void queue_init(tQueue *queue);
void queue_enqueue(tQueue *queue, int value);
void queue_dequeue(tQueue *queue);
void queue_head(tQueue queue, int *value);
boolean queue_is_empty(tQueue queue);
boolean queue_is_full(tQueue queue);
int queue_length(tQueue queue);

#endif