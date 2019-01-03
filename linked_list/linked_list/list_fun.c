#include "LinkedList.h"


// ��� ����//
Node* sll_create_node(ElementType NewData)
{

	Node* NewNode = (Node*)malloc(sizeof(Node));
	/*printf("%d", sizeof(Node*));
	printf("%d", sizeof(Node*));
*/
	NewNode->Data = NewData;
	NewNode->NextNode = NULL;

	return NewNode;


}
//��� �Ҹ�
void sll_destory_node(Node* Node)
{

	free(Node);

}

//��� �߰�
void sll_append_node(Node** Head, Node* NewNode)
{

	if ((*Head) == NULL)
	{
		*Head = NewNode;

	}
	else {

		Node* Tail = (*Head);
		while (Tail->NextNode != NULL)
		{
			Tail = Tail->NextNode;

		}
		Tail->NextNode = NewNode;


	}


}

// ��� ����
void sll_insert_after(Node *Current, Node * NewNode)
{

	NewNode->NextNode = Current->NextNode;
	Current->NextNode = NewNode;


}


//���ֱ�
void sll_insert_new_head(Node** Head, Node* NewHead)
{
	if (Head == NULL)
	{

		(*Head) = NewHead;

	}

	else {

		NewHead->NextNode = (*Head);

	}



}


// ��� ����
void sll_remove_node(Node ** Head, Node * Remove)
{

	if (*Head == Remove)
	{
		*Head = Remove->NextNode;
	}
	else {

		Node * Current = *Head;
		while (Current != Remove)
		{
			Current = Current->NextNode;

		}
		if (Current != NULL)
		{
			Current->NextNode = Remove->NextNode;
		}

	}

}

//�ε����� �ָ� �� ��� ��ȯ
Node* sll_get_node_at(Node* Head, int location) {

	Node* Current = Head;
	while (Current != NULL && (--location) >= 0)
	{
		Current = Current->NextNode;


	}

	return Current;

}


//����� ���� 
int sll_get_node_count(Node* Head)
{

	int Count = 0;
	Node*Current = Head;
	while (Current->NextNode != NULL) {

		Current = Current->NextNode;
		Count++;

	}
	return Count;

}