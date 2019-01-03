#include "lcsr_tree.h"



lcsr_node* lcsr_create_node(element_type new_data)
{
	lcsr_node* new_node = (lcsr_node*)malloc(sizeof(lcsr_node));
	new_node->left_child = NULL;
	new_node->right_child = NULL;
	new_node->data = new_data;

	return new_node;

}

void lcsr_destroy_node(lcsr_node* node)
{

	free(node);

}

void lcsr_destroy_tree(lcsr_node* root)
{

	if (root->right_child != NULL)
		lcsr_destroy_tree(root->right_child);

	if (root->right_child != NULL)
		lcsr_destroy_tree(root->left_child);

	root->left_child = NULL;
	root->right_child = NULL;

	lcsr_destroy_node(root);


}

void lcsr_add_child_node(lcsr_node* parent, lcsr_node*child)
{

	if (parent->left_child == NULL)
	{
		parent->left_child = child;

	}
	else
	{
		lcsr_node* temp = parent->left_child;
		while (temp->right_child != NULL)
			temp = temp->right_child;

		temp->right_child = child;
	}


}


void lcsr_print_tree(lcsr_node * node, int depth)
{
	int i;

	for (i = 0; i < depth; i++)
		printf(" ");

	printf("%c\n", node->data);

	if (node->left_child != NULL)
		lcsr_print_tree(node->left_child, depth + 1);

	if (node->right_child != NULL)
		lcsr_print_tree(node->right_child, depth);




}