#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <stdio.h>
#include <stdlib.h>

typedef char element_type;

typedef struct tag_sb_node
{

	struct tag_sb_node* left;
	struct tag_sb_node* right;
	element_type data;

}bt_node;


bt_node* bt_create_node(element_type new_data);
void bt_destory_node(bt_node* node);
void bt_destory_tree(bt_node* root);
void bt_preorder_print(bt_node* node);
void bt_inorder_print(bt_node* node);
void bt_postorder_print(bt_node* node);
#endif