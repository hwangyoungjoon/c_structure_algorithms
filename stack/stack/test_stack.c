#include "stack_type.h"

int main(void)
{
	int i = 0;
	array_stack * stack = NULL;

	as_create_stack(&stack, 10);

	as_push(stack, 3);
	as_push(stack, 37);
	as_push(stack, 11);
	as_push(stack, 12);

	printf("capacity: %d, size: %d, top:%d\n\n", stack->capacity, as_get_size(stack), as_top(stack));

	for (i = 0; i < 4; i++)
	{

		if (as_is_empty(stack))
			break;
		printf("poped:%d", as_pop(stack));
		if (!as_is_empty(stack))
			printf("current top:%d\n", as_top(stack));
		else
			printf("stack is empty\n");

		

	}

	as_destory_stack(stack);
	return 0;
}