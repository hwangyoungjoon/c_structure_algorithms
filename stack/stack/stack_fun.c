#include "stack_type.h"

void as_create_stack(array_stack** stack, int capacity) 
{
	// 스택을 힙에 저장
	(*stack) = (array_stack*)malloc(sizeof(array_stack));
	//입력된 capacity만큼의 노드를 힙에 생성
	(*stack)->nodes = (node*)malloc(sizeof(node)*capacity);
	// capacity 및 top 초기화
	(*stack)->capacity = capacity;
	(*stack)->top = 0;


}

void as_destory_stack(array_stack* stack)
{
	free(stack->nodes);

	free(stack);


}

void as_push(array_stack* stack, element_type data) 
{
	int position = stack->top;
	stack->nodes[position].data = data;
	stack->top++;

}
element_type as_pop(array_stack* stack) 
{

	int position = --(stack->top);
	return stack->nodes[position].data;
}

element_type as_top(array_stack* stack) 
{
	int position = stack->top - 1;

	return stack->nodes[position].data;


}

int as_get_size(array_stack* stack)
{
	return stack->top;
}
int as_is_empty(array_stack* stack)
{
	return (stack->top == 0);

}