#include "linked_queue.h"

void lq_create_queue(linked_queue** queue)
{
	(*queue) = (linked_queue *)malloc(sizeof(linked_queue));
	(*queue)->front = NULL;
	(*queue)->rear = NULL;
	(*queue)->count = 0;

}



void lq_destory_queue(linked_queue* queue)
{
	while (!lq_is_empty(queue))
	{
		node* popped = lq_dequeue(queue);
		lq_destory_node(popped);

	}

	free(queue);

}


node* lq_create_node(char* new_data)
{

	node* new_node = (node*)malloc(sizeof(node));
	new_node->data = (char*)malloc(strlen(new_data) + 1);
	//printf("data: %s", new_data);
	new_node->next_node = NULL;

	return new_node;



}

void lq_destory_node(node* _node)
{

	free(_node->data);
	free(_node);

}
void lq_enqueue(linked_queue* queue, node* new_node)
{
	if (queue->rear == NULL)
	{
		queue->front = new_node;
		queue->rear = new_node;
		queue->count++;

	}
	else
	{
		queue->rear->next_node = new_node;
		queue->rear = new_node;
		queue->count++;
	}
}

node * lq_dequeue(linked_queue* queue)
{
	node* front = queue->front;
	if (queue->front->next_node == NULL)
	{
		queue->front = NULL;
		queue->rear = NULL;

	}
	else
	{
		queue->front = queue->front->next_node;

	}

	queue->count--;

	return front;
}


int lq_is_empty(linked_queue * queue)
{
	return(queue->front == NULL);

}