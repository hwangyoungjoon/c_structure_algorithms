#include "double_linked_list.h"

int main(void) {

	int i = 0;
	int count = 0;
	node* list=NULL;
	node* new_node = NULL;
	node* current = NULL;

	for (i = 0; i < 5; i++)
	{

		new_node = dll_create_node(i);
		dll_append_node(&list, new_node);
	}

	count = dll_get_node_count(list);
	for (i = 0; i < count; i++)
	{
		current = dll_get_node_at(list, i);
		printf("list[%d]:%d\n", i, current->data);
	}

	return 0;
}