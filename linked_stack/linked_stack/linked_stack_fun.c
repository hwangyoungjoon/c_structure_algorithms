#include "linked_stack.h"



void lls_create_stack(linked_stack** stack) // 스택 초기화 스택 형성
{
	(*stack) = (linked_stack*)malloc(sizeof(linked_stack));
	(*stack)->list = NULL;
	(*stack)->top = NULL;
}



void lls_destory_stack(linked_stack* stack)// 스택 메모리 제거
{
	while (!lls_is_empty(stack))
	{
		node* popped = lls_pop(stack);
		lls_destroy_node(popped);
	}
	free(stack);
}

node* lls_create_node(char* new_data)// 스택에 새로운 데이터 추가
{
	node* new_node = (node*)malloc(sizeof(node));
	new_node->data = (char*)malloc(strlen(new_data) + 1);
	strcpy(new_node->data, new_data);

	new_node->next_node = NULL;

	return new_node;
}

void lls_destroy_node(node* _node) // 노드 없애기
{

	free(_node->data);
	free(_node);

}

void lls_push(linked_stack* stack, node* new_node)// 새로운 노드추가 push, 새로운데이터는 가장 처음으로 온다.
{

	if (stack->list == NULL) // list 헤드의 주소를 가리키고 있음
	{
		stack->list = new_node;
	}
	else {
	
		node* oldtop = stack->list;
		
		while (oldtop->next_node != NULL)//최상위 노드를 찾아 새로운 노드 추가 //위로 올라간다는 것을 항상 명심할것
		{
			oldtop = oldtop->next_node;
		}
		oldtop->next_node = new_node; //새로운 노드 추가
	}
	stack->top = new_node; //스택의 탑필드에 새 노드의 주소를 등록한다. 
}
node* lls_pop(linked_stack* stack) {

	node* topnode = stack->top;
	if (stack->list == stack->top)
	{
		stack->list = NULL;
		stack->top = NULL;
	}
	else
	{
		node * current_top = stack->list;
		while (current_top != NULL && current_top->next_node != stack->top)
		{

			current_top = current_top->next_node;
		}

		stack->top = current_top;
		current_top->next_node = NULL;
	}
	return topnode;
}

node * lls_top(linked_stack* stack)
{

	return stack -> top;

}
int lls_get_size(linked_stack* stack)
{

	int count = 0;
	node* current = stack->list;

	while (current != NULL)
	{
		
		current = current->next_node;
		count++;
	}
	return count;
}
int lls_is_empty(linked_stack* stack)
{

	return (stack->list == NULL);
}


