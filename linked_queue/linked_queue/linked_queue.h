#ifndef LINKED_QUEUE_H
#define LINKED_QUEUE_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct tag_node
{
	char * data;
	struct tag_node* next_node;


}node;

typedef struct tag_linked_queue
{

	node * front;
	node * rear;
	int count;


}linked_queue;

void lq_create_queue(linked_queue** queue);
void lq_destory_queue(linked_queue* queue);

node* lq_create_node(char* data);
void lq_destory_node(node* _node);

void lq_enqueue(linked_queue* queue, node* new_node);
node * lq_dequeue(linked_queue* queue);

int lq_is_empty(linked_queue* queue);
#endif


