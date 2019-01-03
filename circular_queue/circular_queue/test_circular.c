#include "circular_queue.h"

int main(void) {

	int i = 100;
	circular_queue* queue;

	cq_create_queue(&queue, 10);
	cq_enqueue(queue, 1);
	cq_enqueue(queue, 4);
	cq_enqueue(queue, 5);
	cq_enqueue(queue, 2);
	cq_enqueue(queue, 4);

	printf("dequeue: %d, fornt: %d, rear:%d\n", cq_dequeue(queue), queue->front, queue->rear);
	printf("dequeue: %d, fornt: %d, rear:%d\n", cq_dequeue(queue), queue->front, queue->rear);
	printf("dequeue: %d, fornt: %d, rear:%d\n", cq_dequeue(queue), queue->front, queue->rear);
	printf("dequeue: %d, fornt: %d, rear:%d\n", cq_dequeue(queue), queue->front, queue->rear);

	while (cq_is_full(queue) == 0)
	{
		cq_enqueue(queue, i++);
	}

	printf("capacity:%d, size:%d\n\n", queue->capacity, cq_get_size(queue));

	while (cq_is_empty(queue) == 0)
	{
		printf("dequeue:%d, front:%d, rear:%d\n", cq_dequeue(queue), queue->front, queue->rear);

	}
	cq_destory_queue(queue);
	return 0;

}