#ifndef LCSR_TREE_H
#define LCSR_TREE_H

#include <stdio.h>
#include <stdlib.h>



typedef char element_type;

typedef struct tag_lcsr_node
{

	struct tag_lcsr_node* left_child;
	struct tag_lcsr_node* right_child;

	element_type data;

}lcsr_node;

lcsr_node* lcsr_create_node(element_type new_data);

void lcsr_destroy_node(lcsr_node* node);
void lcsr_destroy_tree(lcsr_node* root);

void lcsr_add_child_node(lcsr_node* parent, lcsr_node*child);


void lcsr_print_tree(lcsr_node * node, int depth);
#endif