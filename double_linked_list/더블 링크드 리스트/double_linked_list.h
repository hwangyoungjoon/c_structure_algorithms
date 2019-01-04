// 더블 링크드 리스트 헤더 파일 만들기

#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct tag_node
{
	int data;
	struct tag_node* prev_node;
	struct tag_node* next_node;


}node;// 링크드 리스트와 다른 것은 앞에 있는 이전 노드를 참조하는 포인터(prev_node)가 존재한다는 것.
typedef int element_type;

// 
node* dll_create_node(element_type new_data);
void dll_destroy_node(node* node);
void dll_append_node(node** head, node* new_node);
void dll_insert_after(node* current, node* new_node);
void dll_remove_node(node** head, node* remove);
node* dll_get_node_at(node* head, int location);
int dll_get_node_count(node* head);

#endif

