#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <stdio.h>
#include<stdlib.h>

typedef int ElementType;

// 노드 선언
typedef struct tagNode
{
	ElementType Data;
	struct tagNode* NextNode;


}Node;


// 함수원형 선언
Node* sll_create_node(ElementType NewData);
void sll_destory_node(Node* Node);
void sll_append_node(Node** Head, Node* NewNode);
void sll_insert_after(Node* Current, Node * NewNode);
void sll_insert_new_head(Node** Head, Node* NewHead);
void sll_remove_node(Node** Head, Node* remove);
Node* sll_get_node_at(Node* Head, int location);
int sll_get_node_count(Node* Head);
#endif





//void main()
//{
//	Node* list = NULL;
//	Node* NewNode = NULL;
//	
//	NewNode=sll_create_node(119);
//
//
//}