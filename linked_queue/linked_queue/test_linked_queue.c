#include "linked_queue.h"


void main(void) {

	node* popped;
	linked_queue * queue;

	lq_create_queue(&queue);
	lq_enqueue(queue, lq_create_node("abc"));
	lq_enqueue(queue, lq_create_node("def"));
	lq_enqueue(queue, lq_create_node("ghi"));
	lq_enqueue(queue, lq_create_node("jkl"));

	printf("queue size: %n", queue->count);

	while (lq_is_empty(queue) == 0)
	{

		popped = lq_dequeue(queue);
		printf("dequeue:%s \n", popped->data);

		lq_destory_node(popped);

	}
	lq_destory_queue(queue);


}