#include "LinkedList.h"

//Node* sll_create_node(ElementType NewData);
//void sll_destory_node(Node* Node);
//void sll_append_node(Node** Head, Node* NewNode);
//void sll_insert_after(Node* Current, Node * NewNode);
//void sll_insert_new_head(Node** Head, Node* NewHead);
//void sll_remove_node(Node** Head, Node* remove);
//Node* sll_get_node_at(Node* Head, int location);
//int sll_get_node_count(Node* Head);
//

int main(void)
{
	int i = 0;
	int Count = 0;
	Node * List = NULL;
	Node * Current = NULL;
	Node * NewNode = NULL;

	//��� �߰� 
	for (i=0; i < 5; i++)
	{

		NewNode = sll_create_node(i);
		sll_append_node(&List, NewNode);

	}
	NewNode = sll_create_node(-1);
	sll_insert_new_head(&List, NewNode);

	//����Ʈ ���
	Count = sll_get_node_count(List);
	for (i = 0; i < Count; i++)
	{
		Current = sll_get_node_at(List, i);
		printf("list[%d]: %d\n", i, Current->Data);
		

	}

	printf("����° ��� �ڿ��� ����\n");
	Current = sll_get_node_at(List, 2);
	NewNode = sll_create_node(3000);
	sll_insert_after(Current, NewNode);

	Count = sll_get_node_count(List);
	for (i = 0; i < Count; i++)
	{
		Current = sll_get_node_at(List, i);
		printf("list[%d]: %d\n", i, Current->Data);


	}

	printf("��� ��� �޸� ����\n");
	
	for (i = 0; i < Count; i++)
	{
		Current = sll_get_node_at(List, 0);
		if (Current != NULL)
		{
			sll_remove_node(&List, Current);
			sll_destory_node(Current);
		}

	}
	return 0;
}