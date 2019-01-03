#ifndef CIRCULAR_QUEUE_H
#define	CIRCULAR_QUEUE_H

#include <stdio.h>
#include <stdlib.h>

typedef int element_type;


typedef struct tag_node
{

	element_type data;

}node;


typedef struct tag_circular_queue{

	int capacity;
	int front;
	int rear;
	node * nodes;
	
}circular_queue;

void cq_create_queue(circular_queue** queue, int capacity);
void cq_destory_queue(circular_queue* queue);
void cq_enqueue(circular_queue* queue, element_type data);
int cq_is_empty(circular_queue* queue);
int cq_is_full(circular_queue* queue);
element_type cq_dequeue(circular_queue* queue);
int cq_get_size(circular_queue* queue);


#endif

