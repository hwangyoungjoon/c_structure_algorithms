#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include <stdio.h>
#include <stdlib.h>


typedef int element_type;

typedef struct tag_node{

	element_type data;


}node;


typedef struct tag_array_stack {

	int capacity;
	int top;
	node* nodes;
	   
}array_stack;

void as_create_stack(array_stack** stack, int capacity);
void as_destory_stack(array_stack* stack);
void as_push(array_stack* stack, element_type data);
element_type as_pop(array_stack* stack);
element_type as_top(array_stack* stack);
int as_get_size(array_stack* stack);
int as_is_empty(array_stack* stack);

#endif