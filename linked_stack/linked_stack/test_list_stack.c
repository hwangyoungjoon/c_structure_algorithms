#include "linked_stack.h"

int main(void) {

	int i = 0;
	int count = 0;
	node * popped;

	linked_stack* stack;

	lls_create_stack(&stack);

	lls_push(stack, lls_create_node("abc"));
	lls_push(stack, lls_create_node("def"));
	lls_push(stack, lls_create_node("ghi"));
	lls_push(stack, lls_create_node("jkl"));

	count = lls_get_size(stack);
	printf("size: %d, top:%s\n\n", count, lls_top(stack)->data);

	for (i = 0; i < count; i++)
	{
		if (lls_is_empty(stack)) break;
		popped = lls_pop(stack);
		printf("popped:%s, ", popped->data);
		lls_destroy_node(popped);

		if (!lls_is_empty(stack))
		{
			printf("current top:%s\n", lls_top(stack)->data);

		}
		else {
		
			printf("stack is empty\n");
		
		}
		

	}
	lls_destory_stack(stack);

	return 0;

}