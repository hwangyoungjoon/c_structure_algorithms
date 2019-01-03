#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct tag_node
{
	int data;
	struct tag_node* prev_node;
	struct tag_node* next_node;


}node;
typedef int element_type;

node* dll_create_node(element_type new_data);
void dll_destroy_node(node* node);
void dll_append_node(node** head, node* new_node);
void dll_insert_after(node* current, node* new_node);
void dll_remove_node(node** head, node* remove);
node* dll_get_node_at(node* head, int location);
int dll_get_node_count(node* head);

#endif

