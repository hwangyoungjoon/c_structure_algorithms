#ifndef LINKEDLIST_STACK_H
#define LINKEDLIST_STACK_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct tag_node 
{
	char* data;
	struct tag_node* next_node;
}node;
// 노드가 다음 노드를 가리키고 있음

typedef struct tag_linked_stack {

	node* list;
	node* top;


}linked_stack;
// 탑노드와 리스트를 가지고 있음
// 탑포인터는 자유저장소에 존재하는 테일 노드의 주소를 가리킴
// 리스트 포인터는 자유저장소에 존재하는 헤드 노드의 주소를 가리킴

void lls_create_stack(linked_stack** stack);
void lls_destory_stack(linked_stack* stack);

node* lls_create_node(char* new_data);
void lls_destroy_node(node* _node);

void lls_push(linked_stack* stack, node* new_node);
node* lls_pop(linked_stack* stack);

node * lls_top(linked_stack* stack);
int lls_get_size(linked_stack* stack);
int lls_is_empty(linked_stack* stack);

#endif


