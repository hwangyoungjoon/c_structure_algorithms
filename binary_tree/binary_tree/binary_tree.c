#include "binary_tree.h"
bt_node* bt_create_node(element_type new_data)
{

	bt_node* new_node = (bt_node*)malloc(sizeof(bt_node));
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->data = new_data;
	return new_node;
}

void bt_destory_node(bt_node* node)
{

	free(node);
}

void bt_destory_tree(bt_node* node)
{

	if (node == NULL)
		return;

	bt_destory_tree(node->left);
	bt_destory_tree(node->right);
	bt_destory_tree(node);

}

void bt_preorder_print(bt_node* node)
{
	if (node == NULL)
		return;

	printf(" %c", node->data);

	bt_preorder_print(node->left);

	bt_preorder_print(node->right);


}


void bt_inorder_print(bt_node* node)
{
	if (node ==NULL)
		return;


	bt_inorder_print(node->left);

	printf(" %c", node->data);

	bt_inorder_print(node->right);


}

void bt_postorder_print(bt_node* node)
{
	if (node == NULL)
		return;


	bt_postorder_print(node->left);

	bt_postorder_print(node->right);

	printf(" %c", node->data);


}

