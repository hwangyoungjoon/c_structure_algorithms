#include "circular_queue.h"

void cq_create_queue(circular_queue** queue, int capacity)
{
	(*queue) = (circular_queue*)malloc(sizeof(circular_queue));
	(*queue)->nodes = (node*)malloc(sizeof(node)*(capacity + 1));

	(*queue)->capacity = capacity;
	(*queue)->front = 0;
	(*queue)->rear = 0;



}


void cq_destory_queue(circular_queue* queue)
{
	free(queue->nodes);
	free(queue);

}

void cq_enqueue(circular_queue* queue, element_type data)
{
	int position = 0;

	if (queue->rear == queue->capacity + 1)
	{
		queue->rear = 0;
		position = 0;


	}
	else
	{
		position = queue->rear++;


	}
	queue->nodes[position].data = data;

}


int cq_get_size(circular_queue* queue)
{
	if (queue->front <= queue->rear)
		return queue->rear - queue->front;
	else
		return queue->rear+(queue->capacity - queue->front) + 1;

}
int cq_is_empty(circular_queue* queue)
{
	return(queue->front == queue->rear);

}

int cq_is_full(circular_queue* queue)
{
	if (queue->front < queue->rear) // 앞에 있는 경우
		return(queue->rear - queue->front) == queue->capacity;
	else// 뒤에 있는 경우
		return (queue->rear + 1) == queue->front;

}


element_type cq_dequeue(circular_queue* queue)
{
	int position = queue->front;
	if (queue->front == queue->capacity)
		queue->front = 0;
	else
		queue->front++;

	return queue->nodes[position].data;

}