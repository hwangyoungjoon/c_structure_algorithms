#include "double_linked_list.h"
#include "stddef.h"

//노드 생성
node* dll_create_node(element_type new_data)
{
	node* newnode = (node*)malloc(sizeof(node)); //메모리 부여
	
	newnode ->data = new_data;
	newnode ->prev_node = NULL;
	newnode ->next_node = NULL;
	
	return newnode;
}

//노드소멸


void dll_destroy_node(node* node)
{

	free(node);

}
// 노드추가

void dll_append_node(node** head, node* new_node)
{

	if ((*head) == NULL)
	{
		*head = new_node;

	}
	else {
	
		node* tail = (*head);
		while (tail->next_node != NULL)
		{
			tail = tail->next_node;

		}
		tail->next_node = new_node;
		new_node->prev_node = tail;
	
	
	}


}

//환형 링크드 리스트 노드 추가
void cdll_append_node(node** head, node* new_node)
{

	if ((*head) == NULL)
	{

		*head = new_node;
		(*head)->prev_node = *head;
		(*head)->next_node = *head;

	}
	else
	{
		node* tail = (*head)->prev_node;
		tail->next_node->prev_node = new_node;
		tail->next_node = new_node;

		new_node->next_node = (*head);
		new_node->prev_node = tail;

	}

}
//환형 링크드 리스트 노드 삭제
void cdll_remove_node(node** head, node* remove)
{
	if (*head == remove)
	{
		(*head)->prev_node->next_node = remove->next_node;
		(*head)->next_node->prev_node = remove->prev_node;
		
		*head = remove->next_node;

		remove->prev_node = NULL;
		remove->next_node = NULL;


	}
	else {
	
		node * temp = remove;
		remove->prev_node->next_node = temp->next_node;
		remove->next_node->prev_node = temp->prev_node;

		remove->prev_node = NULL;
		remove->next_node = NULL;
	
	
	}

	
	
	
}



//노드삽입
void dll_insert_after(node* current, node* new_node)
{

	new_node->next_node = current->next_node;
	new_node->prev_node = current->prev_node;

	if (current->next_node != NULL)
	{
		current->next_node->prev_node = new_node;
		current->prev_node->next_node = new_node;


	}



}
//노드 삭제
void dll_remove_node(node** head, node* remove)
{
	if (*head == remove)
	{

		*head = remove->next_node;
		if ((*head) != NULL)
		{
			(*head)->prev_node = NULL;

			remove->prev_node = NULL;
			remove->next_node = NULL;
		}
	}
	else 
	{
	
		node* temp = remove;
		if (remove->prev_node != NULL) remove->prev_node->next_node = temp->next_node;
		if (remove->next_node != NULL)	remove->next_node->prev_node = temp->prev_node;

		remove->prev_node = NULL;
		remove->next_node = NULL;
		
	
	}



}


node* dll_get_node_at(node* head, int location)
{
	node* current = head;

	for (int count = 0; count < location; count++)
	{
		current = current->next_node;

	}
	return current;

}

//노드 수세기
int dll_get_node_count(node* head) {

	int count = 0;
	node * current = head;

	while(current->next_node!=NULL)
	{	
		
		current = current->next_node;
		count++;
	}

	return count;
}
